// Copyright Epic Games, Inc. All Rights Reserved.

#include "EngineSystem.h"

#if VEHICLE_DEBUGGING_ENABLED
PRAGMA_DISABLE_OPTIMIZATION
#endif

namespace Chaos
{
	FSimpleEngineSim::FSimpleEngineSim(const FSimpleEngineConfig* StaticDataIn) : TVehicleSystem<FSimpleEngineConfig>(StaticDataIn)
		, MaxTorque(Setup().MaxTorque)
		, ThrottlePosition(0.f)
		, TargetSpeed(0.f)
		, CurrentRPM(0.f)
		, DriveTorque(0.f)
		, EngineIdleSpeed(RPMToOmega(Setup().EngineIdleRPM))
		, MaxEngineSpeed(RPMToOmega(Setup().MaxRPM))
		, BreakerRPMTarget(200.f)
		, BreakerRPMAmount(BreakerRPMTarget)
		, bBreakerOn(false)
		, EngineStarterTimer(0.f)
		, bEngineStarterRunning(false)
		, EngineStarted(true)
		, bEngineStarterCompleted(true)
		, FreeRunning(false)
		, Omega(0.f)
		, RevRate(0.f)
		, bUseAuto(true)
		, bIdleEngineDriving(false)
	{

	}

	float FSimpleEngineSim::GetTorqueFromRPM(float RPM, bool LimitToIdle /*= true*/)
	{
		if ((FMath::Abs(RPM - Setup().MaxRPM) < 1.0f) || Setup().MaxRPM == 0)
		{
			return 0.f;
		}
		
		if (LimitToIdle)
		{
			RPM = FMath::Clamp(RPM, 0.f, (float)Setup().MaxRPM);
		}
		
		return Setup().TorqueCurve.GetValue(RPM, Setup().MaxRPM, MaxTorque);
	}

	float FSimpleEngineSim::GetStarterRPM(float Time)
	{
		return Setup().EngineStarterCurve.GetValue(Time, Setup().EngineStarterDuration, Setup().MaxEngineStarterRPM);
	}

	void FSimpleEngineSim::Simulate_EngineStarter(float DeltaTime)
	{
		/** RPM animation during engine start */
		bool bRPMUnderSlippingPoint = OmegaToRPM(Omega) < Setup().EngineSlippingPoint;
		if((bEngineStarterRunning && bRPMUnderSlippingPoint) || (!bEngineStarterCompleted && EngineStarterTimer < Setup().EngineStarterDuration && EngineStarted))
		{
			EngineStarterTimer += DeltaTime;

			/** Loop engine initialization if RPM speed is too low */ 
			if(!FreeRunning && bRPMUnderSlippingPoint && !bUseAuto)
			{
				EngineStarterTimer = FMath::Min(EngineStarterTimer, Setup().EngineIgnitionDuration);
			}
			
			TargetSpeed = RPMToOmega(GetStarterRPM(EngineStarterTimer)) ;
			bEngineStarterCompleted = false;
		}
		else
		{
			EngineStarterTimer = 0.f;
			bEngineStarterCompleted = true;
		}
	}
	
	void FSimpleEngineSim::Simulate_AutomaticTransmissionEngine(float DeltaTime)
	{
		float PrevOmega = Omega;
		
		if (FreeRunning) /** Gear == 0 */
			{
			Omega += GetEngineTorque() * DeltaTime * Setup().EngineRevUpMOI;
			Omega += (TargetSpeed - Omega) * Setup().EngineRevDownRate * DeltaTime;
			}
		else
		{
			TargetSpeed = FMath::Max(TargetSpeed, EngineStarted ? EngineIdleSpeed : 0.f);
			Omega += (TargetSpeed - Omega) * 4.0f * DeltaTime;
		}
		RevRate = (Omega - PrevOmega) / DeltaTime;
	}
	
	void FSimpleEngineSim::Simulate_ManuelTransmissionEngine(float DeltaTime)
	{
		float PrevOmega = Omega;
		float MaxRPM = Setup().MaxRPM;
		
		/** Engine breaker */
		bool bInitBreaker = CurrentRPM >= MaxRPM - Setup().TorqueCurve.GetValue(MaxRPM, MaxRPM, MaxTorque) / 5.f;
		if(bInitBreaker || bBreakerOn)
		{
			BreakerRPMAmount -= MaxRPM - CurrentRPM;
		}
				
		if(BreakerRPMAmount <= 0.f)
		{
			BreakerRPMAmount = BreakerRPMTarget;
		}
				
		bBreakerOn = BreakerRPMAmount != BreakerRPMTarget;
		if (FreeRunning) /** Gear == 0 */
		{
			TargetSpeed = FMath::Max(TargetSpeed, EngineIdleSpeed);
			if(bBreakerOn) /** Breaker decel */
			{
				Omega += (MaxEngineSpeed - BreakerRPMTarget - Omega) * Setup().EngineRevDownRate * DeltaTime;
			}
			else /** Accel */
			{
				Omega += GetEngineTorque() * DeltaTime * Setup().EngineRevUpMOI;
			}
					
			if(ThrottlePosition == 0.0f) /** Throttle decel */
			{
				Omega += (TargetSpeed - Omega) * Setup().EngineRevDownRate * DeltaTime;
			}
		}
		else
		{
			TargetSpeed = FMath::Max(TargetSpeed, EngineStarted ? EngineIdleSpeed : 0.f);
			if(bBreakerOn) /** Breaker decel */
			{
				Omega += (TargetSpeed - BreakerRPMTarget - Omega) * Setup().EngineRevDownRate * DeltaTime;
			}
			else /** Throttle accel || decel */
			{
				Omega += (TargetSpeed - Omega) * 4.0f * DeltaTime;
			}
		}
		RevRate = (Omega - PrevOmega) / DeltaTime;
	}

	void FSimpleEngineSim::Simulate(float DeltaTime)
	{
		float PrevOmega = Omega;
		
		/** RPM animation during engine start */
		Simulate_EngineStarter(DeltaTime);

		/** Engine Sim */
		if((EngineStarted || !FreeRunning) && !bEngineStarterRunning && bEngineStarterCompleted)
		{
			if(bUseAuto) /** Automatic */
			{
				Simulate_AutomaticTransmissionEngine(DeltaTime);
			}
			else /** Manual */
			{
				Simulate_ManuelTransmissionEngine(DeltaTime);
			}
			
			if(bIdleEngineDriving) /** No user input but idle engine force is applied */ 
			{
				CurrentRPM = OmegaToRPM(Omega);
				CurrentRPM -= CurrentRPM - OmegaToRPM(Omega);
			}
			else
			{
				float MaxRPM = Setup().MaxRPM;
				float IdleRPM = Setup().EngineIdleRPM;
				float MinInput = FreeRunning && EngineStarted ? IdleRPM : 0.f;
				
				CurrentRPM = FMath::GetMappedRangeValueClamped(FVec2(MinInput, MaxRPM), FVec2(IdleRPM, MaxRPM), OmegaToRPM(Omega));
				CurrentRPM -= CurrentRPM - OmegaToRPM(Omega);
			}
		}
		else
		{
			Omega += (TargetSpeed - Omega) * 4.0f * DeltaTime;
			RevRate = (Omega - PrevOmega) / DeltaTime;
			CurrentRPM = OmegaToRPM(Omega);
		}
	}
} // namespace Chaos


#if VEHICLE_DEBUGGING_ENABLED
PRAGMA_ENABLE_OPTIMIZATION
#endif
