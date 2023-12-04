// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Math/UnrealMathSSE.h"
#include "VehicleSystemTemplate.h"
#include "VehicleUtility.h"

#if VEHICLE_DEBUGGING_ENABLED
PRAGMA_DISABLE_OPTIMIZATION
#endif


namespace Chaos
{

	/*
	 *	Simple Normally Aspirated Engine
	 *  Output defined by a single torque curve over the rev range
	 *	No turbo/ turbo lag
	 *
	 * #todo: proper default values
	 * #todo: replace hardcoded graph with curve data
	 */

	struct CHAOSVEHICLESCORE_API FSimpleEngineConfig
	{
		FSimpleEngineConfig()
			: MaxTorque(0.f)
			, EngineStarterDuration(1.5f)
			, EngineIgnitionDuration(1.0f)
			, MaxEngineStarterRPM(850.f)
			, MaxRPM(6000)
			, EngineIdleRPM(1200)
			, EngineSlippingPoint(1250)
			, EngineBrakeEffect(0.2f)
			, EngineRevUpMOI(1.0f)
			, EngineRevDownRate(1.0f)
		{
			// #todo: do we want to provide a default torque curve, maybe even just a straight line

		}

		// #todo: want something like UCurveFloat / FRuntimeFloatCurve / FTorqueCurveEditor
		FNormalisedGraph TorqueCurve;
		float MaxTorque;			// [N.m] The peak torque Y value in the normalized torque graph
		
		FNormalisedGraph EngineStarterCurve;
		float EngineStarterDuration;// How many time the starter need to run before starting the engine
		float EngineIgnitionDuration;// How many time the starter need to initialize the engine
		float MaxEngineStarterRPM; // [RPM] Max engine starter speed 
		
		uint16 MaxRPM;				// [RPM] The absolute maximum RPM the engine can theoretically reach (last X value in the normalized torque graph)
		uint16 EngineIdleRPM; 		// [RPM] The RPM at which the throttle sits when the car is not moving
		uint16 EngineSlippingPoint; // [RPM] The RPM at which the engine stalls
		float EngineBrakeEffect;	// [0..1] How much the engine slows the vehicle when the throttle is released

		float EngineRevUpMOI;		// Affects speed at which engine RPM increases
		float EngineRevDownRate;		// Affects speed at which engine RPM decreases

	};

	class CHAOSVEHICLESCORE_API FSimpleEngineSim : public TVehicleSystem<FSimpleEngineConfig>
	{
	public:

		FSimpleEngineSim(const FSimpleEngineConfig* StaticDataIn);

		/** Start the engine */
		void StartEngine()
		{
			EngineStarted = true;
			
			// #todo: event for audio? perhaps a delay before you can drive off
		}

		/** Stop the engine */
		void StopEngine()
		{
			EngineStarted = false;

			// #todo: event for audio? perhaps a delay before you can drive off
		}

		/** Pass in the throttle position to the engine */
		void SetThrottle(float InThrottle)
		{
			FVehicleUtility::ClampNormalRange(InThrottle);
			ThrottlePosition = InThrottle;
		}

		/** When the wheels are in contact with the ground and clutch engaged then the load 
		 * on the engine from the wheels determines the engine speed. With no clutch simulation
		 * just setting the engine RPM directly to match the wheel speed.
		 */
		void SetEngineRPM(bool FreeRunningIn, float InEngineRPM)
		{
			FreeRunning = FreeRunningIn;
			bool bRPMUnderSlippingPoint = OmegaToRPM(Omega) < Setup().EngineSlippingPoint;
			
			if( ((EngineStarted || !FreeRunning) && !bEngineStarterRunning) || (bEngineStarterRunning && !bRPMUnderSlippingPoint) )
			{
				if (FreeRunning)
				{
					TargetSpeed = EngineIdleSpeed;
				}
				else
				{
					float MinInput = bIdleEngineDriving || !EngineStarted ? 0.f : (float)Setup().EngineIdleRPM;
					TargetSpeed = RPMToOmega(FMath::GetMappedRangeValueClamped(FVec2(.0f, (float)Setup().MaxRPM), FVec2(MinInput, (float)Setup().MaxRPM), FMath::Abs(InEngineRPM)));
				}
			}
			else
			{
				TargetSpeed = 0.f;
			}
		}

		void SetMaxTorque(float InTorque)
		{
			MaxTorque = InTorque;
		}

		void SetTransmissionType(bool InType)
		{
			bUseAuto = InType;
		}

		void SetIdleEngineDriving(bool InState)
		{
			bIdleEngineDriving = InState;
		}

		/** Set the Engine angular velocity */
		void SetEngineOmega( const float EngineOmega)
		{
			Omega = EngineOmega;
		}

		/** Set if the engine starting */
		void SetEngineStarterRunning(bool InState)
		{
			bEngineStarterRunning = InState;
		}
		
		float GetEngineTorque()
		{
			return ThrottlePosition * GetTorqueFromRPM();
		}

		float GetEngineRevRate()
		{
			return RevRate;
		}

		float GetTorqueFromRPM(bool LimitToIdle = true)
		{
			return GetTorqueFromRPM(CurrentRPM);
		}

		/* get torque value from torque curve based on input RPM */
		float GetTorqueFromRPM(float RPM, bool LimitToIdle = true);
		
		/** Get RPM at x time for engine starter */
		float GetStarterRPM(float Time);

		/** get the Engine speed in Revolutions Per Minute */
		float GetEngineRPM() const
		{
			return CurrentRPM;
		}
		
		bool IsBreakerOn() const
		{
			return bBreakerOn;
		}

		/** get the Engine angular velocity */
		float GetEngineOmega() const
		{
			return Omega;
		}

		bool IsEngineStarted() const
		{
			return EngineStarted;
		}

		bool IsUsingAutomaticTransmission() const
		{
			return bUseAuto;
		}

		/** No input, but engine driving wheels by its own force */
		bool GetIdleEngineDriving() const
		{
			return bIdleEngineDriving;
		}
		
		/** 
		 * Simulate - NOP at the moment
		 */
		void Simulate(float DeltaTime);

		void Simulate_EngineStarter(float DeltaTime);
		void Simulate_AutomaticTransmissionEngine(float DeltaTime);
		void Simulate_ManuelTransmissionEngine(float DeltaTime);

	protected:
		float MaxTorque;		// [N.m] The peak torque Y value in the normalized torque graph
		float ThrottlePosition; // [0..1 Normalized position]
		float TargetSpeed;		// target RPM
		float CurrentRPM;		// current RPM
		float DriveTorque;		// current torque [N.m]

		float EngineIdleSpeed;
		float MaxEngineSpeed;

		float BreakerRPMTarget; // how much RPM breaker need to remove
		float BreakerRPMAmount; // how much RPM breaker removes
		bool  bBreakerOn;       // is breaker affecting RPM 

		float EngineStarterTimer;
		bool bEngineStarterRunning; // User is starting the engine
		bool EngineStarted;		// is the engine turned off or has it been started
		bool bEngineStarterCompleted;
		bool FreeRunning;		// is engine in neutral with no load from the wheels/transmission

		float Omega;			// engine speed
		float RevRate;			// for debug rather than any practical purpose

		bool bUseAuto;          // True if transmission is automatic
		bool bIdleEngineDriving;
	};

} // namespace Chaos

#if VEHICLE_DEBUGGING_ENABLED
PRAGMA_ENABLE_OPTIMIZATION
#endif
