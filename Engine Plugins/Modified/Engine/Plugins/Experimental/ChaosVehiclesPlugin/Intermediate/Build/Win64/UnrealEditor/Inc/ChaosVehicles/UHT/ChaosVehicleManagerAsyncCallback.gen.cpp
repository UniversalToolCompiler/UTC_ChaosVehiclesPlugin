// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVehicleManagerAsyncCallback.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVehicleManagerAsyncCallback() {}
// Cross Module References
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FControlInputs();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkVehicleInputs();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkVehicleStates();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleInputs();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsDatas();
	UPackage* Z_Construct_UPackage__Script_ChaosVehicles();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleInputs;
class UScriptStruct* FVehicleInputs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleInputs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleInputs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleInputs, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("VehicleInputs"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleInputs.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FVehicleInputs>()
{
	return FVehicleInputs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVehicleInputs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputs_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Vehicle inputs from the player controller */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Vehicle inputs from the player controller" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleInputs>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_SteeringInput_MetaData[] = {
		{ "Comment", "// Steering output to physics system. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Steering output to physics system. Range -1...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_SteeringInput = { "SteeringInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleInputs, SteeringInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_SteeringInput_MetaData), Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_SteeringInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_ThrottleInput_MetaData[] = {
		{ "Comment", "// Accelerator output to physics system. Range 0...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Accelerator output to physics system. Range 0...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_ThrottleInput = { "ThrottleInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleInputs, ThrottleInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_ThrottleInput_MetaData), Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_ThrottleInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_BrakeInput_MetaData[] = {
		{ "Comment", "// Brake output to physics system. Range 0...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Brake output to physics system. Range 0...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_BrakeInput = { "BrakeInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleInputs, BrakeInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_BrakeInput_MetaData), Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_BrakeInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_PitchInput_MetaData[] = {
		{ "Comment", "// Body Pitch output to physics system. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Body Pitch output to physics system. Range -1...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_PitchInput = { "PitchInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleInputs, PitchInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_PitchInput_MetaData), Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_PitchInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_RollInput_MetaData[] = {
		{ "Comment", "// Body Roll output to physics system. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Body Roll output to physics system. Range -1...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_RollInput = { "RollInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleInputs, RollInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_RollInput_MetaData), Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_RollInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_YawInput_MetaData[] = {
		{ "Comment", "// Body Yaw output to physics system. Range -1...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Body Yaw output to physics system. Range -1...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_YawInput = { "YawInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleInputs, YawInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_YawInput_MetaData), Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_YawInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_HandbrakeInput_MetaData[] = {
		{ "Comment", "// Handbrake output to physics system. Range 0...1\n" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Handbrake output to physics system. Range 0...1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_HandbrakeInput = { "HandbrakeInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleInputs, HandbrakeInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_HandbrakeInput_MetaData), Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_HandbrakeInput_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_SteeringInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_ThrottleInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_BrakeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_PitchInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_RollInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_YawInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewProp_HandbrakeInput,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleInputs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"VehicleInputs",
		Z_Construct_UScriptStruct_FVehicleInputs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputs_Statics::PropPointers),
		sizeof(FVehicleInputs),
		alignof(FVehicleInputs),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVehicleInputs_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleInputs_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleInputs()
	{
		if (!Z_Registration_Info_UScriptStruct_VehicleInputs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleInputs.InnerSingleton, Z_Construct_UScriptStruct_FVehicleInputs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VehicleInputs.InnerSingleton;
	}

static_assert(std::is_polymorphic<FControlInputs>() == std::is_polymorphic<FVehicleInputs>(), "USTRUCT FControlInputs cannot be polymorphic unless super FVehicleInputs is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlInputs;
class UScriptStruct* FControlInputs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlInputs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlInputs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlInputs, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("ControlInputs"));
	}
	return Z_Registration_Info_UScriptStruct_ControlInputs.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FControlInputs>()
{
	return FControlInputs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlInputs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParkingEnabled_MetaData[];
#endif
		static void NewProp_ParkingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ParkingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransmissionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearUpInput_MetaData[];
#endif
		static void NewProp_GearUpInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GearUpInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearDownInput_MetaData[];
#endif
		static void NewProp_GearDownInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GearDownInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunEngineStarter_MetaData[];
#endif
		static void NewProp_RunEngineStarter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RunEngineStarter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineStarted_MetaData[];
#endif
		static void NewProp_EngineStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EngineStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseClutch_MetaData[];
#endif
		static void NewProp_UseClutch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseClutch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlInputs_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Control inputs holding the vehicle ones + persisten ones */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Control inputs holding the vehicle ones + persisten ones" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlInputs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlInputs>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_ParkingEnabled_MetaData[] = {
		{ "Comment", "/** Check if the parking is enabled  */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Check if the parking is enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_ParkingEnabled_SetBit(void* Obj)
	{
		((FControlInputs*)Obj)->ParkingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_ParkingEnabled = { "ParkingEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FControlInputs), &Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_ParkingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_ParkingEnabled_MetaData), Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_ParkingEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_TransmissionType_MetaData[] = {
		{ "Comment", "/** Type of transmission (manual/auto) */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Type of transmission (manual/auto)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_TransmissionType = { "TransmissionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlInputs, TransmissionType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_TransmissionType_MetaData), Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_TransmissionType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_GearUpInput_MetaData[] = {
		{ "Comment", "/** Check if the user has risen the gear */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Check if the user has risen the gear" },
	};
#endif
	void Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_GearUpInput_SetBit(void* Obj)
	{
		((FControlInputs*)Obj)->GearUpInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_GearUpInput = { "GearUpInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FControlInputs), &Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_GearUpInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_GearUpInput_MetaData), Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_GearUpInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_GearDownInput_MetaData[] = {
		{ "Comment", "/** Check if the user has descreased the gear */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Check if the user has descreased the gear" },
	};
#endif
	void Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_GearDownInput_SetBit(void* Obj)
	{
		((FControlInputs*)Obj)->GearDownInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_GearDownInput = { "GearDownInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FControlInputs), &Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_GearDownInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_GearDownInput_MetaData), Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_GearDownInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_RunEngineStarter_MetaData[] = {
		{ "Comment", "/** Check if the user try to start the engine */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Check if the user try to start the engine" },
	};
#endif
	void Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_RunEngineStarter_SetBit(void* Obj)
	{
		((FControlInputs*)Obj)->RunEngineStarter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_RunEngineStarter = { "RunEngineStarter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FControlInputs), &Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_RunEngineStarter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_RunEngineStarter_MetaData), Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_RunEngineStarter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_EngineStarted_MetaData[] = {
		{ "Comment", "/** Check if the user started the engine */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Check if the user started the engine" },
	};
#endif
	void Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_EngineStarted_SetBit(void* Obj)
	{
		((FControlInputs*)Obj)->EngineStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_EngineStarted = { "EngineStarted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FControlInputs), &Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_EngineStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_EngineStarted_MetaData), Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_EngineStarted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_UseClutch_MetaData[] = {
		{ "Comment", "/** Check if the user use clutch transmission */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Check if the user use clutch transmission" },
	};
#endif
	void Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_UseClutch_SetBit(void* Obj)
	{
		((FControlInputs*)Obj)->UseClutch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_UseClutch = { "UseClutch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FControlInputs), &Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_UseClutch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_UseClutch_MetaData), Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_UseClutch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_ParkingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_TransmissionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_GearUpInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_GearDownInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_RunEngineStarter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_EngineStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlInputs_Statics::NewProp_UseClutch,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlInputs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		Z_Construct_UScriptStruct_FVehicleInputs,
		&NewStructOps,
		"ControlInputs",
		Z_Construct_UScriptStruct_FControlInputs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlInputs_Statics::PropPointers),
		sizeof(FControlInputs),
		alignof(FControlInputs),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlInputs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlInputs_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlInputs_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FControlInputs()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlInputs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlInputs.InnerSingleton, Z_Construct_UScriptStruct_FControlInputs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlInputs.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNetworkVehicleInputs>() == std::is_polymorphic<FNetworkPhysicsDatas>(), "USTRUCT FNetworkVehicleInputs cannot be polymorphic unless super FNetworkPhysicsDatas is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkVehicleInputs;
class UScriptStruct* FNetworkVehicleInputs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkVehicleInputs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkVehicleInputs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkVehicleInputs, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("NetworkVehicleInputs"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkVehicleInputs.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FNetworkVehicleInputs>()
{
	return FNetworkVehicleInputs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleInputs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VehicleInputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionChangeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransmissionChangeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionCurrentGear_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransmissionCurrentGear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionTargetGear_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransmissionTargetGear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Vehicle Inputs datas that will be used in the inputs history to be applied while simulating */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Vehicle Inputs datas that will be used in the inputs history to be applied while simulating" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkVehicleInputs>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_VehicleInputs_MetaData[] = {
		{ "Comment", "/** List of incoming control inputs coming from the local client */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "List of incoming control inputs coming from the local client" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_VehicleInputs = { "VehicleInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkVehicleInputs, VehicleInputs), Z_Construct_UScriptStruct_FControlInputs, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_VehicleInputs_MetaData), Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_VehicleInputs_MetaData) }; // 2567131790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionChangeTime_MetaData[] = {
		{ "Comment", "/** Transmission change time that could be set/changed from GT */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Transmission change time that could be set/changed from GT" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionChangeTime = { "TransmissionChangeTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkVehicleInputs, TransmissionChangeTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionChangeTime_MetaData), Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionChangeTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionCurrentGear_MetaData[] = {
		{ "Comment", "/** Transmission current gear that could be set/changed from GT */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Transmission current gear that could be set/changed from GT" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionCurrentGear = { "TransmissionCurrentGear", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkVehicleInputs, TransmissionCurrentGear), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionCurrentGear_MetaData), Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionCurrentGear_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionTargetGear_MetaData[] = {
		{ "Comment", "/** Transmission target gear that could be set/changed from GT */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Transmission target gear that could be set/changed from GT" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionTargetGear = { "TransmissionTargetGear", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkVehicleInputs, TransmissionTargetGear), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionTargetGear_MetaData), Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionTargetGear_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_VehicleInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionChangeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionCurrentGear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewProp_TransmissionTargetGear,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		Z_Construct_UScriptStruct_FNetworkPhysicsDatas,
		&NewStructOps,
		"NetworkVehicleInputs",
		Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::PropPointers),
		sizeof(FNetworkVehicleInputs),
		alignof(FNetworkVehicleInputs),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNetworkVehicleInputs()
	{
		if (!Z_Registration_Info_UScriptStruct_NetworkVehicleInputs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkVehicleInputs.InnerSingleton, Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetworkVehicleInputs.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNetworkVehicleStates>() == std::is_polymorphic<FNetworkPhysicsDatas>(), "USTRUCT FNetworkVehicleStates cannot be polymorphic unless super FNetworkPhysicsDatas is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkVehicleStates;
class UScriptStruct* FNetworkVehicleStates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkVehicleStates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkVehicleStates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkVehicleStates, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("NetworkVehicleStates"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkVehicleStates.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FNetworkVehicleStates>()
{
	return FNetworkVehicleStates::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateLastVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateLastVelocity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelsOmega_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelsOmega_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelsOmega;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelsAngularPosition_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelsAngularPosition_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelsAngularPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspensionLastDisplacement_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionLastDisplacement_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuspensionLastDisplacement;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspensionLastSpringLength_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionLastSpringLength_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuspensionLastSpringLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspensionAveragedLength_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionAveragedLength_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuspensionAveragedLength;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SuspensionAveragedCount_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionAveragedCount_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuspensionAveragedCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SuspensionAveragedNum_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionAveragedNum_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuspensionAveragedNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineOmega_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineOmega;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Vehicle states datas that will be used in the states history to rewind the simulation at some point inn time */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Vehicle states datas that will be used in the states history to rewind the simulation at some point inn time" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkVehicleStates>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_StateLastVelocity_MetaData[] = {
		{ "Comment", "/** Vehicle state last velocity */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Vehicle state last velocity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_StateLastVelocity = { "StateLastVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkVehicleStates, StateLastVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_StateLastVelocity_MetaData), Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_StateLastVelocity_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_WheelsOmega_Inner = { "WheelsOmega", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_WheelsOmega_MetaData[] = {
		{ "Comment", "/** Angular velocity for each wheels */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Angular velocity for each wheels" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_WheelsOmega = { "WheelsOmega", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkVehicleStates, WheelsOmega), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_WheelsOmega_MetaData), Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_WheelsOmega_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_WheelsAngularPosition_Inner = { "WheelsAngularPosition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_WheelsAngularPosition_MetaData[] = {
		{ "Comment", "/** Angular position for each wheels */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Angular position for each wheels" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_WheelsAngularPosition = { "WheelsAngularPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkVehicleStates, WheelsAngularPosition), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_WheelsAngularPosition_MetaData), Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_WheelsAngularPosition_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionLastDisplacement_Inner = { "SuspensionLastDisplacement", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionLastDisplacement_MetaData[] = {
		{ "Comment", "/** Suspension latest displacement to be used while simulating */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Suspension latest displacement to be used while simulating" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionLastDisplacement = { "SuspensionLastDisplacement", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkVehicleStates, SuspensionLastDisplacement), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionLastDisplacement_MetaData), Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionLastDisplacement_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionLastSpringLength_Inner = { "SuspensionLastSpringLength", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionLastSpringLength_MetaData[] = {
		{ "Comment", "/** Suspension latest spring length to be used while simulating  */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Suspension latest spring length to be used while simulating" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionLastSpringLength = { "SuspensionLastSpringLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkVehicleStates, SuspensionLastSpringLength), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionLastSpringLength_MetaData), Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionLastSpringLength_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedLength_Inner = { "SuspensionAveragedLength", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedLength_MetaData[] = {
		{ "Comment", "/** Suspension averaged length for smoothing */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Suspension averaged length for smoothing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedLength = { "SuspensionAveragedLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkVehicleStates, SuspensionAveragedLength), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedLength_MetaData), Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedLength_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedCount_Inner = { "SuspensionAveragedCount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedCount_MetaData[] = {
		{ "Comment", "/** Suspension averaged count for smoothing */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Suspension averaged count for smoothing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedCount = { "SuspensionAveragedCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkVehicleStates, SuspensionAveragedCount), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedCount_MetaData), Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedCount_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedNum_Inner = { "SuspensionAveragedNum", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedNum_MetaData[] = {
		{ "Comment", "/** Suspension averaged number for smoothing */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Suspension averaged number for smoothing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedNum = { "SuspensionAveragedNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkVehicleStates, SuspensionAveragedNum), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedNum_MetaData), Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_EngineOmega_MetaData[] = {
		{ "Comment", "/** Engine angular velocity */" },
		{ "ModuleRelativePath", "Public/ChaosVehicleManagerAsyncCallback.h" },
		{ "ToolTip", "Engine angular velocity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_EngineOmega = { "EngineOmega", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkVehicleStates, EngineOmega), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_EngineOmega_MetaData), Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_EngineOmega_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_StateLastVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_WheelsOmega_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_WheelsOmega,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_WheelsAngularPosition_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_WheelsAngularPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionLastDisplacement_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionLastDisplacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionLastSpringLength_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionLastSpringLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedLength_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedCount_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedNum_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_SuspensionAveragedNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewProp_EngineOmega,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		Z_Construct_UScriptStruct_FNetworkPhysicsDatas,
		&NewStructOps,
		"NetworkVehicleStates",
		Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::PropPointers),
		sizeof(FNetworkVehicleStates),
		alignof(FNetworkVehicleStates),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNetworkVehicleStates()
	{
		if (!Z_Registration_Info_UScriptStruct_NetworkVehicleStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkVehicleStates.InnerSingleton, Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetworkVehicleStates.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleManagerAsyncCallback_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleManagerAsyncCallback_h_Statics::ScriptStructInfo[] = {
		{ FVehicleInputs::StaticStruct, Z_Construct_UScriptStruct_FVehicleInputs_Statics::NewStructOps, TEXT("VehicleInputs"), &Z_Registration_Info_UScriptStruct_VehicleInputs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleInputs), 2289855303U) },
		{ FControlInputs::StaticStruct, Z_Construct_UScriptStruct_FControlInputs_Statics::NewStructOps, TEXT("ControlInputs"), &Z_Registration_Info_UScriptStruct_ControlInputs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlInputs), 2567131790U) },
		{ FNetworkVehicleInputs::StaticStruct, Z_Construct_UScriptStruct_FNetworkVehicleInputs_Statics::NewStructOps, TEXT("NetworkVehicleInputs"), &Z_Registration_Info_UScriptStruct_NetworkVehicleInputs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkVehicleInputs), 4136867090U) },
		{ FNetworkVehicleStates::StaticStruct, Z_Construct_UScriptStruct_FNetworkVehicleStates_Statics::NewStructOps, TEXT("NetworkVehicleStates"), &Z_Registration_Info_UScriptStruct_NetworkVehicleStates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkVehicleStates), 2813264486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleManagerAsyncCallback_h_4129623129(TEXT("/Script/ChaosVehicles"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleManagerAsyncCallback_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleManagerAsyncCallback_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
