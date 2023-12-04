// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVehicleMovementComponent.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVehicleMovementComponent() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleMovementComponent();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleMovementComponent_NoRegister();
	CHAOSVEHICLES_API UEnum* Z_Construct_UEnum_ChaosVehicles_EInputFunctionType();
	CHAOSVEHICLES_API UEnum* Z_Construct_UEnum_ChaosVehicles_EVehicleAerofoilType();
	CHAOSVEHICLES_API UEnum* Z_Construct_UEnum_ChaosVehicles_EVehicleThrustType();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleAerofoilConfig();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleInputRateConfig();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleInputs();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleReplicatedState();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleThrustConfig();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleTorqueControlConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetworkPhysicsComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_ChaosVehicles();
// End Cross Module References

static_assert(std::is_polymorphic<FVehicleReplicatedState>() == std::is_polymorphic<FVehicleInputs>(), "USTRUCT FVehicleReplicatedState cannot be polymorphic unless super FVehicleInputs is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleReplicatedState;
class UScriptStruct* FVehicleReplicatedState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleReplicatedState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleReplicatedState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleReplicatedState, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("VehicleReplicatedState"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleReplicatedState.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FVehicleReplicatedState>()
{
	return FVehicleReplicatedState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGear_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetGear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleUp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrottleUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleDown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrottleDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunEngineStarter_MetaData[];
#endif
		static void NewProp_RunEngineStarter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RunEngineStarter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartEngine_MetaData[];
#endif
		static void NewProp_StartEngine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StartEngine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleReplicatedState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_TargetGear_MetaData[] = {
		{ "Comment", "// state replication: gear\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "state replication: gear" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_TargetGear = { "TargetGear", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleReplicatedState, TargetGear), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_TargetGear_MetaData), Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_TargetGear_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_ThrottleUp_MetaData[] = {
		{ "Comment", "// input replication: increase throttle\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "input replication: increase throttle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_ThrottleUp = { "ThrottleUp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleReplicatedState, ThrottleUp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_ThrottleUp_MetaData), Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_ThrottleUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_ThrottleDown_MetaData[] = {
		{ "Comment", "// input replication: decrease throttle\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "input replication: decrease throttle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_ThrottleDown = { "ThrottleDown", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleReplicatedState, ThrottleDown), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_ThrottleDown_MetaData), Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_ThrottleDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_RunEngineStarter_MetaData[] = {
		{ "Comment", "// input replication: Engine starter is running\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "input replication: Engine starter is running" },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_RunEngineStarter_SetBit(void* Obj)
	{
		((FVehicleReplicatedState*)Obj)->RunEngineStarter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_RunEngineStarter = { "RunEngineStarter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVehicleReplicatedState), &Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_RunEngineStarter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_RunEngineStarter_MetaData), Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_RunEngineStarter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_StartEngine_MetaData[] = {
		{ "Comment", "// input replication: Start engine\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "input replication: Start engine" },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_StartEngine_SetBit(void* Obj)
	{
		((FVehicleReplicatedState*)Obj)->StartEngine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_StartEngine = { "StartEngine", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVehicleReplicatedState), &Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_StartEngine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_StartEngine_MetaData), Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_StartEngine_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_TargetGear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_ThrottleUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_ThrottleDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_RunEngineStarter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewProp_StartEngine,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		Z_Construct_UScriptStruct_FVehicleInputs,
		&NewStructOps,
		"VehicleReplicatedState",
		Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::PropPointers),
		sizeof(FVehicleReplicatedState),
		alignof(FVehicleReplicatedState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleReplicatedState()
	{
		if (!Z_Registration_Info_UScriptStruct_VehicleReplicatedState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleReplicatedState.InnerSingleton, Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VehicleReplicatedState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleTorqueControlConfig;
class UScriptStruct* FVehicleTorqueControlConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleTorqueControlConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleTorqueControlConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleTorqueControlConfig, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("VehicleTorqueControlConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleTorqueControlConfig.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FVehicleTorqueControlConfig>()
{
	return FVehicleTorqueControlConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawTorqueScaling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawTorqueScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawFromSteering_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawFromSteering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawFromRollTorqueScaling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawFromRollTorqueScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchTorqueScaling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchTorqueScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollTorqueScaling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollTorqueScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollFromSteering_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollFromSteering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationDamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleTorqueControlConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Torque Control Enabled */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Torque Control Enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FVehicleTorqueControlConfig*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVehicleTorqueControlConfig), &Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_Enabled_MetaData), Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_Enabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawTorqueScaling_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Yaw Torque Scaling */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Yaw Torque Scaling" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawTorqueScaling = { "YawTorqueScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTorqueControlConfig, YawTorqueScaling), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawTorqueScaling_MetaData), Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawTorqueScaling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawFromSteering_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawFromSteering = { "YawFromSteering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTorqueControlConfig, YawFromSteering), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawFromSteering_MetaData), Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawFromSteering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawFromRollTorqueScaling_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawFromRollTorqueScaling = { "YawFromRollTorqueScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTorqueControlConfig, YawFromRollTorqueScaling), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawFromRollTorqueScaling_MetaData), Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawFromRollTorqueScaling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_PitchTorqueScaling_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Pitch Torque Scaling */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Pitch Torque Scaling" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_PitchTorqueScaling = { "PitchTorqueScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTorqueControlConfig, PitchTorqueScaling), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_PitchTorqueScaling_MetaData), Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_PitchTorqueScaling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RollTorqueScaling_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Roll Torque Scaling */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Roll Torque Scaling" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RollTorqueScaling = { "RollTorqueScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTorqueControlConfig, RollTorqueScaling), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RollTorqueScaling_MetaData), Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RollTorqueScaling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RollFromSteering_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RollFromSteering = { "RollFromSteering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTorqueControlConfig, RollFromSteering), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RollFromSteering_MetaData), Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RollFromSteering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RotationDamping_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Rotation damping */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Rotation damping" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RotationDamping = { "RotationDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTorqueControlConfig, RotationDamping), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RotationDamping_MetaData), Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RotationDamping_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_Enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawTorqueScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawFromSteering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_YawFromRollTorqueScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_PitchTorqueScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RollTorqueScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RollFromSteering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewProp_RotationDamping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"VehicleTorqueControlConfig",
		Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::PropPointers),
		sizeof(FVehicleTorqueControlConfig),
		alignof(FVehicleTorqueControlConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleTorqueControlConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VehicleTorqueControlConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleTorqueControlConfig.InnerSingleton, Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VehicleTorqueControlConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleTargetRotationControlConfig;
class UScriptStruct* FVehicleTargetRotationControlConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleTargetRotationControlConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleTargetRotationControlConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("VehicleTargetRotationControlConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleTargetRotationControlConfig.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FVehicleTargetRotationControlConfig>()
{
	return FVehicleTargetRotationControlConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRollVsSpeedEnabled_MetaData[];
#endif
		static void NewProp_bRollVsSpeedEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRollVsSpeedEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollControlScaling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollControlScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollMaxAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollMaxAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchControlScaling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchControlScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMaxAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMaxAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAccel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAccel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCentreRollStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoCentreRollStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCentrePitchStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoCentrePitchStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCentreYawStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoCentreYawStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleTargetRotationControlConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Rotation Control Enabled */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Rotation Control Enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FVehicleTargetRotationControlConfig*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVehicleTargetRotationControlConfig), &Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_Enabled_MetaData), Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_Enabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_bRollVsSpeedEnabled_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_bRollVsSpeedEnabled_SetBit(void* Obj)
	{
		((FVehicleTargetRotationControlConfig*)Obj)->bRollVsSpeedEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_bRollVsSpeedEnabled = { "bRollVsSpeedEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVehicleTargetRotationControlConfig), &Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_bRollVsSpeedEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_bRollVsSpeedEnabled_MetaData), Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_bRollVsSpeedEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RollControlScaling_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RollControlScaling = { "RollControlScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTargetRotationControlConfig, RollControlScaling), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RollControlScaling_MetaData), Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RollControlScaling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RollMaxAngle_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RollMaxAngle = { "RollMaxAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTargetRotationControlConfig, RollMaxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RollMaxAngle_MetaData), Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RollMaxAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_PitchControlScaling_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_PitchControlScaling = { "PitchControlScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTargetRotationControlConfig, PitchControlScaling), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_PitchControlScaling_MetaData), Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_PitchControlScaling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_PitchMaxAngle_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_PitchMaxAngle = { "PitchMaxAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTargetRotationControlConfig, PitchMaxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_PitchMaxAngle_MetaData), Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_PitchMaxAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RotationStiffness_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Rotation stiffness */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Rotation stiffness" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RotationStiffness = { "RotationStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTargetRotationControlConfig, RotationStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RotationStiffness_MetaData), Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RotationStiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RotationDamping_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Rotation damping */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Rotation damping" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RotationDamping = { "RotationDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTargetRotationControlConfig, RotationDamping), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RotationDamping_MetaData), Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RotationDamping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_MaxAccel_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Rotation mac accel */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Rotation mac accel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_MaxAccel = { "MaxAccel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTargetRotationControlConfig, MaxAccel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_MaxAccel_MetaData), Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_MaxAccel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentreRollStrength_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentreRollStrength = { "AutoCentreRollStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTargetRotationControlConfig, AutoCentreRollStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentreRollStrength_MetaData), Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentreRollStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentrePitchStrength_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentrePitchStrength = { "AutoCentrePitchStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTargetRotationControlConfig, AutoCentrePitchStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentrePitchStrength_MetaData), Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentrePitchStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentreYawStrength_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentreYawStrength = { "AutoCentreYawStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTargetRotationControlConfig, AutoCentreYawStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentreYawStrength_MetaData), Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentreYawStrength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_Enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_bRollVsSpeedEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RollControlScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RollMaxAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_PitchControlScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_PitchMaxAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RotationStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_RotationDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_MaxAccel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentreRollStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentrePitchStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewProp_AutoCentreYawStrength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"VehicleTargetRotationControlConfig",
		Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::PropPointers),
		sizeof(FVehicleTargetRotationControlConfig),
		alignof(FVehicleTargetRotationControlConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VehicleTargetRotationControlConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleTargetRotationControlConfig.InnerSingleton, Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VehicleTargetRotationControlConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleStabilizeControlConfig;
class UScriptStruct* FVehicleStabilizeControlConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleStabilizeControlConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleStabilizeControlConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("VehicleStabilizeControlConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleStabilizeControlConfig.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FVehicleStabilizeControlConfig>()
{
	return FVehicleStabilizeControlConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AltitudeHoldZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AltitudeHoldZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionHoldXY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionHoldXY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleStabilizeControlConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Torque Control Enabled */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Torque Control Enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FVehicleStabilizeControlConfig*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVehicleStabilizeControlConfig), &Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_Enabled_MetaData), Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_Enabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_AltitudeHoldZ_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Yaw Torque Scaling */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Yaw Torque Scaling" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_AltitudeHoldZ = { "AltitudeHoldZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleStabilizeControlConfig, AltitudeHoldZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_AltitudeHoldZ_MetaData), Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_AltitudeHoldZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_PositionHoldXY_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_PositionHoldXY = { "PositionHoldXY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleStabilizeControlConfig, PositionHoldXY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_PositionHoldXY_MetaData), Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_PositionHoldXY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_Enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_AltitudeHoldZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewProp_PositionHoldXY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"VehicleStabilizeControlConfig",
		Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::PropPointers),
		sizeof(FVehicleStabilizeControlConfig),
		alignof(FVehicleStabilizeControlConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VehicleStabilizeControlConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleStabilizeControlConfig.InnerSingleton, Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VehicleStabilizeControlConfig.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputFunctionType;
	static UEnum* EInputFunctionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputFunctionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputFunctionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVehicles_EInputFunctionType, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("EInputFunctionType"));
		}
		return Z_Registration_Info_UEnum_EInputFunctionType.OuterSingleton;
	}
	template<> CHAOSVEHICLES_API UEnum* StaticEnum<EInputFunctionType>()
	{
		return EInputFunctionType_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosVehicles_EInputFunctionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosVehicles_EInputFunctionType_Statics::Enumerators[] = {
		{ "EInputFunctionType::LinearFunction", (int64)EInputFunctionType::LinearFunction },
		{ "EInputFunctionType::SquaredFunction", (int64)EInputFunctionType::SquaredFunction },
		{ "EInputFunctionType::CustomCurve", (int64)EInputFunctionType::CustomCurve },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosVehicles_EInputFunctionType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Input Options */" },
		{ "CustomCurve.Name", "EInputFunctionType::CustomCurve" },
		{ "LinearFunction.Name", "EInputFunctionType::LinearFunction" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "SquaredFunction.Name", "EInputFunctionType::SquaredFunction" },
		{ "ToolTip", "Input Options" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVehicles_EInputFunctionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		"EInputFunctionType",
		"EInputFunctionType",
		Z_Construct_UEnum_ChaosVehicles_EInputFunctionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVehicles_EInputFunctionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVehicles_EInputFunctionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVehicles_EInputFunctionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ChaosVehicles_EInputFunctionType()
	{
		if (!Z_Registration_Info_UEnum_EInputFunctionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputFunctionType.InnerSingleton, Z_Construct_UEnum_ChaosVehicles_EInputFunctionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputFunctionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleInputRateConfig;
class UScriptStruct* FVehicleInputRateConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleInputRateConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleInputRateConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleInputRateConfig, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("VehicleInputRateConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleInputRateConfig.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FVehicleInputRateConfig>()
{
	return FVehicleInputRateConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiseRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RiseRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputCurveFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputCurveFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputCurveFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleInputRateConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_RiseRate_MetaData[] = {
		{ "Category", "VehicleInputRate" },
		{ "Comment", "/**\n\x09 * Rate at which the input value rises\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which the input value rises" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_RiseRate = { "RiseRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleInputRateConfig, RiseRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_RiseRate_MetaData), Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_RiseRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_FallRate_MetaData[] = {
		{ "Category", "VehicleInputRate" },
		{ "Comment", "/**\n\x09 * Rate at which the input value falls\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which the input value falls" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_FallRate = { "FallRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleInputRateConfig, FallRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_FallRate_MetaData), Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_FallRate_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_InputCurveFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_InputCurveFunction_MetaData[] = {
		{ "Category", "VehicleInputRate" },
		{ "Comment", "/**\n\x09 * Controller input curve, various predefined options, linear, squared, or user can specify a custom curve function\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Controller input curve, various predefined options, linear, squared, or user can specify a custom curve function" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_InputCurveFunction = { "InputCurveFunction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleInputRateConfig, InputCurveFunction), Z_Construct_UEnum_ChaosVehicles_EInputFunctionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_InputCurveFunction_MetaData), Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_InputCurveFunction_MetaData) }; // 655293052
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_UserCurve_MetaData[] = {
		{ "Category", "VehicleInputRate" },
		{ "Comment", "/**\n\x09 * Controller input curve - should be a normalized float curve, i.e. time from 0 to 1 and values between 0 and 1\n\x09 * This curve is only sued if the InputCurveFunction above is set to CustomCurve\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Controller input curve - should be a normalized float curve, i.e. time from 0 to 1 and values between 0 and 1\nThis curve is only sued if the InputCurveFunction above is set to CustomCurve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_UserCurve = { "UserCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleInputRateConfig, UserCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_UserCurve_MetaData), Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_UserCurve_MetaData) }; // 3321759441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_RiseRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_FallRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_InputCurveFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_InputCurveFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewProp_UserCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"VehicleInputRateConfig",
		Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::PropPointers),
		sizeof(FVehicleInputRateConfig),
		alignof(FVehicleInputRateConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleInputRateConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VehicleInputRateConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleInputRateConfig.InnerSingleton, Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VehicleInputRateConfig.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVehicleAerofoilType;
	static UEnum* EVehicleAerofoilType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVehicleAerofoilType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVehicleAerofoilType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVehicles_EVehicleAerofoilType, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("EVehicleAerofoilType"));
		}
		return Z_Registration_Info_UEnum_EVehicleAerofoilType.OuterSingleton;
	}
	template<> CHAOSVEHICLES_API UEnum* StaticEnum<EVehicleAerofoilType>()
	{
		return EVehicleAerofoilType_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosVehicles_EVehicleAerofoilType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosVehicles_EVehicleAerofoilType_Statics::Enumerators[] = {
		{ "EVehicleAerofoilType::Fixed", (int64)EVehicleAerofoilType::Fixed },
		{ "EVehicleAerofoilType::Wing", (int64)EVehicleAerofoilType::Wing },
		{ "EVehicleAerofoilType::Rudder", (int64)EVehicleAerofoilType::Rudder },
		{ "EVehicleAerofoilType::Elevator", (int64)EVehicleAerofoilType::Elevator },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosVehicles_EVehicleAerofoilType_Statics::Enum_MetaDataParams[] = {
		{ "Elevator.Comment", "// affected by steering/yaw input\n" },
		{ "Elevator.Name", "EVehicleAerofoilType::Elevator" },
		{ "Elevator.ToolTip", "affected by steering/yaw input" },
		{ "Fixed.Name", "EVehicleAerofoilType::Fixed" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "Rudder.Comment", "// affected by Roll input\n" },
		{ "Rudder.Name", "EVehicleAerofoilType::Rudder" },
		{ "Rudder.ToolTip", "affected by Roll input" },
		{ "Wing.Name", "EVehicleAerofoilType::Wing" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVehicles_EVehicleAerofoilType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		"EVehicleAerofoilType",
		"EVehicleAerofoilType",
		Z_Construct_UEnum_ChaosVehicles_EVehicleAerofoilType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVehicles_EVehicleAerofoilType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVehicles_EVehicleAerofoilType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVehicles_EVehicleAerofoilType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ChaosVehicles_EVehicleAerofoilType()
	{
		if (!Z_Registration_Info_UEnum_EVehicleAerofoilType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVehicleAerofoilType.InnerSingleton, Z_Construct_UEnum_ChaosVehicles_EVehicleAerofoilType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVehicleAerofoilType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVehicleThrustType;
	static UEnum* EVehicleThrustType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVehicleThrustType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVehicleThrustType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVehicles_EVehicleThrustType, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("EVehicleThrustType"));
		}
		return Z_Registration_Info_UEnum_EVehicleThrustType.OuterSingleton;
	}
	template<> CHAOSVEHICLES_API UEnum* StaticEnum<EVehicleThrustType>()
	{
		return EVehicleThrustType_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosVehicles_EVehicleThrustType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosVehicles_EVehicleThrustType_Statics::Enumerators[] = {
		{ "EVehicleThrustType::Fixed", (int64)EVehicleThrustType::Fixed },
		{ "EVehicleThrustType::Wing", (int64)EVehicleThrustType::Wing },
		{ "EVehicleThrustType::Rudder", (int64)EVehicleThrustType::Rudder },
		{ "EVehicleThrustType::Elevator", (int64)EVehicleThrustType::Elevator },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosVehicles_EVehicleThrustType_Statics::Enum_MetaDataParams[] = {
		{ "Elevator.Comment", "// affected by steering/yaw input\n" },
		{ "Elevator.Name", "EVehicleThrustType::Elevator" },
		{ "Elevator.ToolTip", "affected by steering/yaw input" },
		{ "Fixed.Name", "EVehicleThrustType::Fixed" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "Rudder.Comment", "// affected by Roll input\n" },
		{ "Rudder.Name", "EVehicleThrustType::Rudder" },
		{ "Rudder.ToolTip", "affected by Roll input" },
		{ "Wing.Name", "EVehicleThrustType::Wing" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVehicles_EVehicleThrustType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		"EVehicleThrustType",
		"EVehicleThrustType",
		Z_Construct_UEnum_ChaosVehicles_EVehicleThrustType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVehicles_EVehicleThrustType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVehicles_EVehicleThrustType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVehicles_EVehicleThrustType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ChaosVehicles_EVehicleThrustType()
	{
		if (!Z_Registration_Info_UEnum_EVehicleThrustType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVehicleThrustType.InnerSingleton, Z_Construct_UEnum_ChaosVehicles_EVehicleThrustType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVehicleThrustType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleAerofoilConfig;
class UScriptStruct* FVehicleAerofoilConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleAerofoilConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleAerofoilConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleAerofoilConfig, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("VehicleAerofoilConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleAerofoilConfig.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FVehicleAerofoilConfig>()
{
	return FVehicleAerofoilConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_AerofoilType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AerofoilType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AerofoilType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Area_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Area;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camber_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Camber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxControlAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxControlAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StallAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StallAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiftMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LiftMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DragMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleAerofoilConfig>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_AerofoilType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_AerofoilType_MetaData[] = {
		{ "Category", "AerofoilSetup" },
		{ "Comment", "// Does this aerofoil represent a fixed spoiler, an aircraft wing, etc how is controlled.\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Does this aerofoil represent a fixed spoiler, an aircraft wing, etc how is controlled." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_AerofoilType = { "AerofoilType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleAerofoilConfig, AerofoilType), Z_Construct_UEnum_ChaosVehicles_EVehicleAerofoilType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_AerofoilType_MetaData), Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_AerofoilType_MetaData) }; // 4135751376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "AerofoilSetup" },
		{ "Comment", "// Bone name on mesh where aerofoil is centered\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Bone name on mesh where aerofoil is centered" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleAerofoilConfig, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_BoneName_MetaData), Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_BoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "AerofoilSetup" },
		{ "Comment", "// Additional offset to give the aerofoil.\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Additional offset to give the aerofoil." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleAerofoilConfig, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Offset_MetaData), Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_UpAxis_MetaData[] = {
		{ "Category", "AerofoilSetup" },
		{ "Comment", "// Up Axis of aerofoil.\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Up Axis of aerofoil." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_UpAxis = { "UpAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleAerofoilConfig, UpAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_UpAxis_MetaData), Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_UpAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Area_MetaData[] = {
		{ "Category", "AerofoilSetup" },
		{ "Comment", "// Area of aerofoil surface [Meters Squared] - larger value creates more lift but also more drag\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Area of aerofoil surface [Meters Squared] - larger value creates more lift but also more drag" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleAerofoilConfig, Area), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Area_MetaData), Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Area_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Camber_MetaData[] = {
		{ "Category", "AerofoilSetup" },
		{ "Comment", "// camber of wing - leave as zero for a rudder - can be used to trim/level elevator for level flight\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "camber of wing - leave as zero for a rudder - can be used to trim/level elevator for level flight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Camber = { "Camber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleAerofoilConfig, Camber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Camber_MetaData), Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Camber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_MaxControlAngle_MetaData[] = {
		{ "Category", "AerofoilSetup" },
		{ "Comment", "// The angle in degrees through which the control surface moves - leave at 0 if it is a fixed surface\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "The angle in degrees through which the control surface moves - leave at 0 if it is a fixed surface" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_MaxControlAngle = { "MaxControlAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleAerofoilConfig, MaxControlAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_MaxControlAngle_MetaData), Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_MaxControlAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_StallAngle_MetaData[] = {
		{ "Category", "AerofoilSetup" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_StallAngle = { "StallAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleAerofoilConfig, StallAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_StallAngle_MetaData), Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_StallAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_LiftMultiplier_MetaData[] = {
		{ "Category", "AerofoilSetup" },
		{ "Comment", "// cheat to control amount of lift independently from lift\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "cheat to control amount of lift independently from lift" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_LiftMultiplier = { "LiftMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleAerofoilConfig, LiftMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_LiftMultiplier_MetaData), Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_LiftMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_DragMultiplier_MetaData[] = {
		{ "Category", "AerofoilSetup" },
		{ "Comment", "// cheat to control amount of drag independently from lift, a value of zero will offer no drag\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "cheat to control amount of drag independently from lift, a value of zero will offer no drag" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_DragMultiplier = { "DragMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleAerofoilConfig, DragMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_DragMultiplier_MetaData), Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_DragMultiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_AerofoilType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_AerofoilType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_UpAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_Camber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_MaxControlAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_StallAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_LiftMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewProp_DragMultiplier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"VehicleAerofoilConfig",
		Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::PropPointers),
		sizeof(FVehicleAerofoilConfig),
		alignof(FVehicleAerofoilConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleAerofoilConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VehicleAerofoilConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleAerofoilConfig.InnerSingleton, Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VehicleAerofoilConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleThrustConfig;
class UScriptStruct* FVehicleThrustConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleThrustConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleThrustConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleThrustConfig, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("VehicleThrustConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleThrustConfig.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FVehicleThrustConfig>()
{
	return FVehicleThrustConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThrustType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrustType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThrustType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrustAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThrustAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxThrustForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxThrustForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxControlAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxControlAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleThrustConfig>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_ThrustType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_ThrustType_MetaData[] = {
		{ "Category", "ThrustSetup" },
		{ "Comment", "// Does this aerofoil represent a fixed spoiler, an aircraft wing, etc how is controlled.\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Does this aerofoil represent a fixed spoiler, an aircraft wing, etc how is controlled." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_ThrustType = { "ThrustType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleThrustConfig, ThrustType), Z_Construct_UEnum_ChaosVehicles_EVehicleThrustType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_ThrustType_MetaData), Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_ThrustType_MetaData) }; // 3298917404
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "ThrustSetup" },
		{ "Comment", "/** Bone name on mesh where thrust is located */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Bone name on mesh where thrust is located" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleThrustConfig, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_BoneName_MetaData), Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_BoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "ThrustSetup" },
		{ "Comment", "/** Additional offset to give the location, or use in preference to the bone */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Additional offset to give the location, or use in preference to the bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleThrustConfig, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_Offset_MetaData), Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_Offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_ThrustAxis_MetaData[] = {
		{ "Category", "ThrustSetup" },
		{ "Comment", "/** Up Axis of thrust. */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Up Axis of thrust." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_ThrustAxis = { "ThrustAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleThrustConfig, ThrustAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_ThrustAxis_MetaData), Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_ThrustAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_MaxThrustForce_MetaData[] = {
		{ "Category", "ThrustSetup" },
		{ "Comment", "/** Maximum thrust force */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Maximum thrust force" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_MaxThrustForce = { "MaxThrustForce", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleThrustConfig, MaxThrustForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_MaxThrustForce_MetaData), Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_MaxThrustForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_MaxControlAngle_MetaData[] = {
		{ "Category", "ThrustSetup" },
		{ "Comment", "/** The angle in degrees through which the control surface moves - leave at 0 if it is a fixed surface */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "The angle in degrees through which the control surface moves - leave at 0 if it is a fixed surface" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_MaxControlAngle = { "MaxControlAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleThrustConfig, MaxControlAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_MaxControlAngle_MetaData), Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_MaxControlAngle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_ThrustType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_ThrustType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_ThrustAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_MaxThrustForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewProp_MaxControlAngle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"VehicleThrustConfig",
		Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::PropPointers),
		sizeof(FVehicleThrustConfig),
		alignof(FVehicleThrustConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleThrustConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VehicleThrustConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleThrustConfig.InnerSingleton, Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VehicleThrustConfig.InnerSingleton;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execServerUpdateState)
	{
		P_GET_UBOOL(Z_Param_InRunEngineStarter);
		P_GET_UBOOL(Z_Param_InEngineStarted);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSteeringInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InThrottleInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBrakeInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InHandbrakeInput);
		P_GET_PROPERTY(FIntProperty,Z_Param_InCurrentGear);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRollInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPitchInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InYawInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdateState_Validate(Z_Param_InRunEngineStarter,Z_Param_InEngineStarted,Z_Param_InSteeringInput,Z_Param_InThrottleInput,Z_Param_InBrakeInput,Z_Param_InHandbrakeInput,Z_Param_InCurrentGear,Z_Param_InRollInput,Z_Param_InPitchInput,Z_Param_InYawInput))
		{
			RPC_ValidateFailed(TEXT("ServerUpdateState_Validate"));
			return;
		}
		P_THIS->ServerUpdateState_Implementation(Z_Param_InRunEngineStarter,Z_Param_InEngineStarted,Z_Param_InSteeringInput,Z_Param_InThrottleInput,Z_Param_InBrakeInput,Z_Param_InHandbrakeInput,Z_Param_InCurrentGear,Z_Param_InRollInput,Z_Param_InPitchInput,Z_Param_InYawInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execEnableSelfRighting)
	{
		P_GET_UBOOL(Z_Param_InState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableSelfRighting(Z_Param_InState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execResetVehicle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetVehicle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execIsParked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsParked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execGetIsEngineStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsEngineStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execGetSteeringInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSteeringInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execGetHandbrakeInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHandbrakeInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execGetBrakeInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBrakeInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execGetThrottleInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetThrottleInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execGetForwardSpeedMPH)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetForwardSpeedMPH();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execGetForwardSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetForwardSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execGetUseClutch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseClutch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execGetUseAutoGears)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseAutoGears();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execGetTargetGear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTargetGear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execGetCurrentGear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentGear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetStartEngine)
	{
		P_GET_UBOOL(Z_Param_bStartEngine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartEngine(Z_Param_bStartEngine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execRunEngineStarter)
	{
		P_GET_UBOOL(Z_Param_bRunEngineStarter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunEngineStarter(Z_Param_bRunEngineStarter,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetRequiresControllerForInputs)
	{
		P_GET_UBOOL(Z_Param_bRequiresController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRequiresControllerForInputs(Z_Param_bRequiresController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetUseAutomaticGears)
	{
		P_GET_UBOOL(Z_Param_bUseAuto);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseAutomaticGears(Z_Param_bUseAuto);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetTargetGear)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GearNum);
		P_GET_UBOOL(Z_Param_bImmediate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetGear(Z_Param_GearNum,Z_Param_bImmediate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetChangeDownInput)
	{
		P_GET_UBOOL(Z_Param_bNewGearDown);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChangeDownInput(Z_Param_bNewGearDown);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetChangeUpInput)
	{
		P_GET_UBOOL(Z_Param_bNewGearUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChangeUpInput(Z_Param_bNewGearUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetSleeping)
	{
		P_GET_UBOOL(Z_Param_bEnableSleep);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSleeping(Z_Param_bEnableSleep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetParked)
	{
		P_GET_UBOOL(Z_Param_bParked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParked(Z_Param_bParked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetHandbrakeInput)
	{
		P_GET_UBOOL(Z_Param_bNewHandbrake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHandbrakeInput(Z_Param_bNewHandbrake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetYawInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetYawInput(Z_Param_Yaw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetRollInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Roll);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRollInput(Z_Param_Roll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetPitchInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitchInput(Z_Param_Pitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetSteeringInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Steering);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSteeringInput(Z_Param_Steering);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetBrakeInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Brake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrakeInput(Z_Param_Brake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execDecreaseThrottleInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThrottleDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseThrottleInput(Z_Param_ThrottleDelta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execIncreaseThrottleInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThrottleDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseThrottleInput(Z_Param_ThrottleDelta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosVehicleMovementComponent::execSetThrottleInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Throttle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThrottleInput(Z_Param_Throttle);
		P_NATIVE_END;
	}
	struct ChaosVehicleMovementComponent_eventServerUpdateState_Parms
	{
		bool InRunEngineStarter;
		bool InEngineStarted;
		float InSteeringInput;
		float InThrottleInput;
		float InBrakeInput;
		float InHandbrakeInput;
		int32 InCurrentGear;
		float InRollInput;
		float InPitchInput;
		float InYawInput;
	};
	static FName NAME_UChaosVehicleMovementComponent_ServerUpdateState = FName(TEXT("ServerUpdateState"));
	void UChaosVehicleMovementComponent::ServerUpdateState(bool InRunEngineStarter, bool InEngineStarted, float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 InCurrentGear, float InRollInput, float InPitchInput, float InYawInput)
	{
		ChaosVehicleMovementComponent_eventServerUpdateState_Parms Parms;
		Parms.InRunEngineStarter=InRunEngineStarter ? true : false;
		Parms.InEngineStarted=InEngineStarted ? true : false;
		Parms.InSteeringInput=InSteeringInput;
		Parms.InThrottleInput=InThrottleInput;
		Parms.InBrakeInput=InBrakeInput;
		Parms.InHandbrakeInput=InHandbrakeInput;
		Parms.InCurrentGear=InCurrentGear;
		Parms.InRollInput=InRollInput;
		Parms.InPitchInput=InPitchInput;
		Parms.InYawInput=InYawInput;
		ProcessEvent(FindFunctionChecked(NAME_UChaosVehicleMovementComponent_ServerUpdateState),&Parms);
	}
	void UChaosVehicleMovementComponent::StaticRegisterNativesUChaosVehicleMovementComponent()
	{
		UClass* Class = UChaosVehicleMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseThrottleInput", &UChaosVehicleMovementComponent::execDecreaseThrottleInput },
			{ "EnableSelfRighting", &UChaosVehicleMovementComponent::execEnableSelfRighting },
			{ "GetBrakeInput", &UChaosVehicleMovementComponent::execGetBrakeInput },
			{ "GetCurrentGear", &UChaosVehicleMovementComponent::execGetCurrentGear },
			{ "GetForwardSpeed", &UChaosVehicleMovementComponent::execGetForwardSpeed },
			{ "GetForwardSpeedMPH", &UChaosVehicleMovementComponent::execGetForwardSpeedMPH },
			{ "GetHandbrakeInput", &UChaosVehicleMovementComponent::execGetHandbrakeInput },
			{ "GetIsEngineStarted", &UChaosVehicleMovementComponent::execGetIsEngineStarted },
			{ "GetSteeringInput", &UChaosVehicleMovementComponent::execGetSteeringInput },
			{ "GetTargetGear", &UChaosVehicleMovementComponent::execGetTargetGear },
			{ "GetThrottleInput", &UChaosVehicleMovementComponent::execGetThrottleInput },
			{ "GetUseAutoGears", &UChaosVehicleMovementComponent::execGetUseAutoGears },
			{ "GetUseClutch", &UChaosVehicleMovementComponent::execGetUseClutch },
			{ "IncreaseThrottleInput", &UChaosVehicleMovementComponent::execIncreaseThrottleInput },
			{ "IsParked", &UChaosVehicleMovementComponent::execIsParked },
			{ "ResetVehicle", &UChaosVehicleMovementComponent::execResetVehicle },
			{ "RunEngineStarter", &UChaosVehicleMovementComponent::execRunEngineStarter },
			{ "ServerUpdateState", &UChaosVehicleMovementComponent::execServerUpdateState },
			{ "SetBrakeInput", &UChaosVehicleMovementComponent::execSetBrakeInput },
			{ "SetChangeDownInput", &UChaosVehicleMovementComponent::execSetChangeDownInput },
			{ "SetChangeUpInput", &UChaosVehicleMovementComponent::execSetChangeUpInput },
			{ "SetHandbrakeInput", &UChaosVehicleMovementComponent::execSetHandbrakeInput },
			{ "SetParked", &UChaosVehicleMovementComponent::execSetParked },
			{ "SetPitchInput", &UChaosVehicleMovementComponent::execSetPitchInput },
			{ "SetRequiresControllerForInputs", &UChaosVehicleMovementComponent::execSetRequiresControllerForInputs },
			{ "SetRollInput", &UChaosVehicleMovementComponent::execSetRollInput },
			{ "SetSleeping", &UChaosVehicleMovementComponent::execSetSleeping },
			{ "SetStartEngine", &UChaosVehicleMovementComponent::execSetStartEngine },
			{ "SetSteeringInput", &UChaosVehicleMovementComponent::execSetSteeringInput },
			{ "SetTargetGear", &UChaosVehicleMovementComponent::execSetTargetGear },
			{ "SetThrottleInput", &UChaosVehicleMovementComponent::execSetThrottleInput },
			{ "SetUseAutomaticGears", &UChaosVehicleMovementComponent::execSetUseAutomaticGears },
			{ "SetYawInput", &UChaosVehicleMovementComponent::execSetYawInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventDecreaseThrottleInput_Parms
		{
			float ThrottleDelta;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrottleDelta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput_Statics::NewProp_ThrottleDelta = { "ThrottleDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventDecreaseThrottleInput_Parms, ThrottleDelta), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput_Statics::NewProp_ThrottleDelta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Decrease the vehicle throttle position  [throttle range normalized 0 to 1] */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Decrease the vehicle throttle position  [throttle range normalized 0 to 1]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "DecreaseThrottleInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput_Statics::ChaosVehicleMovementComponent_eventDecreaseThrottleInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput_Statics::ChaosVehicleMovementComponent_eventDecreaseThrottleInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics
	{
		struct ChaosVehicleMovementComponent_eventEnableSelfRighting_Parms
		{
			bool InState;
		};
		static void NewProp_InState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::NewProp_InState_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventEnableSelfRighting_Parms*)Obj)->InState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventEnableSelfRighting_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::NewProp_InState_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::NewProp_InState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "EnableSelfRighting", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::ChaosVehicleMovementComponent_eventEnableSelfRighting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::ChaosVehicleMovementComponent_eventEnableSelfRighting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventGetBrakeInput_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventGetBrakeInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Get the user input for the vehicle brake - can use this to feed control to a connected trailer */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Get the user input for the vehicle brake - can use this to feed control to a connected trailer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "GetBrakeInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput_Statics::ChaosVehicleMovementComponent_eventGetBrakeInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput_Statics::ChaosVehicleMovementComponent_eventGetBrakeInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear_Statics
	{
		struct ChaosVehicleMovementComponent_eventGetCurrentGear_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventGetCurrentGear_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Get current gear */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Get current gear" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "GetCurrentGear", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear_Statics::ChaosVehicleMovementComponent_eventGetCurrentGear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear_Statics::ChaosVehicleMovementComponent_eventGetCurrentGear_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed_Statics
	{
		struct ChaosVehicleMovementComponent_eventGetForwardSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventGetForwardSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** How fast the vehicle is moving forward */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "How fast the vehicle is moving forward" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "GetForwardSpeed", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed_Statics::ChaosVehicleMovementComponent_eventGetForwardSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed_Statics::ChaosVehicleMovementComponent_eventGetForwardSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH_Statics
	{
		struct ChaosVehicleMovementComponent_eventGetForwardSpeedMPH_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventGetForwardSpeedMPH_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** How fast the vehicle is moving forward */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "How fast the vehicle is moving forward" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "GetForwardSpeedMPH", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH_Statics::ChaosVehicleMovementComponent_eventGetForwardSpeedMPH_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH_Statics::ChaosVehicleMovementComponent_eventGetForwardSpeedMPH_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventGetHandbrakeInput_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventGetHandbrakeInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventGetHandbrakeInput_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Get the user input for the vehicle handbrake - can use this to feed control to a connected trailer */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Get the user input for the vehicle handbrake - can use this to feed control to a connected trailer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "GetHandbrakeInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::ChaosVehicleMovementComponent_eventGetHandbrakeInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::ChaosVehicleMovementComponent_eventGetHandbrakeInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics
	{
		struct ChaosVehicleMovementComponent_eventGetIsEngineStarted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventGetIsEngineStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventGetIsEngineStarted_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Get if engine turn on or off */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Get if engine turn on or off" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "GetIsEngineStarted", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::ChaosVehicleMovementComponent_eventGetIsEngineStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::ChaosVehicleMovementComponent_eventGetIsEngineStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventGetSteeringInput_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventGetSteeringInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Get the user input for the vehicle steering - can use this to feed control to a connected trailer */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Get the user input for the vehicle steering - can use this to feed control to a connected trailer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "GetSteeringInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput_Statics::ChaosVehicleMovementComponent_eventGetSteeringInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput_Statics::ChaosVehicleMovementComponent_eventGetSteeringInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear_Statics
	{
		struct ChaosVehicleMovementComponent_eventGetTargetGear_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventGetTargetGear_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Get target gear */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Get target gear" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "GetTargetGear", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear_Statics::ChaosVehicleMovementComponent_eventGetTargetGear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear_Statics::ChaosVehicleMovementComponent_eventGetTargetGear_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventGetThrottleInput_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventGetThrottleInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Get the user input for the vehicle throttle - can use this to feed control to a connected trailer */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Get the user input for the vehicle throttle - can use this to feed control to a connected trailer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "GetThrottleInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput_Statics::ChaosVehicleMovementComponent_eventGetThrottleInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput_Statics::ChaosVehicleMovementComponent_eventGetThrottleInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics
	{
		struct ChaosVehicleMovementComponent_eventGetUseAutoGears_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventGetUseAutoGears_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventGetUseAutoGears_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Are gears being changed automatically? */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Are gears being changed automatically?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "GetUseAutoGears", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::ChaosVehicleMovementComponent_eventGetUseAutoGears_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::ChaosVehicleMovementComponent_eventGetUseAutoGears_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics
	{
		struct ChaosVehicleMovementComponent_eventGetUseClutch_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventGetUseClutch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventGetUseClutch_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Are gears need clutch to be changed? */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Are gears need clutch to be changed?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "GetUseClutch", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::ChaosVehicleMovementComponent_eventGetUseClutch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::ChaosVehicleMovementComponent_eventGetUseClutch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventIncreaseThrottleInput_Parms
		{
			float ThrottleDelta;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrottleDelta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput_Statics::NewProp_ThrottleDelta = { "ThrottleDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventIncreaseThrottleInput_Parms, ThrottleDelta), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput_Statics::NewProp_ThrottleDelta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Increase the vehicle throttle position [throttle range normalized 0 to 1] */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Increase the vehicle throttle position [throttle range normalized 0 to 1]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "IncreaseThrottleInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput_Statics::ChaosVehicleMovementComponent_eventIncreaseThrottleInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput_Statics::ChaosVehicleMovementComponent_eventIncreaseThrottleInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics
	{
		struct ChaosVehicleMovementComponent_eventIsParked_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventIsParked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventIsParked_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Is the vehicle in park mode */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Is the vehicle in park mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "IsParked", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::ChaosVehicleMovementComponent_eventIsParked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::ChaosVehicleMovementComponent_eventIsParked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_ResetVehicle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_ResetVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Reset some vehicle state - call this if you are say creating pool of vehicles that get reused and you don't want to carry over the previous state */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Reset some vehicle state - call this if you are say creating pool of vehicles that get reused and you don't want to carry over the previous state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_ResetVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "ResetVehicle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_ResetVehicle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_ResetVehicle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_ResetVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_ResetVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics
	{
		struct ChaosVehicleMovementComponent_eventRunEngineStarter_Parms
		{
			bool bRunEngineStarter;
			float DeltaTime;
		};
		static void NewProp_bRunEngineStarter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunEngineStarter;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::NewProp_bRunEngineStarter_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventRunEngineStarter_Parms*)Obj)->bRunEngineStarter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::NewProp_bRunEngineStarter = { "bRunEngineStarter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventRunEngineStarter_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::NewProp_bRunEngineStarter_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventRunEngineStarter_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::NewProp_bRunEngineStarter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Init starter to launch the vehicle engine, if the engine is already started, turn the engine off */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Init starter to launch the vehicle engine, if the engine is already started, turn the engine off" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "RunEngineStarter", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::ChaosVehicleMovementComponent_eventRunEngineStarter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::ChaosVehicleMovementComponent_eventRunEngineStarter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics
	{
		static void NewProp_InRunEngineStarter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InRunEngineStarter;
		static void NewProp_InEngineStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InEngineStarted;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSteeringInput;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InThrottleInput;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBrakeInput;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InHandbrakeInput;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InCurrentGear;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRollInput;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPitchInput;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InYawInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InRunEngineStarter_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventServerUpdateState_Parms*)Obj)->InRunEngineStarter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InRunEngineStarter = { "InRunEngineStarter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventServerUpdateState_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InRunEngineStarter_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InEngineStarted_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventServerUpdateState_Parms*)Obj)->InEngineStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InEngineStarted = { "InEngineStarted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventServerUpdateState_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InEngineStarted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InSteeringInput = { "InSteeringInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventServerUpdateState_Parms, InSteeringInput), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InThrottleInput = { "InThrottleInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventServerUpdateState_Parms, InThrottleInput), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InBrakeInput = { "InBrakeInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventServerUpdateState_Parms, InBrakeInput), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InHandbrakeInput = { "InHandbrakeInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventServerUpdateState_Parms, InHandbrakeInput), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InCurrentGear = { "InCurrentGear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventServerUpdateState_Parms, InCurrentGear), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InRollInput = { "InRollInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventServerUpdateState_Parms, InRollInput), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InPitchInput = { "InPitchInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventServerUpdateState_Parms, InPitchInput), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InYawInput = { "InYawInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventServerUpdateState_Parms, InYawInput), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InRunEngineStarter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InEngineStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InSteeringInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InThrottleInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InBrakeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InHandbrakeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InCurrentGear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InRollInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InPitchInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::NewProp_InYawInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Pass current state to server */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Pass current state to server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "ServerUpdateState", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::PropPointers), sizeof(ChaosVehicleMovementComponent_eventServerUpdateState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::PropPointers) < 2048);
	static_assert(sizeof(ChaosVehicleMovementComponent_eventServerUpdateState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetBrakeInput_Parms
		{
			float Brake;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Brake;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput_Statics::NewProp_Brake = { "Brake", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventSetBrakeInput_Parms, Brake), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput_Statics::NewProp_Brake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set the user input for the vehicle Brake [range 0 to 1] */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for the vehicle Brake [range 0 to 1]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetBrakeInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput_Statics::ChaosVehicleMovementComponent_eventSetBrakeInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput_Statics::ChaosVehicleMovementComponent_eventSetBrakeInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetChangeDownInput_Parms
		{
			bool bNewGearDown;
		};
		static void NewProp_bNewGearDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewGearDown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::NewProp_bNewGearDown_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventSetChangeDownInput_Parms*)Obj)->bNewGearDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::NewProp_bNewGearDown = { "bNewGearDown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventSetChangeDownInput_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::NewProp_bNewGearDown_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::NewProp_bNewGearDown,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set the user input for gear down */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for gear down" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetChangeDownInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::ChaosVehicleMovementComponent_eventSetChangeDownInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::ChaosVehicleMovementComponent_eventSetChangeDownInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetChangeUpInput_Parms
		{
			bool bNewGearUp;
		};
		static void NewProp_bNewGearUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewGearUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::NewProp_bNewGearUp_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventSetChangeUpInput_Parms*)Obj)->bNewGearUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::NewProp_bNewGearUp = { "bNewGearUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventSetChangeUpInput_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::NewProp_bNewGearUp_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::NewProp_bNewGearUp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set the user input for gear up */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for gear up" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetChangeUpInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::ChaosVehicleMovementComponent_eventSetChangeUpInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::ChaosVehicleMovementComponent_eventSetChangeUpInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetHandbrakeInput_Parms
		{
			bool bNewHandbrake;
		};
		static void NewProp_bNewHandbrake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHandbrake;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::NewProp_bNewHandbrake_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventSetHandbrakeInput_Parms*)Obj)->bNewHandbrake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::NewProp_bNewHandbrake = { "bNewHandbrake", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventSetHandbrakeInput_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::NewProp_bNewHandbrake_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::NewProp_bNewHandbrake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set the user input for handbrake */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for handbrake" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetHandbrakeInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::ChaosVehicleMovementComponent_eventSetHandbrakeInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::ChaosVehicleMovementComponent_eventSetHandbrakeInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetParked_Parms
		{
			bool bParked;
		};
		static void NewProp_bParked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::NewProp_bParked_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventSetParked_Parms*)Obj)->bParked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::NewProp_bParked = { "bParked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventSetParked_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::NewProp_bParked_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::NewProp_bParked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set the vehicle in park mode */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set the vehicle in park mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetParked", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::ChaosVehicleMovementComponent_eventSetParked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::ChaosVehicleMovementComponent_eventSetParked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetPitchInput_Parms
		{
			float Pitch;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventSetPitchInput_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput_Statics::NewProp_Pitch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set the user input for the vehicle pitch [range -1 to 1] */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for the vehicle pitch [range -1 to 1]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetPitchInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput_Statics::ChaosVehicleMovementComponent_eventSetPitchInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput_Statics::ChaosVehicleMovementComponent_eventSetPitchInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetRequiresControllerForInputs_Parms
		{
			bool bRequiresController;
		};
		static void NewProp_bRequiresController_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::NewProp_bRequiresController_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventSetRequiresControllerForInputs_Parms*)Obj)->bRequiresController = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::NewProp_bRequiresController = { "bRequiresController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventSetRequiresControllerForInputs_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::NewProp_bRequiresController_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::NewProp_bRequiresController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set the flag that determines whether a controller is required to set control inputs */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set the flag that determines whether a controller is required to set control inputs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetRequiresControllerForInputs", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::ChaosVehicleMovementComponent_eventSetRequiresControllerForInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::ChaosVehicleMovementComponent_eventSetRequiresControllerForInputs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetRollInput_Parms
		{
			float Roll;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Roll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventSetRollInput_Parms, Roll), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput_Statics::NewProp_Roll,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set the user input for the vehicle roll [range -1 to 1] */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for the vehicle roll [range -1 to 1]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetRollInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput_Statics::ChaosVehicleMovementComponent_eventSetRollInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput_Statics::ChaosVehicleMovementComponent_eventSetRollInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetSleeping_Parms
		{
			bool bEnableSleep;
		};
		static void NewProp_bEnableSleep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSleep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::NewProp_bEnableSleep_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventSetSleeping_Parms*)Obj)->bEnableSleep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::NewProp_bEnableSleep = { "bEnableSleep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventSetSleeping_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::NewProp_bEnableSleep_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::NewProp_bEnableSleep,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set the vehicle sleeping (bEnableSleep=true) or wake it up (bEnableSleep=false) */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set the vehicle sleeping (bEnableSleep=true) or wake it up (bEnableSleep=false)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetSleeping", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::ChaosVehicleMovementComponent_eventSetSleeping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::ChaosVehicleMovementComponent_eventSetSleeping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetStartEngine_Parms
		{
			bool bStartEngine;
		};
		static void NewProp_bStartEngine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartEngine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::NewProp_bStartEngine_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventSetStartEngine_Parms*)Obj)->bStartEngine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::NewProp_bStartEngine = { "bStartEngine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventSetStartEngine_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::NewProp_bStartEngine_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::NewProp_bStartEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set engine turn on or off */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set engine turn on or off" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetStartEngine", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::ChaosVehicleMovementComponent_eventSetStartEngine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::ChaosVehicleMovementComponent_eventSetStartEngine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetSteeringInput_Parms
		{
			float Steering;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Steering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput_Statics::NewProp_Steering = { "Steering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventSetSteeringInput_Parms, Steering), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput_Statics::NewProp_Steering,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set the user input for the vehicle steering [range -1 to 1] */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for the vehicle steering [range -1 to 1]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetSteeringInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput_Statics::ChaosVehicleMovementComponent_eventSetSteeringInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput_Statics::ChaosVehicleMovementComponent_eventSetSteeringInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetTargetGear_Parms
		{
			int32 GearNum;
			bool bImmediate;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_GearNum;
		static void NewProp_bImmediate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::NewProp_GearNum = { "GearNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventSetTargetGear_Parms, GearNum), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::NewProp_bImmediate_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventSetTargetGear_Parms*)Obj)->bImmediate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventSetTargetGear_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::NewProp_GearNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::NewProp_bImmediate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set the user input for gear (-1 reverse, 0 neutral, 1+ forward)*/" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for gear (-1 reverse, 0 neutral, 1+ forward)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetTargetGear", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::ChaosVehicleMovementComponent_eventSetTargetGear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::ChaosVehicleMovementComponent_eventSetTargetGear_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetThrottleInput_Parms
		{
			float Throttle;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Throttle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventSetThrottleInput_Parms, Throttle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput_Statics::NewProp_Throttle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set the user input for the vehicle throttle [range 0 to 1] */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for the vehicle throttle [range 0 to 1]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetThrottleInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput_Statics::ChaosVehicleMovementComponent_eventSetThrottleInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput_Statics::ChaosVehicleMovementComponent_eventSetThrottleInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetUseAutomaticGears_Parms
		{
			bool bUseAuto;
		};
		static void NewProp_bUseAuto_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAuto;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::NewProp_bUseAuto_SetBit(void* Obj)
	{
		((ChaosVehicleMovementComponent_eventSetUseAutomaticGears_Parms*)Obj)->bUseAuto = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::NewProp_bUseAuto = { "bUseAuto", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosVehicleMovementComponent_eventSetUseAutomaticGears_Parms), &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::NewProp_bUseAuto_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::NewProp_bUseAuto,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set the flag that will be used to select auto-gears */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set the flag that will be used to select auto-gears" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetUseAutomaticGears", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::ChaosVehicleMovementComponent_eventSetUseAutomaticGears_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::ChaosVehicleMovementComponent_eventSetUseAutomaticGears_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput_Statics
	{
		struct ChaosVehicleMovementComponent_eventSetYawInput_Parms
		{
			float Yaw;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosVehicleMovementComponent_eventSetYawInput_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput_Statics::NewProp_Yaw,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosVehicleMovement" },
		{ "Comment", "/** Set the user input for the vehicle yaw [range -1 to 1] */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Set the user input for the vehicle yaw [range -1 to 1]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosVehicleMovementComponent, nullptr, "SetYawInput", nullptr, nullptr, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput_Statics::ChaosVehicleMovementComponent_eventSetYawInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput_Statics::ChaosVehicleMovementComponent_eventSetYawInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosVehicleMovementComponent);
	UClass* Z_Construct_UClass_UChaosVehicleMovementComponent_NoRegister()
	{
		return UChaosVehicleMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChaosVehicleMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseAsBrake_MetaData[];
#endif
		static void NewProp_bReverseAsBrake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseAsBrake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bThrottleAsBrake_MetaData[];
#endif
		static void NewProp_bThrottleAsBrake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bThrottleAsBrake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCenterOfMassOverride_MetaData[];
#endif
		static void NewProp_bEnableCenterOfMassOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCenterOfMassOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterOfMassOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterOfMassOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChassisWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChassisWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChassisHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChassisHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DragCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownforceCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DownforceCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragArea_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DragArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDragMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDragMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InertiaTensorScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InertiaTensorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SleepThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SleepThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SleepSlopeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SleepSlopeLimit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Aerofoils_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aerofoils_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Aerofoils;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Thrusters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thrusters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Thrusters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TorqueControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TorqueControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotationControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotationControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StabilizeControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StabilizeControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRawHandbrakeInput_MetaData[];
#endif
		static void NewProp_bRawHandbrakeInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRawHandbrakeInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRawGearUpInput_MetaData[];
#endif
		static void NewProp_bRawGearUpInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRawGearUpInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRawGearDownInput_MetaData[];
#endif
		static void NewProp_bRawGearDownInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRawGearDownInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasAvoidanceUpdated_MetaData[];
#endif
		static void NewProp_bWasAvoidanceUpdated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasAvoidanceUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParkEnabled_MetaData[];
#endif
		static void NewProp_bParkEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParkEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEngineStarterRunning_MetaData[];
#endif
		static void NewProp_bEngineStarterRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEngineStarterRunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEngineIsStarted_MetaData[];
#endif
		static void NewProp_bEngineIsStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEngineIsStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseClutch_MetaData[];
#endif
		static void NewProp_bUseClutch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseClutch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkPhysicsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NetworkPhysicsComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawSteeringInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RawSteeringInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawThrottleInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RawThrottleInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawBrakeInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RawBrakeInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawPitchInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RawPitchInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawRollInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RawRollInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawYawInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RawYawInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrottleInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakeInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakeInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandbrakeInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunEngineStarterInput_MetaData[];
#endif
		static void NewProp_RunEngineStarterInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RunEngineStarterInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartEngineInput_MetaData[];
#endif
		static void NewProp_StartEngineInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StartEngineInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresControllerForInputs_MetaData[];
#endif
		static void NewProp_bRequiresControllerForInputs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresControllerForInputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleBrakeInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleBrakeInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrongDirectionThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WrongDirectionThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleInputRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThrottleInputRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakeInputRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrakeInputRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringInputRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteeringInputRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeInputRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandbrakeInputRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchInputRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchInputRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollInputRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RollInputRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawInputRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YawInputRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_DecreaseThrottleInput, "DecreaseThrottleInput" }, // 2418429111
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_EnableSelfRighting, "EnableSelfRighting" }, // 2460793917
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetBrakeInput, "GetBrakeInput" }, // 3410427016
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetCurrentGear, "GetCurrentGear" }, // 833930785
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeed, "GetForwardSpeed" }, // 25048718
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetForwardSpeedMPH, "GetForwardSpeedMPH" }, // 2860144293
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetHandbrakeInput, "GetHandbrakeInput" }, // 1710112692
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetIsEngineStarted, "GetIsEngineStarted" }, // 2092213809
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetSteeringInput, "GetSteeringInput" }, // 34802582
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetTargetGear, "GetTargetGear" }, // 1060833218
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetThrottleInput, "GetThrottleInput" }, // 642699940
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseAutoGears, "GetUseAutoGears" }, // 2369271960
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_GetUseClutch, "GetUseClutch" }, // 1414954086
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_IncreaseThrottleInput, "IncreaseThrottleInput" }, // 3138060095
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_IsParked, "IsParked" }, // 2178776971
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_ResetVehicle, "ResetVehicle" }, // 1930231403
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_RunEngineStarter, "RunEngineStarter" }, // 281616507
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_ServerUpdateState, "ServerUpdateState" }, // 2432817450
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetBrakeInput, "SetBrakeInput" }, // 1492867243
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeDownInput, "SetChangeDownInput" }, // 4091414579
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetChangeUpInput, "SetChangeUpInput" }, // 51803935
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetHandbrakeInput, "SetHandbrakeInput" }, // 1493664878
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetParked, "SetParked" }, // 3407430505
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetPitchInput, "SetPitchInput" }, // 2246297930
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRequiresControllerForInputs, "SetRequiresControllerForInputs" }, // 7480018
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetRollInput, "SetRollInput" }, // 1814825058
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSleeping, "SetSleeping" }, // 2494173922
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetStartEngine, "SetStartEngine" }, // 1919386900
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetSteeringInput, "SetSteeringInput" }, // 2852991238
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetTargetGear, "SetTargetGear" }, // 2978660797
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetThrottleInput, "SetThrottleInput" }, // 2287360844
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetUseAutomaticGears, "SetUseAutomaticGears" }, // 3592401581
		{ &Z_Construct_UFunction_UChaosVehicleMovementComponent_SetYawInput, "SetYawInput" }, // 1755979632
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base component to handle the vehicle simulation for an actor.\n */" },
		{ "HideCategories", "PlanarMovement Components|Movement|Planar Activation Components|Activation" },
		{ "IncludePath", "ChaosVehicleMovementComponent.h" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Base component to handle the vehicle simulation for an actor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bReverseAsBrake_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** If true, the brake and reverse controls will behave in a more arcade fashion where holding reverse also functions as brake. For a more realistic approach turn this off*/" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "If true, the brake and reverse controls will behave in a more arcade fashion where holding reverse also functions as brake. For a more realistic approach turn this off" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bReverseAsBrake_SetBit(void* Obj)
	{
		((UChaosVehicleMovementComponent*)Obj)->bReverseAsBrake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bReverseAsBrake = { "bReverseAsBrake", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosVehicleMovementComponent), &Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bReverseAsBrake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bReverseAsBrake_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bReverseAsBrake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bThrottleAsBrake_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** If true, when reversing the throttle will behave like a brake while the vehicle moving in a backwards direction - requires bReverseAsBrake to be enabled for operation */" },
		{ "EditCondition", "bReverseAsBrake" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "If true, when reversing the throttle will behave like a brake while the vehicle moving in a backwards direction - requires bReverseAsBrake to be enabled for operation" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bThrottleAsBrake_SetBit(void* Obj)
	{
		((UChaosVehicleMovementComponent*)Obj)->bThrottleAsBrake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bThrottleAsBrake = { "bThrottleAsBrake", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosVehicleMovementComponent), &Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bThrottleAsBrake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bThrottleAsBrake_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bThrottleAsBrake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Mass to set the vehicle chassis to. It's much easier to tweak vehicle settings when\n\x09 * the mass doesn't change due to tweaks with the physics asset. [kg] */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Mass to set the vehicle chassis to. It's much easier to tweak vehicle settings when\nthe mass doesn't change due to tweaks with the physics asset. [kg]" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Mass_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Mass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEnableCenterOfMassOverride_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/**\n\x09 * Enable to override the calculated COM position with your own fixed value - this prevents the vehicle handling changing when the asset changes\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Enable to override the calculated COM position with your own fixed value - this prevents the vehicle handling changing when the asset changes" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEnableCenterOfMassOverride_SetBit(void* Obj)
	{
		((UChaosVehicleMovementComponent*)Obj)->bEnableCenterOfMassOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEnableCenterOfMassOverride = { "bEnableCenterOfMassOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UChaosVehicleMovementComponent), &Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEnableCenterOfMassOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEnableCenterOfMassOverride_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEnableCenterOfMassOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_CenterOfMassOverride_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/**\n\x09 * The center of mass override value, this value overrides the calculated COM and the COM offset value in the mesh is also ignored.\n\x09 */" },
		{ "EditCondition", "bEnableCenterOfMassOverride" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "The center of mass override value, this value overrides the calculated COM and the COM offset value in the mesh is also ignored." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_CenterOfMassOverride = { "CenterOfMassOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, CenterOfMassOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_CenterOfMassOverride_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_CenterOfMassOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ChassisWidth_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Chassis width used for drag force computation (cm)*/" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Chassis width used for drag force computation (cm)" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ChassisWidth = { "ChassisWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, ChassisWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ChassisWidth_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ChassisWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ChassisHeight_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Chassis height used for drag force computation (cm)*/" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Chassis height used for drag force computation (cm)" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ChassisHeight = { "ChassisHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, ChassisHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ChassisHeight_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ChassisHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** DragCoefficient of the vehicle chassis - force resisting forward motion at speed */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "DragCoefficient of the vehicle chassis - force resisting forward motion at speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, DragCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DragCoefficient_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DragCoefficient_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DownforceCoefficient_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** DownforceCoefficient of the vehicle chassis - force pressing vehicle into ground at speed */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "DownforceCoefficient of the vehicle chassis - force pressing vehicle into ground at speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DownforceCoefficient = { "DownforceCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, DownforceCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DownforceCoefficient_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DownforceCoefficient_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DragArea_MetaData[] = {
		{ "Comment", "// Drag area in Meters^2\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Drag area in Meters^2" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DragArea = { "DragArea", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, DragArea), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DragArea_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DragArea_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DebugDragMagnitude_MetaData[] = {
		{ "Comment", "// Debug drag magnitude last applied\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Debug drag magnitude last applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DebugDragMagnitude = { "DebugDragMagnitude", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, DebugDragMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DebugDragMagnitude_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DebugDragMagnitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_InertiaTensorScale_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** Scales the vehicle's inertia in each direction (forward, right, up) */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Scales the vehicle's inertia in each direction (forward, right, up)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_InertiaTensorScale = { "InertiaTensorScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, InertiaTensorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_InertiaTensorScale_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_InertiaTensorScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SleepThreshold_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** Option to apply some aggressive sleep logic, larger number is more agressive, 0 disables */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Option to apply some aggressive sleep logic, larger number is more agressive, 0 disables" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SleepThreshold = { "SleepThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, SleepThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SleepThreshold_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SleepThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SleepSlopeLimit_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Option to apply some aggressive sleep logic if slopes up Z is less than this value, i.e value = Cos(SlopeAngle) so 0.866 will sleep up to 30 degree slopes */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Option to apply some aggressive sleep logic if slopes up Z is less than this value, i.e value = Cos(SlopeAngle) so 0.866 will sleep up to 30 degree slopes" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SleepSlopeLimit = { "SleepSlopeLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, SleepSlopeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SleepSlopeLimit_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SleepSlopeLimit_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Aerofoils_Inner = { "Aerofoils", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVehicleAerofoilConfig, METADATA_PARAMS(0, nullptr) }; // 1281315638
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Aerofoils_MetaData[] = {
		{ "Category", "AerofoilSetup" },
		{ "Comment", "/** Optional aerofoil setup - can be used for car spoilers or aircraft wings/elevator/rudder */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Optional aerofoil setup - can be used for car spoilers or aircraft wings/elevator/rudder" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Aerofoils = { "Aerofoils", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, Aerofoils), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Aerofoils_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Aerofoils_MetaData) }; // 1281315638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Thrusters_Inner = { "Thrusters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVehicleThrustConfig, METADATA_PARAMS(0, nullptr) }; // 1664449170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Thrusters_MetaData[] = {
		{ "Category", "ThrusterSetup" },
		{ "Comment", "/** Optional thruster setup, use one or more as your main engine or as supplementary booster */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Optional thruster setup, use one or more as your main engine or as supplementary booster" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Thrusters = { "Thrusters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, Thrusters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Thrusters_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Thrusters_MetaData) }; // 1664449170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_TorqueControl_MetaData[] = {
		{ "Category", "ArcadeControl" },
		{ "Comment", "/** Arcade style direct control of vehicle rotation via torque force */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Arcade style direct control of vehicle rotation via torque force" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_TorqueControl = { "TorqueControl", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, TorqueControl), Z_Construct_UScriptStruct_FVehicleTorqueControlConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_TorqueControl_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_TorqueControl_MetaData) }; // 3107371636
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_TargetRotationControl_MetaData[] = {
		{ "Category", "ArcadeControl" },
		{ "Comment", "/** Arcade style direct control of vehicle rotation via torque force */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Arcade style direct control of vehicle rotation via torque force" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_TargetRotationControl = { "TargetRotationControl", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, TargetRotationControl), Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_TargetRotationControl_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_TargetRotationControl_MetaData) }; // 1077545194
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StabilizeControl_MetaData[] = {
		{ "Category", "ArcadeControl" },
		{ "Comment", "/** Arcade style control of vehicle */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Arcade style control of vehicle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StabilizeControl = { "StabilizeControl", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, StabilizeControl), Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StabilizeControl_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StabilizeControl_MetaData) }; // 2088157081
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawHandbrakeInput_MetaData[] = {
		{ "Comment", "// True if the player is holding the handbrake\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "True if the player is holding the handbrake" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawHandbrakeInput_SetBit(void* Obj)
	{
		((UChaosVehicleMovementComponent*)Obj)->bRawHandbrakeInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawHandbrakeInput = { "bRawHandbrakeInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosVehicleMovementComponent), &Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawHandbrakeInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawHandbrakeInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawHandbrakeInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawGearUpInput_MetaData[] = {
		{ "Comment", "// True if the player is holding gear up\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "True if the player is holding gear up" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawGearUpInput_SetBit(void* Obj)
	{
		((UChaosVehicleMovementComponent*)Obj)->bRawGearUpInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawGearUpInput = { "bRawGearUpInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosVehicleMovementComponent), &Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawGearUpInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawGearUpInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawGearUpInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawGearDownInput_MetaData[] = {
		{ "Comment", "// True if the player is holding gear down\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "True if the player is holding gear down" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawGearDownInput_SetBit(void* Obj)
	{
		((UChaosVehicleMovementComponent*)Obj)->bRawGearDownInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawGearDownInput = { "bRawGearDownInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosVehicleMovementComponent), &Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawGearDownInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawGearDownInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawGearDownInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bWasAvoidanceUpdated_MetaData[] = {
		{ "Comment", "/** Was avoidance updated in this frame? */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Was avoidance updated in this frame?" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bWasAvoidanceUpdated_SetBit(void* Obj)
	{
		((UChaosVehicleMovementComponent*)Obj)->bWasAvoidanceUpdated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bWasAvoidanceUpdated = { "bWasAvoidanceUpdated", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosVehicleMovementComponent), &Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bWasAvoidanceUpdated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bWasAvoidanceUpdated_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bWasAvoidanceUpdated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bParkEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bParkEnabled_SetBit(void* Obj)
	{
		((UChaosVehicleMovementComponent*)Obj)->bParkEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bParkEnabled = { "bParkEnabled", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosVehicleMovementComponent), &Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bParkEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bParkEnabled_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bParkEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEngineStarterRunning_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEngineStarterRunning_SetBit(void* Obj)
	{
		((UChaosVehicleMovementComponent*)Obj)->bEngineStarterRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEngineStarterRunning = { "bEngineStarterRunning", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosVehicleMovementComponent), &Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEngineStarterRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEngineStarterRunning_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEngineStarterRunning_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEngineIsStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEngineIsStarted_SetBit(void* Obj)
	{
		((UChaosVehicleMovementComponent*)Obj)->bEngineIsStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEngineIsStarted = { "bEngineIsStarted", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosVehicleMovementComponent), &Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEngineIsStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEngineIsStarted_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEngineIsStarted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bUseClutch_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bUseClutch_SetBit(void* Obj)
	{
		((UChaosVehicleMovementComponent*)Obj)->bUseClutch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bUseClutch = { "bUseClutch", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosVehicleMovementComponent), &Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bUseClutch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bUseClutch_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bUseClutch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_NetworkPhysicsComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_NetworkPhysicsComponent = { "NetworkPhysicsComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, NetworkPhysicsComponent), Z_Construct_UClass_UNetworkPhysicsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_NetworkPhysicsComponent_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_NetworkPhysicsComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ReplicatedState_MetaData[] = {
		{ "Comment", "// replicated state of vehicle \n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "replicated state of vehicle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ReplicatedState = { "ReplicatedState", nullptr, (EPropertyFlags)0x0020080000002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, ReplicatedState), Z_Construct_UScriptStruct_FVehicleReplicatedState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ReplicatedState_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ReplicatedState_MetaData) }; // 3153350740
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawSteeringInput_MetaData[] = {
		{ "Comment", "// What the player has the steering set to. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "What the player has the steering set to. Range -1...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawSteeringInput = { "RawSteeringInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, RawSteeringInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawSteeringInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawSteeringInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawThrottleInput_MetaData[] = {
		{ "Comment", "// What the player has the accelerator set to. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "What the player has the accelerator set to. Range -1...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawThrottleInput = { "RawThrottleInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, RawThrottleInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawThrottleInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawThrottleInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawBrakeInput_MetaData[] = {
		{ "Comment", "// What the player has the brake set to. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "What the player has the brake set to. Range -1...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawBrakeInput = { "RawBrakeInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, RawBrakeInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawBrakeInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawBrakeInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawPitchInput_MetaData[] = {
		{ "Comment", "// What the player has the pitch set to. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "What the player has the pitch set to. Range -1...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawPitchInput = { "RawPitchInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, RawPitchInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawPitchInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawPitchInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawRollInput_MetaData[] = {
		{ "Comment", "// What the player has the roll set to. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "What the player has the roll set to. Range -1...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawRollInput = { "RawRollInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, RawRollInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawRollInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawRollInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawYawInput_MetaData[] = {
		{ "Comment", "// What the player has the yaw set to. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "What the player has the yaw set to. Range -1...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawYawInput = { "RawYawInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, RawYawInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawYawInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawYawInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SteeringInput_MetaData[] = {
		{ "Comment", "// Steering output to physics system. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Steering output to physics system. Range -1...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SteeringInput = { "SteeringInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, SteeringInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SteeringInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SteeringInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ThrottleInput_MetaData[] = {
		{ "Comment", "// Accelerator output to physics system. Range 0...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Accelerator output to physics system. Range 0...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ThrottleInput = { "ThrottleInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, ThrottleInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ThrottleInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ThrottleInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_BrakeInput_MetaData[] = {
		{ "Comment", "// Brake output to physics system. Range 0...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Brake output to physics system. Range 0...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_BrakeInput = { "BrakeInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, BrakeInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_BrakeInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_BrakeInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_PitchInput_MetaData[] = {
		{ "Comment", "// Body Pitch output to physics system. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Body Pitch output to physics system. Range -1...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_PitchInput = { "PitchInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, PitchInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_PitchInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_PitchInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RollInput_MetaData[] = {
		{ "Comment", "// Body Roll output to physics system. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Body Roll output to physics system. Range -1...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RollInput = { "RollInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, RollInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RollInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RollInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_YawInput_MetaData[] = {
		{ "Comment", "// Body Yaw output to physics system. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Body Yaw output to physics system. Range -1...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_YawInput = { "YawInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, YawInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_YawInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_YawInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_HandbrakeInput_MetaData[] = {
		{ "Comment", "// Handbrake output to physics system. Range 0...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Handbrake output to physics system. Range 0...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_HandbrakeInput = { "HandbrakeInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, HandbrakeInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_HandbrakeInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_HandbrakeInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RunEngineStarterInput_MetaData[] = {
		{ "Comment", "// Engine starter output to physics system.\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Engine starter output to physics system." },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RunEngineStarterInput_SetBit(void* Obj)
	{
		((UChaosVehicleMovementComponent*)Obj)->RunEngineStarterInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RunEngineStarterInput = { "RunEngineStarterInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UChaosVehicleMovementComponent), &Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RunEngineStarterInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RunEngineStarterInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RunEngineStarterInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StartEngineInput_MetaData[] = {
		{ "Comment", "// Engine output to physics system.\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Engine output to physics system." },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StartEngineInput_SetBit(void* Obj)
	{
		((UChaosVehicleMovementComponent*)Obj)->StartEngineInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StartEngineInput = { "StartEngineInput", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UChaosVehicleMovementComponent), &Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StartEngineInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StartEngineInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StartEngineInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRequiresControllerForInputs_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Bypass the need for a controller in order for the controls to be processed.\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Bypass the need for a controller in order for the controls to be processed." },
	};
#endif
	void Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRequiresControllerForInputs_SetBit(void* Obj)
	{
		((UChaosVehicleMovementComponent*)Obj)->bRequiresControllerForInputs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRequiresControllerForInputs = { "bRequiresControllerForInputs", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UChaosVehicleMovementComponent), &Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRequiresControllerForInputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRequiresControllerForInputs_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRequiresControllerForInputs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_IdleBrakeInput_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// How much to press the brake when the player has release throttle\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "How much to press the brake when the player has release throttle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_IdleBrakeInput = { "IdleBrakeInput", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, IdleBrakeInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_IdleBrakeInput_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_IdleBrakeInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StopThreshold_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Auto-brake when absolute vehicle forward speed is less than this (cm/s)\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Auto-brake when absolute vehicle forward speed is less than this (cm/s)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StopThreshold = { "StopThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, StopThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StopThreshold_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StopThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_WrongDirectionThreshold_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Auto-brake when vehicle forward speed is opposite of player input by at least this much (cm/s)\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Auto-brake when vehicle forward speed is opposite of player input by at least this much (cm/s)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_WrongDirectionThreshold = { "WrongDirectionThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, WrongDirectionThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_WrongDirectionThreshold_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_WrongDirectionThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ThrottleInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Rate at which input throttle can rise and fall\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which input throttle can rise and fall" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ThrottleInputRate = { "ThrottleInputRate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, ThrottleInputRate), Z_Construct_UScriptStruct_FVehicleInputRateConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ThrottleInputRate_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ThrottleInputRate_MetaData) }; // 2908320797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_BrakeInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Rate at which input brake can rise and fall\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which input brake can rise and fall" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_BrakeInputRate = { "BrakeInputRate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, BrakeInputRate), Z_Construct_UScriptStruct_FVehicleInputRateConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_BrakeInputRate_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_BrakeInputRate_MetaData) }; // 2908320797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SteeringInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Rate at which input steering can rise and fall\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which input steering can rise and fall" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SteeringInputRate = { "SteeringInputRate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, SteeringInputRate), Z_Construct_UScriptStruct_FVehicleInputRateConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SteeringInputRate_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SteeringInputRate_MetaData) }; // 2908320797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_HandbrakeInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Rate at which input handbrake can rise and fall\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which input handbrake can rise and fall" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_HandbrakeInputRate = { "HandbrakeInputRate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, HandbrakeInputRate), Z_Construct_UScriptStruct_FVehicleInputRateConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_HandbrakeInputRate_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_HandbrakeInputRate_MetaData) }; // 2908320797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_PitchInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Rate at which input pitch can rise and fall\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which input pitch can rise and fall" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_PitchInputRate = { "PitchInputRate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, PitchInputRate), Z_Construct_UScriptStruct_FVehicleInputRateConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_PitchInputRate_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_PitchInputRate_MetaData) }; // 2908320797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RollInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Rate at which input roll can rise and fall\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which input roll can rise and fall" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RollInputRate = { "RollInputRate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, RollInputRate), Z_Construct_UScriptStruct_FVehicleInputRateConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RollInputRate_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RollInputRate_MetaData) }; // 2908320797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_YawInputRate_MetaData[] = {
		{ "Category", "VehicleInput" },
		{ "Comment", "// Rate at which input yaw can rise and fall\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "Rate at which input yaw can rise and fall" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_YawInputRate = { "YawInputRate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, YawInputRate), Z_Construct_UScriptStruct_FVehicleInputRateConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_YawInputRate_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_YawInputRate_MetaData) }; // 2908320797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_OverrideController_MetaData[] = {
		{ "Comment", "/* simulation code running on the physics thread async callback */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleMovementComponent.h" },
		{ "ToolTip", "simulation code running on the physics thread async callback" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_OverrideController = { "OverrideController", nullptr, (EPropertyFlags)0x0024080000002020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosVehicleMovementComponent, OverrideController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_OverrideController_MetaData), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_OverrideController_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bReverseAsBrake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bThrottleAsBrake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEnableCenterOfMassOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_CenterOfMassOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ChassisWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ChassisHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DragCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DownforceCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DragArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_DebugDragMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_InertiaTensorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SleepThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SleepSlopeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Aerofoils_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Aerofoils,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Thrusters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_Thrusters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_TorqueControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_TargetRotationControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StabilizeControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawHandbrakeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawGearUpInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRawGearDownInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bWasAvoidanceUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bParkEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEngineStarterRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bEngineIsStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bUseClutch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_NetworkPhysicsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ReplicatedState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawSteeringInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawThrottleInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawBrakeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawPitchInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawRollInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RawYawInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SteeringInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ThrottleInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_BrakeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_PitchInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RollInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_YawInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_HandbrakeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RunEngineStarterInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StartEngineInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_bRequiresControllerForInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_IdleBrakeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_StopThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_WrongDirectionThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_ThrottleInputRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_BrakeInputRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_SteeringInputRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_HandbrakeInputRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_PitchInputRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_RollInputRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_YawInputRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::NewProp_OverrideController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosVehicleMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::ClassParams = {
		&UChaosVehicleMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UChaosVehicleMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UChaosVehicleMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosVehicleMovementComponent.OuterSingleton, Z_Construct_UClass_UChaosVehicleMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosVehicleMovementComponent.OuterSingleton;
	}
	template<> CHAOSVEHICLES_API UClass* StaticClass<UChaosVehicleMovementComponent>()
	{
		return UChaosVehicleMovementComponent::StaticClass();
	}

	void UChaosVehicleMovementComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedState(TEXT("ReplicatedState"));
		static const FName Name_OverrideController(TEXT("OverrideController"));

		const bool bIsValid = true
			&& Name_ReplicatedState == ClassReps[(int32)ENetFields_Private::ReplicatedState].Property->GetFName()
			&& Name_OverrideController == ClassReps[(int32)ENetFields_Private::OverrideController].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UChaosVehicleMovementComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosVehicleMovementComponent);
	UChaosVehicleMovementComponent::~UChaosVehicleMovementComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosVehicleMovementComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_Statics::EnumInfo[] = {
		{ EInputFunctionType_StaticEnum, TEXT("EInputFunctionType"), &Z_Registration_Info_UEnum_EInputFunctionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 655293052U) },
		{ EVehicleAerofoilType_StaticEnum, TEXT("EVehicleAerofoilType"), &Z_Registration_Info_UEnum_EVehicleAerofoilType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4135751376U) },
		{ EVehicleThrustType_StaticEnum, TEXT("EVehicleThrustType"), &Z_Registration_Info_UEnum_EVehicleThrustType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3298917404U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_Statics::ScriptStructInfo[] = {
		{ FVehicleReplicatedState::StaticStruct, Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics::NewStructOps, TEXT("VehicleReplicatedState"), &Z_Registration_Info_UScriptStruct_VehicleReplicatedState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleReplicatedState), 3153350740U) },
		{ FVehicleTorqueControlConfig::StaticStruct, Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics::NewStructOps, TEXT("VehicleTorqueControlConfig"), &Z_Registration_Info_UScriptStruct_VehicleTorqueControlConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleTorqueControlConfig), 3107371636U) },
		{ FVehicleTargetRotationControlConfig::StaticStruct, Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics::NewStructOps, TEXT("VehicleTargetRotationControlConfig"), &Z_Registration_Info_UScriptStruct_VehicleTargetRotationControlConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleTargetRotationControlConfig), 1077545194U) },
		{ FVehicleStabilizeControlConfig::StaticStruct, Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics::NewStructOps, TEXT("VehicleStabilizeControlConfig"), &Z_Registration_Info_UScriptStruct_VehicleStabilizeControlConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleStabilizeControlConfig), 2088157081U) },
		{ FVehicleInputRateConfig::StaticStruct, Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics::NewStructOps, TEXT("VehicleInputRateConfig"), &Z_Registration_Info_UScriptStruct_VehicleInputRateConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleInputRateConfig), 2908320797U) },
		{ FVehicleAerofoilConfig::StaticStruct, Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics::NewStructOps, TEXT("VehicleAerofoilConfig"), &Z_Registration_Info_UScriptStruct_VehicleAerofoilConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleAerofoilConfig), 1281315638U) },
		{ FVehicleThrustConfig::StaticStruct, Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics::NewStructOps, TEXT("VehicleThrustConfig"), &Z_Registration_Info_UScriptStruct_VehicleThrustConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleThrustConfig), 1664449170U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosVehicleMovementComponent, UChaosVehicleMovementComponent::StaticClass, TEXT("UChaosVehicleMovementComponent"), &Z_Registration_Info_UClass_UChaosVehicleMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosVehicleMovementComponent), 2278370889U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_2761884294(TEXT("/Script/ChaosVehicles"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
