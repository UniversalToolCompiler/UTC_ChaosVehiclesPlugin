// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "SnapshotData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosWheeledVehicleMovementComponent() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleMovementComponent();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel_NoRegister();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosWheeledVehicleMovementComponent();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister();
	CHAOSVEHICLES_API UEnum* Z_Construct_UEnum_ChaosVehicles_ESteeringType();
	CHAOSVEHICLES_API UEnum* Z_Construct_UEnum_ChaosVehicles_ETorqueCombineMethod();
	CHAOSVEHICLES_API UEnum* Z_Construct_UEnum_ChaosVehicles_EVehicleDifferential();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosWheelSetup();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleDifferentialConfig();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleEngineConfig();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleSteeringConfig();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleTransmissionConfig();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FWheeledSnaphotData();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FWheelSnapshot();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FWheelStatus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosVehicles();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVehicleDifferential;
	static UEnum* EVehicleDifferential_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVehicleDifferential.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVehicleDifferential.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVehicles_EVehicleDifferential, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("EVehicleDifferential"));
		}
		return Z_Registration_Info_UEnum_EVehicleDifferential.OuterSingleton;
	}
	template<> CHAOSVEHICLES_API UEnum* StaticEnum<EVehicleDifferential>()
	{
		return EVehicleDifferential_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosVehicles_EVehicleDifferential_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosVehicles_EVehicleDifferential_Statics::Enumerators[] = {
		{ "EVehicleDifferential::Undefined", (int64)EVehicleDifferential::Undefined },
		{ "EVehicleDifferential::AllWheelDrive", (int64)EVehicleDifferential::AllWheelDrive },
		{ "EVehicleDifferential::FrontWheelDrive", (int64)EVehicleDifferential::FrontWheelDrive },
		{ "EVehicleDifferential::RearWheelDrive", (int64)EVehicleDifferential::RearWheelDrive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosVehicles_EVehicleDifferential_Statics::Enum_MetaDataParams[] = {
		{ "AllWheelDrive.Name", "EVehicleDifferential::AllWheelDrive" },
		{ "FrontWheelDrive.Name", "EVehicleDifferential::FrontWheelDrive" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "RearWheelDrive.Name", "EVehicleDifferential::RearWheelDrive" },
		{ "Undefined.Name", "EVehicleDifferential::Undefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVehicles_EVehicleDifferential_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		"EVehicleDifferential",
		"EVehicleDifferential",
		Z_Construct_UEnum_ChaosVehicles_EVehicleDifferential_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVehicles_EVehicleDifferential_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVehicles_EVehicleDifferential_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVehicles_EVehicleDifferential_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ChaosVehicles_EVehicleDifferential()
	{
		if (!Z_Registration_Info_UEnum_EVehicleDifferential.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVehicleDifferential.InnerSingleton, Z_Construct_UEnum_ChaosVehicles_EVehicleDifferential_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVehicleDifferential.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WheelStatus;
class UScriptStruct* FWheelStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WheelStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WheelStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheelStatus, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("WheelStatus"));
	}
	return Z_Registration_Info_UScriptStruct_WheelStatus.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FWheelStatus>()
{
	return FWheelStatus::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWheelStatus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInContact_MetaData[];
#endif
		static void NewProp_bInContact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInContact;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContactPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContactPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PhysMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedSuspensionLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedSuspensionLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlipAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlipAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlipping_MetaData[];
#endif
		static void NewProp_bIsSlipping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlipping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlipMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlipMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSkidding_MetaData[];
#endif
		static void NewProp_bIsSkidding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSkidding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkidMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkidMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkidNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkidNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriveTorque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DriveTorque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakeTorque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakeTorque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bABSActivated_MetaData[];
#endif
		static void NewProp_bABSActivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bABSActivated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure containing information about the status of a single wheel of the vehicle.\n */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Structure containing information about the status of a single wheel of the vehicle." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWheelStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheelStatus>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bInContact_MetaData[] = {
		{ "Comment", "/** This wheel is in contact with the ground */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "This wheel is in contact with the ground" },
	};
#endif
	void Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bInContact_SetBit(void* Obj)
	{
		((FWheelStatus*)Obj)->bInContact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bInContact = { "bInContact", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWheelStatus), &Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bInContact_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bInContact_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bInContact_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_ContactPoint_MetaData[] = {
		{ "Comment", "/** Wheel contact point */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Wheel contact point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_ContactPoint = { "ContactPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStatus, ContactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_ContactPoint_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_ContactPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_HitLocation_MetaData[] = {
		{ "Comment", "/** Wheel contact location */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Wheel contact location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStatus, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_HitLocation_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_HitLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Comment", "/** Material that wheel is in contact with */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Material that wheel is in contact with" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStatus, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_PhysMaterial_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_PhysMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_NormalizedSuspensionLength_MetaData[] = {
		{ "Comment", "/** Normalized suspension length at this wheel */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Normalized suspension length at this wheel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_NormalizedSuspensionLength = { "NormalizedSuspensionLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStatus, NormalizedSuspensionLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_NormalizedSuspensionLength_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_NormalizedSuspensionLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SpringForce_MetaData[] = {
		{ "Comment", "/** Spring Force that is occurring at wheel suspension */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Spring Force that is occurring at wheel suspension" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SpringForce = { "SpringForce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStatus, SpringForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SpringForce_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SpringForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SlipAngle_MetaData[] = {
		{ "Comment", "/** Slip angle at the wheel - difference between wheel local direction and velocity at wheel */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Slip angle at the wheel - difference between wheel local direction and velocity at wheel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SlipAngle = { "SlipAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStatus, SlipAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SlipAngle_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SlipAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bIsSlipping_MetaData[] = {
		{ "Comment", "/** Is the wheel slipping */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Is the wheel slipping" },
	};
#endif
	void Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bIsSlipping_SetBit(void* Obj)
	{
		((FWheelStatus*)Obj)->bIsSlipping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bIsSlipping = { "bIsSlipping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWheelStatus), &Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bIsSlipping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bIsSlipping_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bIsSlipping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SlipMagnitude_MetaData[] = {
		{ "Comment", "/** Magnitude of slippage of wheel, difference between wheel speed and ground speed */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Magnitude of slippage of wheel, difference between wheel speed and ground speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SlipMagnitude = { "SlipMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStatus, SlipMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SlipMagnitude_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SlipMagnitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bIsSkidding_MetaData[] = {
		{ "Comment", "/** Is the wheel skidding */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Is the wheel skidding" },
	};
#endif
	void Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bIsSkidding_SetBit(void* Obj)
	{
		((FWheelStatus*)Obj)->bIsSkidding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bIsSkidding = { "bIsSkidding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWheelStatus), &Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bIsSkidding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bIsSkidding_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bIsSkidding_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SkidMagnitude_MetaData[] = {
		{ "Comment", "/** Magnitude of skid */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Magnitude of skid" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SkidMagnitude = { "SkidMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStatus, SkidMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SkidMagnitude_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SkidMagnitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SkidNormal_MetaData[] = {
		{ "Comment", "/** Direction of skid, i.e. normalized direction */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Direction of skid, i.e. normalized direction" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SkidNormal = { "SkidNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStatus, SkidNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SkidNormal_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SkidNormal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_DriveTorque_MetaData[] = {
		{ "Comment", "/** Drive torque currently applied at wheel */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Drive torque currently applied at wheel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_DriveTorque = { "DriveTorque", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStatus, DriveTorque), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_DriveTorque_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_DriveTorque_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_BrakeTorque_MetaData[] = {
		{ "Comment", "/** Brake torque currently applied at wheel */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Brake torque currently applied at wheel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_BrakeTorque = { "BrakeTorque", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStatus, BrakeTorque), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_BrakeTorque_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_BrakeTorque_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bABSActivated_MetaData[] = {
		{ "Comment", "/** Is the ABS currently engaged - useful for audio Q's */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Is the ABS currently engaged - useful for audio Q's" },
	};
#endif
	void Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bABSActivated_SetBit(void* Obj)
	{
		((FWheelStatus*)Obj)->bABSActivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bABSActivated = { "bABSActivated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWheelStatus), &Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bABSActivated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bABSActivated_MetaData), Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bABSActivated_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWheelStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bInContact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_ContactPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_PhysMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_NormalizedSuspensionLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SpringForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SlipAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bIsSlipping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SlipMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bIsSkidding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SkidMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_SkidNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_DriveTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_BrakeTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStatus_Statics::NewProp_bABSActivated,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWheelStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"WheelStatus",
		Z_Construct_UScriptStruct_FWheelStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::PropPointers),
		sizeof(FWheelStatus),
		alignof(FWheelStatus),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWheelStatus_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStatus_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWheelStatus()
	{
		if (!Z_Registration_Info_UScriptStruct_WheelStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WheelStatus.InnerSingleton, Z_Construct_UScriptStruct_FWheelStatus_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WheelStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleDifferentialConfig;
class UScriptStruct* FVehicleDifferentialConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleDifferentialConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleDifferentialConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleDifferentialConfig, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("VehicleDifferentialConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleDifferentialConfig.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FVehicleDifferentialConfig>()
{
	return FVehicleDifferentialConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DifferentialType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DifferentialType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DifferentialType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontRearSplit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontRearSplit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleDifferentialConfig>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::NewProp_DifferentialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::NewProp_DifferentialType_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Type of differential */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Type of differential" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::NewProp_DifferentialType = { "DifferentialType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleDifferentialConfig, DifferentialType), Z_Construct_UEnum_ChaosVehicles_EVehicleDifferential, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::NewProp_DifferentialType_MetaData), Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::NewProp_DifferentialType_MetaData) }; // 2204051849
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::NewProp_FrontRearSplit_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Ratio of torque split between front and rear (<0.5 means more to front, >0.5 means more to rear, works only with 4W type) */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Ratio of torque split between front and rear (<0.5 means more to front, >0.5 means more to rear, works only with 4W type)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::NewProp_FrontRearSplit = { "FrontRearSplit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleDifferentialConfig, FrontRearSplit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::NewProp_FrontRearSplit_MetaData), Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::NewProp_FrontRearSplit_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::NewProp_DifferentialType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::NewProp_DifferentialType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::NewProp_FrontRearSplit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"VehicleDifferentialConfig",
		Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::PropPointers),
		sizeof(FVehicleDifferentialConfig),
		alignof(FVehicleDifferentialConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleDifferentialConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VehicleDifferentialConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleDifferentialConfig.InnerSingleton, Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VehicleDifferentialConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleEngineConfig;
class UScriptStruct* FVehicleEngineConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleEngineConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleEngineConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleEngineConfig, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("VehicleEngineConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleEngineConfig.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FVehicleEngineConfig>()
{
	return FVehicleEngineConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTorque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTorque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TorqueCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TorqueCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineIgnitionDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineIgnitionDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineStarterDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineStarterDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEngineStarterRPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEngineStarterRPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineStarterCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineStarterCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineIdleRPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineIdleRPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineSlippingPoint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineSlippingPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineBrakeEffect_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineBrakeEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineRevUpMOI_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineRevUpMOI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineRevDownRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineRevDownRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleEngineConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxTorque_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Max Engine Torque (Nm) is multiplied by TorqueCurve */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Max Engine Torque (Nm) is multiplied by TorqueCurve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxTorque = { "MaxTorque", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleEngineConfig, MaxTorque), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxTorque_MetaData), Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxTorque_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_TorqueCurve_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Torque [Normalized 0..1] for a given RPM */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Torque [Normalized 0..1] for a given RPM" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_TorqueCurve = { "TorqueCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleEngineConfig, TorqueCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_TorqueCurve_MetaData), Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_TorqueCurve_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineIgnitionDuration_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Time to initialize the engine */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Time to initialize the engine" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineIgnitionDuration = { "EngineIgnitionDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleEngineConfig, EngineIgnitionDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineIgnitionDuration_MetaData), Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineIgnitionDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineStarterDuration_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Time to start the engine */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Time to start the engine" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineStarterDuration = { "EngineStarterDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleEngineConfig, EngineStarterDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineStarterDuration_MetaData), Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineStarterDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxEngineStarterRPM_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Max engine starter speed */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Max engine starter speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxEngineStarterRPM = { "MaxEngineStarterRPM", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleEngineConfig, MaxEngineStarterRPM), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxEngineStarterRPM_MetaData), Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxEngineStarterRPM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineStarterCurve_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Engine RPM at given time when starting the engine */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Engine RPM at given time when starting the engine" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineStarterCurve = { "EngineStarterCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleEngineConfig, EngineStarterCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineStarterCurve_MetaData), Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineStarterCurve_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxRPM_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Maximum revolutions per minute of the engine */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Maximum revolutions per minute of the engine" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxRPM = { "MaxRPM", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleEngineConfig, MaxRPM), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxRPM_MetaData), Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxRPM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineIdleRPM_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Idle RMP of engine then in neutral/stationary */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Idle RMP of engine then in neutral/stationary" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineIdleRPM = { "EngineIdleRPM", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleEngineConfig, EngineIdleRPM), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineIdleRPM_MetaData), Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineIdleRPM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineSlippingPoint_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** At which RPM engine stalls */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "At which RPM engine stalls" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineSlippingPoint = { "EngineSlippingPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleEngineConfig, EngineSlippingPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineSlippingPoint_MetaData), Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineSlippingPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineBrakeEffect_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Braking effect from engine, when throttle released */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Braking effect from engine, when throttle released" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineBrakeEffect = { "EngineBrakeEffect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleEngineConfig, EngineBrakeEffect), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineBrakeEffect_MetaData), Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineBrakeEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineRevUpMOI_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Affects how fast the engine RPM speed up */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Affects how fast the engine RPM speed up" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineRevUpMOI = { "EngineRevUpMOI", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleEngineConfig, EngineRevUpMOI), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineRevUpMOI_MetaData), Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineRevUpMOI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineRevDownRate_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Affects how fast the engine RPM slows down */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Affects how fast the engine RPM slows down" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineRevDownRate = { "EngineRevDownRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleEngineConfig, EngineRevDownRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineRevDownRate_MetaData), Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineRevDownRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_TorqueCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineIgnitionDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineStarterDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxEngineStarterRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineStarterCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_MaxRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineIdleRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineSlippingPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineBrakeEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineRevUpMOI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewProp_EngineRevDownRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"VehicleEngineConfig",
		Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::PropPointers),
		sizeof(FVehicleEngineConfig),
		alignof(FVehicleEngineConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleEngineConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VehicleEngineConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleEngineConfig.InnerSingleton, Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VehicleEngineConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleTransmissionConfig;
class UScriptStruct* FVehicleTransmissionConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleTransmissionConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleTransmissionConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleTransmissionConfig, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("VehicleTransmissionConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleTransmissionConfig.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FVehicleTransmissionConfig>()
{
	return FVehicleTransmissionConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAutomaticGears_MetaData[];
#endif
		static void NewProp_bUseAutomaticGears_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAutomaticGears;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseClutch_MetaData[];
#endif
		static void NewProp_bUseClutch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseClutch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAutoReverse_MetaData[];
#endif
		static void NewProp_bUseAutoReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAutoReverse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalRatio;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardGearRatios_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardGearRatios_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ForwardGearRatios;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverseGearRatios_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverseGearRatios_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReverseGearRatios;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeUpRPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChangeUpRPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeDownRPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChangeDownRPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearChangeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GearChangeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionEfficiency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransmissionEfficiency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleTransmissionConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseAutomaticGears_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** Whether to use automatic transmission */" },
		{ "DisplayName", "Automatic Transmission" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Whether to use automatic transmission" },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseAutomaticGears_SetBit(void* Obj)
	{
		((FVehicleTransmissionConfig*)Obj)->bUseAutomaticGears = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseAutomaticGears = { "bUseAutomaticGears", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVehicleTransmissionConfig), &Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseAutomaticGears_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseAutomaticGears_MetaData), Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseAutomaticGears_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseClutch_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "Comment", "/** Whether to use clutch to change gear */" },
		{ "DisplayName", "Use Clutch" },
		{ "EditCondition", "!bUseAutomaticGears" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Whether to use clutch to change gear" },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseClutch_SetBit(void* Obj)
	{
		((FVehicleTransmissionConfig*)Obj)->bUseClutch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseClutch = { "bUseClutch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVehicleTransmissionConfig), &Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseClutch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseClutch_MetaData), Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseClutch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseAutoReverse_MetaData[] = {
		{ "Category", "VehicleSetup" },
		{ "DisplayName", "Automatic Reverse" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseAutoReverse_SetBit(void* Obj)
	{
		((FVehicleTransmissionConfig*)Obj)->bUseAutoReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseAutoReverse = { "bUseAutoReverse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVehicleTransmissionConfig), &Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseAutoReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseAutoReverse_MetaData), Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseAutoReverse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_FinalRatio_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** The final gear ratio multiplies the transmission gear ratios.*/" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "The final gear ratio multiplies the transmission gear ratios." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_FinalRatio = { "FinalRatio", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTransmissionConfig, FinalRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_FinalRatio_MetaData), Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_FinalRatio_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ForwardGearRatios_Inner = { "ForwardGearRatios", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ForwardGearRatios_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Forward gear ratios */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Forward gear ratios" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ForwardGearRatios = { "ForwardGearRatios", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTransmissionConfig, ForwardGearRatios), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ForwardGearRatios_MetaData), Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ForwardGearRatios_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ReverseGearRatios_Inner = { "ReverseGearRatios", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ReverseGearRatios_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Reverse gear ratio(s) */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Reverse gear ratio(s)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ReverseGearRatios = { "ReverseGearRatios", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTransmissionConfig, ReverseGearRatios), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ReverseGearRatios_MetaData), Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ReverseGearRatios_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ChangeUpRPM_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMax", "50000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Engine Revs at which gear up change ocurrs */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Engine Revs at which gear up change ocurrs" },
		{ "UIMax", "50000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ChangeUpRPM = { "ChangeUpRPM", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTransmissionConfig, ChangeUpRPM), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ChangeUpRPM_MetaData), Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ChangeUpRPM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ChangeDownRPM_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMax", "50000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Engine Revs at which gear down change ocurrs */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Engine Revs at which gear down change ocurrs" },
		{ "UIMax", "50000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ChangeDownRPM = { "ChangeDownRPM", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTransmissionConfig, ChangeDownRPM), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ChangeDownRPM_MetaData), Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ChangeDownRPM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_GearChangeTime_MetaData[] = {
		{ "Category", "Setup" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Time it takes to switch gears (seconds) */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Time it takes to switch gears (seconds)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_GearChangeTime = { "GearChangeTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTransmissionConfig, GearChangeTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_GearChangeTime_MetaData), Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_GearChangeTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_TransmissionEfficiency_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Mechanical frictional losses mean transmission might operate at 0.94 (94% efficiency) */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Mechanical frictional losses mean transmission might operate at 0.94 (94% efficiency)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_TransmissionEfficiency = { "TransmissionEfficiency", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleTransmissionConfig, TransmissionEfficiency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_TransmissionEfficiency_MetaData), Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_TransmissionEfficiency_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseAutomaticGears,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseClutch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_bUseAutoReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_FinalRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ForwardGearRatios_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ForwardGearRatios,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ReverseGearRatios_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ReverseGearRatios,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ChangeUpRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_ChangeDownRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_GearChangeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewProp_TransmissionEfficiency,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"VehicleTransmissionConfig",
		Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::PropPointers),
		sizeof(FVehicleTransmissionConfig),
		alignof(FVehicleTransmissionConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleTransmissionConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VehicleTransmissionConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleTransmissionConfig.InnerSingleton, Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VehicleTransmissionConfig.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteeringType;
	static UEnum* ESteeringType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteeringType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteeringType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVehicles_ESteeringType, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("ESteeringType"));
		}
		return Z_Registration_Info_UEnum_ESteeringType.OuterSingleton;
	}
	template<> CHAOSVEHICLES_API UEnum* StaticEnum<ESteeringType>()
	{
		return ESteeringType_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosVehicles_ESteeringType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosVehicles_ESteeringType_Statics::Enumerators[] = {
		{ "ESteeringType::SingleAngle", (int64)ESteeringType::SingleAngle },
		{ "ESteeringType::AngleRatio", (int64)ESteeringType::AngleRatio },
		{ "ESteeringType::Ackermann", (int64)ESteeringType::Ackermann },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosVehicles_ESteeringType_Statics::Enum_MetaDataParams[] = {
		{ "Ackermann.Name", "ESteeringType::Ackermann" },
		{ "AngleRatio.Name", "ESteeringType::AngleRatio" },
		{ "Comment", "/** Single angle : both wheels steer by the same amount\n *  AngleRatio   : outer wheels on corner steer less than the inner ones by set ratio\n *  Ackermann\x09 : Ackermann steering principle is applied */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "SingleAngle.Name", "ESteeringType::SingleAngle" },
		{ "ToolTip", "Single angle : both wheels steer by the same amount\nAngleRatio   : outer wheels on corner steer less than the inner ones by set ratio\nAckermann   : Ackermann steering principle is applied" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVehicles_ESteeringType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		"ESteeringType",
		"ESteeringType",
		Z_Construct_UEnum_ChaosVehicles_ESteeringType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVehicles_ESteeringType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVehicles_ESteeringType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVehicles_ESteeringType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ChaosVehicles_ESteeringType()
	{
		if (!Z_Registration_Info_UEnum_ESteeringType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteeringType.InnerSingleton, Z_Construct_UEnum_ChaosVehicles_ESteeringType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteeringType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleSteeringConfig;
class UScriptStruct* FVehicleSteeringConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleSteeringConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleSteeringConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleSteeringConfig, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("VehicleSteeringConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleSteeringConfig.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FVehicleSteeringConfig>()
{
	return FVehicleSteeringConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SteeringType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SteeringType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteeringCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleSteeringConfig>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_SteeringType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_SteeringType_MetaData[] = {
		{ "Category", "SteeringSetup" },
		{ "Comment", "/** Single angle : both wheels steer by the same amount\n\x09 *  AngleRatio   : outer wheels on corner steer less than the inner ones by set ratio \n\x09 *  Ackermann\x09 : Ackermann steering principle is applied */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Single angle : both wheels steer by the same amount\nAngleRatio   : outer wheels on corner steer less than the inner ones by set ratio\nAckermann    : Ackermann steering principle is applied" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_SteeringType = { "SteeringType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleSteeringConfig, SteeringType), Z_Construct_UEnum_ChaosVehicles_ESteeringType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_SteeringType_MetaData), Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_SteeringType_MetaData) }; // 2710885376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_AngleRatio_MetaData[] = {
		{ "Category", "SteeringSetup" },
		{ "Comment", "/** Only applies when AngleRatio is selected */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Only applies when AngleRatio is selected" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_AngleRatio = { "AngleRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleSteeringConfig, AngleRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_AngleRatio_MetaData), Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_AngleRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_SteeringCurve_MetaData[] = {
		{ "Category", "SteeringSetup" },
		{ "Comment", "/** Maximum steering versus forward speed (MPH) */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Maximum steering versus forward speed (MPH)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_SteeringCurve = { "SteeringCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleSteeringConfig, SteeringCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_SteeringCurve_MetaData), Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_SteeringCurve_MetaData) }; // 3321759441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_SteeringType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_SteeringType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_AngleRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewProp_SteeringCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"VehicleSteeringConfig",
		Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::PropPointers),
		sizeof(FVehicleSteeringConfig),
		alignof(FVehicleSteeringConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleSteeringConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VehicleSteeringConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleSteeringConfig.InnerSingleton, Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VehicleSteeringConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosWheelSetup;
class UScriptStruct* FChaosWheelSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosWheelSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosWheelSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosWheelSetup, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("ChaosWheelSetup"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosWheelSetup.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FChaosWheelSetup>()
{
	return FChaosWheelSetup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosWheelSetup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WheelClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosWheelSetup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_WheelClass_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "Comment", "// The wheel class to use\n" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "The wheel class to use" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_WheelClass = { "WheelClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosWheelSetup, WheelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UChaosVehicleWheel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_WheelClass_MetaData), Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_WheelClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "Comment", "// Bone name on mesh to create wheel at\n" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Bone name on mesh to create wheel at" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosWheelSetup, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_BoneName_MetaData), Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_BoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_AdditionalOffset_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "Comment", "// Additional offset to give the wheels for this axle.\n" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Additional offset to give the wheels for this axle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_AdditionalOffset = { "AdditionalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosWheelSetup, AdditionalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_AdditionalOffset_MetaData), Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_AdditionalOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_WheelClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewProp_AdditionalOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"ChaosWheelSetup",
		Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::PropPointers),
		sizeof(FChaosWheelSetup),
		alignof(FChaosWheelSetup),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosWheelSetup()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosWheelSetup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosWheelSetup.InnerSingleton, Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosWheelSetup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosMechanicalAnimSetup;
class UScriptStruct* FChaosMechanicalAnimSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosMechanicalAnimSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosMechanicalAnimSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("ChaosMechanicalAnimSetup"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosMechanicalAnimSetup.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FChaosMechanicalAnimSetup>()
{
	return FChaosMechanicalAnimSetup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriveShaftBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DriveShaftBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosMechanicalAnimSetup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::NewProp_DriveShaftBoneName_MetaData[] = {
		{ "Category", "Mechanical Animations" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::NewProp_DriveShaftBoneName = { "DriveShaftBoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosMechanicalAnimSetup, DriveShaftBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::NewProp_DriveShaftBoneName_MetaData), Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::NewProp_DriveShaftBoneName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::NewProp_DriveShaftBoneName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		nullptr,
		&NewStructOps,
		"ChaosMechanicalAnimSetup",
		Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::PropPointers),
		sizeof(FChaosMechanicalAnimSetup),
		alignof(FChaosMechanicalAnimSetup),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosMechanicalAnimSetup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosMechanicalAnimSetup.InnerSingleton, Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosMechanicalAnimSetup.InnerSingleton;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetSuspensionParams)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Preload);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRaise);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDrop);
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSuspensionParams(Z_Param_Rate,Z_Param_Damping,Z_Param_Preload,Z_Param_MaxRaise,Z_Param_MaxDrop,Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetBrakeTorque)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BrakeTorque);
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrakeTorque(Z_Param_BrakeTorque,Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetDriveTorque)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DriveTorque);
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDriveTorque(Z_Param_DriveTorque,Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetTorqueCombineMethod)
	{
		P_GET_ENUM(ETorqueCombineMethod,Z_Param_InCombineMethod);
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTorqueCombineMethod(ETorqueCombineMethod(Z_Param_InCombineMethod),Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetWheelMaxSteerAngle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AngleDegrees);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWheelMaxSteerAngle(Z_Param_WheelIndex,Z_Param_AngleDegrees);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetWheelHandbrakeTorque)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Torque);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWheelHandbrakeTorque(Z_Param_WheelIndex,Z_Param_Torque);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetWheelMaxBrakeTorque)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Torque);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWheelMaxBrakeTorque(Z_Param_WheelIndex,Z_Param_Torque);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetWheelSlipGraphMultiplier)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWheelSlipGraphMultiplier(Z_Param_WheelIndex,Z_Param_Multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetWheelFrictionMultiplier)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Friction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWheelFrictionMultiplier(Z_Param_WheelIndex,Z_Param_Friction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetWheelRadius)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWheelRadius(Z_Param_WheelIndex,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetAffectedByEngine)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAffectedByEngine(Z_Param_WheelIndex,Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetAffectedBySteering)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAffectedBySteering(Z_Param_WheelIndex,Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetAffectedByHandbrake)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAffectedByHandbrake(Z_Param_WheelIndex,Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetAffectedByBrake)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAffectedByBrake(Z_Param_WheelIndex,Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetABSEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetABSEnabled(Z_Param_WheelIndex,Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetTractionControlEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTractionControlEnabled(Z_Param_WheelIndex,Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetDifferentialFrontRearSplit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrontRearSlpit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDifferentialFrontRearSplit(Z_Param_FrontRearSlpit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetDownforceCoefficient)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DownforceCoeff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDownforceCoefficient(Z_Param_DownforceCoeff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetDragCoefficient)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DragCoeff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDragCoefficient(Z_Param_DragCoeff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetMaxEngineTorque)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Torque);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxEngineTorque(Z_Param_Torque);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetSnapshot)
	{
		P_GET_STRUCT_REF(FWheeledSnaphotData,Z_Param_Out_SnapshotIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnapshot(Z_Param_Out_SnapshotIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execGetSnapshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWheeledSnaphotData*)Z_Param__Result=P_THIS->GetSnapshot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execSetWheelClass)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_OBJECT(UClass,Z_Param_InWheelClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWheelClass(Z_Param_WheelIndex,Z_Param_InWheelClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execEnableWheelFriction)
	{
		P_GET_UBOOL(Z_Param_InState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableWheelFriction(Z_Param_InState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execEnableSuspension)
	{
		P_GET_UBOOL(Z_Param_InState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableSuspension(Z_Param_InState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execEnableMechanicalSim)
	{
		P_GET_UBOOL(Z_Param_InState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableMechanicalSim(Z_Param_InState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execGetWheelState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWheelStatus*)Z_Param__Result=P_THIS->GetWheelState(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execMakeWheelSnapshot)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SuspensionOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WheelRotationAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SteeringAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WheelRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WheelAngularVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWheelSnapshot*)Z_Param__Result=UChaosWheeledVehicleMovementComponent::MakeWheelSnapshot(Z_Param_SuspensionOffset,Z_Param_WheelRotationAngle,Z_Param_SteeringAngle,Z_Param_WheelRadius,Z_Param_WheelAngularVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execBreakWheelSnapshot)
	{
		P_GET_STRUCT_REF(FWheelSnapshot,Z_Param_Out_Snapshot);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SuspensionOffset);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_WheelRotationAngle);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SteeringAngle);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_WheelRadius);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_WheelAngularVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		UChaosWheeledVehicleMovementComponent::BreakWheelSnapshot(Z_Param_Out_Snapshot,Z_Param_Out_SuspensionOffset,Z_Param_Out_WheelRotationAngle,Z_Param_Out_SteeringAngle,Z_Param_Out_WheelRadius,Z_Param_Out_WheelAngularVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execMakeWheeledSnapshot)
	{
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVector,Z_Param_LinearVelocity);
		P_GET_STRUCT(FVector,Z_Param_AngularVelocity);
		P_GET_PROPERTY(FIntProperty,Z_Param_SelectedGear);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EngineRPM);
		P_GET_TARRAY_REF(FWheelSnapshot,Z_Param_Out_WheelSnapshots);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWheeledSnaphotData*)Z_Param__Result=UChaosWheeledVehicleMovementComponent::MakeWheeledSnapshot(Z_Param_Transform,Z_Param_LinearVelocity,Z_Param_AngularVelocity,Z_Param_SelectedGear,Z_Param_EngineRPM,Z_Param_Out_WheelSnapshots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execBreakWheeledSnapshot)
	{
		P_GET_STRUCT_REF(FWheeledSnaphotData,Z_Param_Out_Snapshot);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SelectedGear);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_EngineRPM);
		P_GET_TARRAY_REF(FWheelSnapshot,Z_Param_Out_WheelSnapshots);
		P_FINISH;
		P_NATIVE_BEGIN;
		UChaosWheeledVehicleMovementComponent::BreakWheeledSnapshot(Z_Param_Out_Snapshot,Z_Param_Out_Transform,Z_Param_Out_LinearVelocity,Z_Param_Out_AngularVelocity,Z_Param_Out_SelectedGear,Z_Param_Out_EngineRPM,Z_Param_Out_WheelSnapshots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execMakeWheelStatus)
	{
		P_GET_UBOOL(Z_Param_bInContact);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ContactPoint);
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_PhysMaterial);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedSuspensionLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpringForce);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SlipAngle);
		P_GET_UBOOL(Z_Param_bIsSlipping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SlipMagnitude);
		P_GET_UBOOL(Z_Param_bIsSkidding);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SkidMagnitude);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SkidNormal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DriveTorque);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BrakeTorque);
		P_GET_UBOOL(Z_Param_bABSActivated);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWheelStatus*)Z_Param__Result=UChaosWheeledVehicleMovementComponent::MakeWheelStatus(Z_Param_bInContact,Z_Param_Out_ContactPoint,Z_Param_PhysMaterial,Z_Param_NormalizedSuspensionLength,Z_Param_SpringForce,Z_Param_SlipAngle,Z_Param_bIsSlipping,Z_Param_SlipMagnitude,Z_Param_bIsSkidding,Z_Param_SkidMagnitude,Z_Param_Out_SkidNormal,Z_Param_DriveTorque,Z_Param_BrakeTorque,Z_Param_bABSActivated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execBreakWheelStatus)
	{
		P_GET_STRUCT_REF(FWheelStatus,Z_Param_Out_Status);
		P_GET_UBOOL_REF(Z_Param_Out_bInContact);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ContactPoint);
		P_GET_OBJECT_REF(UPhysicalMaterial,Z_Param_Out_PhysMaterial);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_NormalizedSuspensionLength);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SpringForce);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SlipAngle);
		P_GET_UBOOL_REF(Z_Param_Out_bIsSlipping);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SlipMagnitude);
		P_GET_UBOOL_REF(Z_Param_Out_bIsSkidding);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SkidMagnitude);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SkidNormal);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DriveTorque);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_BrakeTorque);
		P_GET_UBOOL_REF(Z_Param_Out_bABSActivated);
		P_FINISH;
		P_NATIVE_BEGIN;
		UChaosWheeledVehicleMovementComponent::BreakWheelStatus(Z_Param_Out_Status,Z_Param_Out_bInContact,Z_Param_Out_ContactPoint,Z_Param_Out_PhysMaterial,Z_Param_Out_NormalizedSuspensionLength,Z_Param_Out_SpringForce,Z_Param_Out_SlipAngle,Z_Param_Out_bIsSlipping,Z_Param_Out_SlipMagnitude,Z_Param_Out_bIsSkidding,Z_Param_Out_SkidMagnitude,Z_Param_Out_SkidNormal,Z_Param_Out_DriveTorque,Z_Param_Out_BrakeTorque,Z_Param_Out_bABSActivated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execGetNumWheels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumWheels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execGetEngineMaxRotationSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEngineMaxRotationSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosWheeledVehicleMovementComponent::execGetEngineRotationSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEngineRotationSpeed();
		P_NATIVE_END;
	}
	void UChaosWheeledVehicleMovementComponent::StaticRegisterNativesUChaosWheeledVehicleMovementComponent()
	{
		UClass* Class = UChaosWheeledVehicleMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakWheeledSnapshot", &UChaosWheeledVehicleMovementComponent::execBreakWheeledSnapshot },
			{ "BreakWheelSnapshot", &UChaosWheeledVehicleMovementComponent::execBreakWheelSnapshot },
			{ "BreakWheelStatus", &UChaosWheeledVehicleMovementComponent::execBreakWheelStatus },
			{ "EnableMechanicalSim", &UChaosWheeledVehicleMovementComponent::execEnableMechanicalSim },
			{ "EnableSuspension", &UChaosWheeledVehicleMovementComponent::execEnableSuspension },
			{ "EnableWheelFriction", &UChaosWheeledVehicleMovementComponent::execEnableWheelFriction },
			{ "GetEngineMaxRotationSpeed", &UChaosWheeledVehicleMovementComponent::execGetEngineMaxRotationSpeed },
			{ "GetEngineRotationSpeed", &UChaosWheeledVehicleMovementComponent::execGetEngineRotationSpeed },
			{ "GetNumWheels", &UChaosWheeledVehicleMovementComponent::execGetNumWheels },
			{ "GetSnapshot", &UChaosWheeledVehicleMovementComponent::execGetSnapshot },
			{ "GetWheelState", &UChaosWheeledVehicleMovementComponent::execGetWheelState },
			{ "MakeWheeledSnapshot", &UChaosWheeledVehicleMovementComponent::execMakeWheeledSnapshot },
			{ "MakeWheelSnapshot", &UChaosWheeledVehicleMovementComponent::execMakeWheelSnapshot },
			{ "MakeWheelStatus", &UChaosWheeledVehicleMovementComponent::execMakeWheelStatus },
			{ "SetABSEnabled", &UChaosWheeledVehicleMovementComponent::execSetABSEnabled },
			{ "SetAffectedByBrake", &UChaosWheeledVehicleMovementComponent::execSetAffectedByBrake },
			{ "SetAffectedByEngine", &UChaosWheeledVehicleMovementComponent::execSetAffectedByEngine },
			{ "SetAffectedByHandbrake", &UChaosWheeledVehicleMovementComponent::execSetAffectedByHandbrake },
			{ "SetAffectedBySteering", &UChaosWheeledVehicleMovementComponent::execSetAffectedBySteering },
			{ "SetBrakeTorque", &UChaosWheeledVehicleMovementComponent::execSetBrakeTorque },
			{ "SetDifferentialFrontRearSplit", &UChaosWheeledVehicleMovementComponent::execSetDifferentialFrontRearSplit },
			{ "SetDownforceCoefficient", &UChaosWheeledVehicleMovementComponent::execSetDownforceCoefficient },
			{ "SetDragCoefficient", &UChaosWheeledVehicleMovementComponent::execSetDragCoefficient },
			{ "SetDriveTorque", &UChaosWheeledVehicleMovementComponent::execSetDriveTorque },
			{ "SetMaxEngineTorque", &UChaosWheeledVehicleMovementComponent::execSetMaxEngineTorque },
			{ "SetSnapshot", &UChaosWheeledVehicleMovementComponent::execSetSnapshot },
			{ "SetSuspensionParams", &UChaosWheeledVehicleMovementComponent::execSetSuspensionParams },
			{ "SetTorqueCombineMethod", &UChaosWheeledVehicleMovementComponent::execSetTorqueCombineMethod },
			{ "SetTractionControlEnabled", &UChaosWheeledVehicleMovementComponent::execSetTractionControlEnabled },
			{ "SetWheelClass", &UChaosWheeledVehicleMovementComponent::execSetWheelClass },
			{ "SetWheelFrictionMultiplier", &UChaosWheeledVehicleMovementComponent::execSetWheelFrictionMultiplier },
			{ "SetWheelHandbrakeTorque", &UChaosWheeledVehicleMovementComponent::execSetWheelHandbrakeTorque },
			{ "SetWheelMaxBrakeTorque", &UChaosWheeledVehicleMovementComponent::execSetWheelMaxBrakeTorque },
			{ "SetWheelMaxSteerAngle", &UChaosWheeledVehicleMovementComponent::execSetWheelMaxSteerAngle },
			{ "SetWheelRadius", &UChaosWheeledVehicleMovementComponent::execSetWheelRadius },
			{ "SetWheelSlipGraphMultiplier", &UChaosWheeledVehicleMovementComponent::execSetWheelSlipGraphMultiplier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventBreakWheeledSnapshot_Parms
		{
			FWheeledSnaphotData Snapshot;
			FTransform Transform;
			FVector LinearVelocity;
			FVector AngularVelocity;
			int32 SelectedGear;
			float EngineRPM;
			TArray<FWheelSnapshot> WheelSnapshots;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Snapshot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedGear;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineRPM;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WheelSnapshots_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelSnapshots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_Snapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheeledSnapshot_Parms, Snapshot), Z_Construct_UScriptStruct_FWheeledSnaphotData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_Snapshot_MetaData), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_Snapshot_MetaData) }; // 2084735378
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheeledSnapshot_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheeledSnapshot_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheeledSnapshot_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_SelectedGear = { "SelectedGear", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheeledSnapshot_Parms, SelectedGear), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_EngineRPM = { "EngineRPM", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheeledSnapshot_Parms, EngineRPM), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_WheelSnapshots_Inner = { "WheelSnapshots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWheelSnapshot, METADATA_PARAMS(0, nullptr) }; // 730975751
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_WheelSnapshots = { "WheelSnapshots", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheeledSnapshot_Parms, WheelSnapshots), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 730975751
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_Snapshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_SelectedGear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_EngineRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_WheelSnapshots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::NewProp_WheelSnapshots,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicles" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "BreakWheeledSnapshot", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::ChaosWheeledVehicleMovementComponent_eventBreakWheeledSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::ChaosWheeledVehicleMovementComponent_eventBreakWheeledSnapshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventBreakWheelSnapshot_Parms
		{
			FWheelSnapshot Snapshot;
			float SuspensionOffset;
			float WheelRotationAngle;
			float SteeringAngle;
			float WheelRadius;
			float WheelAngularVelocity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Snapshot;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspensionOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRotationAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelAngularVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_Snapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelSnapshot_Parms, Snapshot), Z_Construct_UScriptStruct_FWheelSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_Snapshot_MetaData), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_Snapshot_MetaData) }; // 730975751
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_SuspensionOffset = { "SuspensionOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelSnapshot_Parms, SuspensionOffset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_WheelRotationAngle = { "WheelRotationAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelSnapshot_Parms, WheelRotationAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_SteeringAngle = { "SteeringAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelSnapshot_Parms, SteeringAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_WheelRadius = { "WheelRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelSnapshot_Parms, WheelRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_WheelAngularVelocity = { "WheelAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelSnapshot_Parms, WheelAngularVelocity), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_Snapshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_SuspensionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_WheelRotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_SteeringAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_WheelRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::NewProp_WheelAngularVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicles" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "BreakWheelSnapshot", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::ChaosWheeledVehicleMovementComponent_eventBreakWheelSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::ChaosWheeledVehicleMovementComponent_eventBreakWheelSnapshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms
		{
			FWheelStatus Status;
			bool bInContact;
			FVector ContactPoint;
			UPhysicalMaterial* PhysMaterial;
			float NormalizedSuspensionLength;
			float SpringForce;
			float SlipAngle;
			bool bIsSlipping;
			float SlipMagnitude;
			bool bIsSkidding;
			float SkidMagnitude;
			FVector SkidNormal;
			float DriveTorque;
			float BrakeTorque;
			bool bABSActivated;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
		static void NewProp_bInContact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInContact;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContactPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedSuspensionLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringForce;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlipAngle;
		static void NewProp_bIsSlipping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlipping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlipMagnitude;
		static void NewProp_bIsSkidding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSkidding;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkidMagnitude;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkidNormal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DriveTorque;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakeTorque;
		static void NewProp_bABSActivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bABSActivated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_Status_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms, Status), Z_Construct_UScriptStruct_FWheelStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_Status_MetaData), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_Status_MetaData) }; // 958082583
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bInContact_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms*)Obj)->bInContact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bInContact = { "bInContact", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bInContact_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_ContactPoint = { "ContactPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms, ContactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_NormalizedSuspensionLength = { "NormalizedSuspensionLength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms, NormalizedSuspensionLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_SpringForce = { "SpringForce", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms, SpringForce), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_SlipAngle = { "SlipAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms, SlipAngle), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bIsSlipping_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms*)Obj)->bIsSlipping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bIsSlipping = { "bIsSlipping", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bIsSlipping_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_SlipMagnitude = { "SlipMagnitude", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms, SlipMagnitude), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bIsSkidding_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms*)Obj)->bIsSkidding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bIsSkidding = { "bIsSkidding", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bIsSkidding_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_SkidMagnitude = { "SkidMagnitude", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms, SkidMagnitude), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_SkidNormal = { "SkidNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms, SkidNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_DriveTorque = { "DriveTorque", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms, DriveTorque), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_BrakeTorque = { "BrakeTorque", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms, BrakeTorque), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bABSActivated_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms*)Obj)->bABSActivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bABSActivated = { "bABSActivated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bABSActivated_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bInContact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_ContactPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_PhysMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_NormalizedSuspensionLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_SpringForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_SlipAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bIsSlipping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_SlipMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bIsSkidding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_SkidMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_SkidNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_DriveTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_BrakeTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::NewProp_bABSActivated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicles" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "BreakWheelStatus", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::ChaosWheeledVehicleMovementComponent_eventBreakWheelStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventEnableMechanicalSim_Parms
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
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::NewProp_InState_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventEnableMechanicalSim_Parms*)Obj)->InState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventEnableMechanicalSim_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::NewProp_InState_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::NewProp_InState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "Comment", "/** Enable or completely bypass the ProcessMechanicalSimulation call */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Enable or completely bypass the ProcessMechanicalSimulation call" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "EnableMechanicalSim", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::ChaosWheeledVehicleMovementComponent_eventEnableMechanicalSim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::ChaosWheeledVehicleMovementComponent_eventEnableMechanicalSim_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventEnableSuspension_Parms
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
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::NewProp_InState_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventEnableSuspension_Parms*)Obj)->InState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventEnableSuspension_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::NewProp_InState_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::NewProp_InState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "Comment", "/** Enable or completely bypass the ApplySuspensionForces call */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Enable or completely bypass the ApplySuspensionForces call" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "EnableSuspension", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::ChaosWheeledVehicleMovementComponent_eventEnableSuspension_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::ChaosWheeledVehicleMovementComponent_eventEnableSuspension_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventEnableWheelFriction_Parms
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
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::NewProp_InState_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventEnableWheelFriction_Parms*)Obj)->InState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventEnableWheelFriction_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::NewProp_InState_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::NewProp_InState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "Comment", "/** Enable or completely bypass the ApplyWheelFrictionForces call */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Enable or completely bypass the ApplyWheelFrictionForces call" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "EnableWheelFriction", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::ChaosWheeledVehicleMovementComponent_eventEnableWheelFriction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::ChaosWheeledVehicleMovementComponent_eventEnableWheelFriction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventGetEngineMaxRotationSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventGetEngineMaxRotationSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "Comment", "/** Get current engine's max rotation speed */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Get current engine's max rotation speed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "GetEngineMaxRotationSpeed", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::ChaosWheeledVehicleMovementComponent_eventGetEngineMaxRotationSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::ChaosWheeledVehicleMovementComponent_eventGetEngineMaxRotationSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventGetEngineRotationSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventGetEngineRotationSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "Comment", "/** Get current engine's rotation speed */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Get current engine's rotation speed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "GetEngineRotationSpeed", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::ChaosWheeledVehicleMovementComponent_eventGetEngineRotationSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::ChaosWheeledVehicleMovementComponent_eventGetEngineRotationSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventGetNumWheels_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventGetNumWheels_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "GetNumWheels", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels_Statics::ChaosWheeledVehicleMovementComponent_eventGetNumWheels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels_Statics::ChaosWheeledVehicleMovementComponent_eventGetNumWheels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventGetSnapshot_Parms
		{
			FWheeledSnaphotData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventGetSnapshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FWheeledSnaphotData, METADATA_PARAMS(0, nullptr) }; // 2084735378
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "Comment", "/** Grab a snapshot of the vehicle instance dynamic state */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Grab a snapshot of the vehicle instance dynamic state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "GetSnapshot", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot_Statics::ChaosWheeledVehicleMovementComponent_eventGetSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot_Statics::ChaosWheeledVehicleMovementComponent_eventGetSnapshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventGetWheelState_Parms
		{
			int32 WheelIndex;
			FWheelStatus ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventGetWheelState_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventGetWheelState_Parms, ReturnValue), Z_Construct_UScriptStruct_FWheelStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::NewProp_ReturnValue_MetaData) }; // 958082583
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "Comment", "/** Get a wheels current simulation state */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Get a wheels current simulation state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "GetWheelState", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::ChaosWheeledVehicleMovementComponent_eventGetWheelState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::ChaosWheeledVehicleMovementComponent_eventGetWheelState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventMakeWheeledSnapshot_Parms
		{
			FTransform Transform;
			FVector LinearVelocity;
			FVector AngularVelocity;
			int32 SelectedGear;
			float EngineRPM;
			TArray<FWheelSnapshot> WheelSnapshots;
			FWheeledSnaphotData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedGear;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineRPM;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WheelSnapshots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelSnapshots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelSnapshots;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheeledSnapshot_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheeledSnapshot_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheeledSnapshot_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_SelectedGear = { "SelectedGear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheeledSnapshot_Parms, SelectedGear), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_EngineRPM = { "EngineRPM", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheeledSnapshot_Parms, EngineRPM), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_WheelSnapshots_Inner = { "WheelSnapshots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWheelSnapshot, METADATA_PARAMS(0, nullptr) }; // 730975751
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_WheelSnapshots_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_WheelSnapshots = { "WheelSnapshots", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheeledSnapshot_Parms, WheelSnapshots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_WheelSnapshots_MetaData), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_WheelSnapshots_MetaData) }; // 730975751
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheeledSnapshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FWheeledSnaphotData, METADATA_PARAMS(0, nullptr) }; // 2084735378
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_SelectedGear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_EngineRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_WheelSnapshots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_WheelSnapshots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicles" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "MakeWheeledSnapshot", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::ChaosWheeledVehicleMovementComponent_eventMakeWheeledSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::ChaosWheeledVehicleMovementComponent_eventMakeWheeledSnapshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventMakeWheelSnapshot_Parms
		{
			float SuspensionOffset;
			float WheelRotationAngle;
			float SteeringAngle;
			float WheelRadius;
			float WheelAngularVelocity;
			FWheelSnapshot ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspensionOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRotationAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelAngularVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::NewProp_SuspensionOffset = { "SuspensionOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelSnapshot_Parms, SuspensionOffset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::NewProp_WheelRotationAngle = { "WheelRotationAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelSnapshot_Parms, WheelRotationAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::NewProp_SteeringAngle = { "SteeringAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelSnapshot_Parms, SteeringAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::NewProp_WheelRadius = { "WheelRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelSnapshot_Parms, WheelRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::NewProp_WheelAngularVelocity = { "WheelAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelSnapshot_Parms, WheelAngularVelocity), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelSnapshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FWheelSnapshot, METADATA_PARAMS(0, nullptr) }; // 730975751
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::NewProp_SuspensionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::NewProp_WheelRotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::NewProp_SteeringAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::NewProp_WheelRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::NewProp_WheelAngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicles" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "MakeWheelSnapshot", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::ChaosWheeledVehicleMovementComponent_eventMakeWheelSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::ChaosWheeledVehicleMovementComponent_eventMakeWheelSnapshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms
		{
			bool bInContact;
			FVector ContactPoint;
			UPhysicalMaterial* PhysMaterial;
			float NormalizedSuspensionLength;
			float SpringForce;
			float SlipAngle;
			bool bIsSlipping;
			float SlipMagnitude;
			bool bIsSkidding;
			float SkidMagnitude;
			FVector SkidNormal;
			float DriveTorque;
			float BrakeTorque;
			bool bABSActivated;
			FWheelStatus ReturnValue;
		};
		static void NewProp_bInContact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInContact;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContactPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedSuspensionLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringForce;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlipAngle;
		static void NewProp_bIsSlipping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlipping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlipMagnitude;
		static void NewProp_bIsSkidding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSkidding;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkidMagnitude;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkidNormal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DriveTorque;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakeTorque;
		static void NewProp_bABSActivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bABSActivated;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bInContact_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms*)Obj)->bInContact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bInContact = { "bInContact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bInContact_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_ContactPoint = { "ContactPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms, ContactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_NormalizedSuspensionLength = { "NormalizedSuspensionLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms, NormalizedSuspensionLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_SpringForce = { "SpringForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms, SpringForce), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_SlipAngle = { "SlipAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms, SlipAngle), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bIsSlipping_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms*)Obj)->bIsSlipping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bIsSlipping = { "bIsSlipping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bIsSlipping_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_SlipMagnitude = { "SlipMagnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms, SlipMagnitude), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bIsSkidding_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms*)Obj)->bIsSkidding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bIsSkidding = { "bIsSkidding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bIsSkidding_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_SkidMagnitude = { "SkidMagnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms, SkidMagnitude), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_SkidNormal = { "SkidNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms, SkidNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_DriveTorque = { "DriveTorque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms, DriveTorque), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_BrakeTorque = { "BrakeTorque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms, BrakeTorque), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bABSActivated_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms*)Obj)->bABSActivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bABSActivated = { "bABSActivated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bABSActivated_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms, ReturnValue), Z_Construct_UScriptStruct_FWheelStatus, METADATA_PARAMS(0, nullptr) }; // 958082583
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bInContact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_ContactPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_PhysMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_NormalizedSuspensionLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_SpringForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_SlipAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bIsSlipping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_SlipMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bIsSkidding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_SkidMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_SkidNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_DriveTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_BrakeTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_bABSActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicles" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "MakeWheelStatus", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::ChaosWheeledVehicleMovementComponent_eventMakeWheelStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetABSEnabled_Parms
		{
			int32 WheelIndex;
			bool Enabled;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetABSEnabled_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventSetABSEnabled_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventSetABSEnabled_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetABSEnabled", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::ChaosWheeledVehicleMovementComponent_eventSetABSEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::ChaosWheeledVehicleMovementComponent_eventSetABSEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetAffectedByBrake_Parms
		{
			int32 WheelIndex;
			bool Enabled;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetAffectedByBrake_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventSetAffectedByBrake_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventSetAffectedByBrake_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetAffectedByBrake", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::ChaosWheeledVehicleMovementComponent_eventSetAffectedByBrake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::ChaosWheeledVehicleMovementComponent_eventSetAffectedByBrake_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetAffectedByEngine_Parms
		{
			int32 WheelIndex;
			bool Enabled;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetAffectedByEngine_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventSetAffectedByEngine_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventSetAffectedByEngine_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetAffectedByEngine", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::ChaosWheeledVehicleMovementComponent_eventSetAffectedByEngine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::ChaosWheeledVehicleMovementComponent_eventSetAffectedByEngine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetAffectedByHandbrake_Parms
		{
			int32 WheelIndex;
			bool Enabled;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetAffectedByHandbrake_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventSetAffectedByHandbrake_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventSetAffectedByHandbrake_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetAffectedByHandbrake", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::ChaosWheeledVehicleMovementComponent_eventSetAffectedByHandbrake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::ChaosWheeledVehicleMovementComponent_eventSetAffectedByHandbrake_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetAffectedBySteering_Parms
		{
			int32 WheelIndex;
			bool Enabled;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetAffectedBySteering_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventSetAffectedBySteering_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventSetAffectedBySteering_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetAffectedBySteering", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::ChaosWheeledVehicleMovementComponent_eventSetAffectedBySteering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::ChaosWheeledVehicleMovementComponent_eventSetAffectedBySteering_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetBrakeTorque_Parms
		{
			float BrakeTorque;
			int32 WheelIndex;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakeTorque;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::NewProp_BrakeTorque = { "BrakeTorque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetBrakeTorque_Parms, BrakeTorque), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetBrakeTorque_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::NewProp_BrakeTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::NewProp_WheelIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetBrakeTorque", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::ChaosWheeledVehicleMovementComponent_eventSetBrakeTorque_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::ChaosWheeledVehicleMovementComponent_eventSetBrakeTorque_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetDifferentialFrontRearSplit_Parms
		{
			float FrontRearSlpit;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontRearSlpit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Statics::NewProp_FrontRearSlpit = { "FrontRearSlpit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetDifferentialFrontRearSplit_Parms, FrontRearSlpit), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Statics::NewProp_FrontRearSlpit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetDifferentialFrontRearSplit", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Statics::ChaosWheeledVehicleMovementComponent_eventSetDifferentialFrontRearSplit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Statics::ChaosWheeledVehicleMovementComponent_eventSetDifferentialFrontRearSplit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetDownforceCoefficient_Parms
		{
			float DownforceCoeff;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DownforceCoeff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Statics::NewProp_DownforceCoeff = { "DownforceCoeff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetDownforceCoefficient_Parms, DownforceCoeff), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Statics::NewProp_DownforceCoeff,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetDownforceCoefficient", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Statics::ChaosWheeledVehicleMovementComponent_eventSetDownforceCoefficient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Statics::ChaosWheeledVehicleMovementComponent_eventSetDownforceCoefficient_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetDragCoefficient_Parms
		{
			float DragCoeff;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DragCoeff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Statics::NewProp_DragCoeff = { "DragCoeff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetDragCoefficient_Parms, DragCoeff), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Statics::NewProp_DragCoeff,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetDragCoefficient", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Statics::ChaosWheeledVehicleMovementComponent_eventSetDragCoefficient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Statics::ChaosWheeledVehicleMovementComponent_eventSetDragCoefficient_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetDriveTorque_Parms
		{
			float DriveTorque;
			int32 WheelIndex;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DriveTorque;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::NewProp_DriveTorque = { "DriveTorque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetDriveTorque_Parms, DriveTorque), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetDriveTorque_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::NewProp_DriveTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::NewProp_WheelIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetDriveTorque", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::ChaosWheeledVehicleMovementComponent_eventSetDriveTorque_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::ChaosWheeledVehicleMovementComponent_eventSetDriveTorque_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetMaxEngineTorque_Parms
		{
			float Torque;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Torque;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Statics::NewProp_Torque = { "Torque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetMaxEngineTorque_Parms, Torque), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Statics::NewProp_Torque,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// change handling via blueprint at runtime\n" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "change handling via blueprint at runtime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetMaxEngineTorque", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Statics::ChaosWheeledVehicleMovementComponent_eventSetMaxEngineTorque_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Statics::ChaosWheeledVehicleMovementComponent_eventSetMaxEngineTorque_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetSnapshot_Parms
		{
			FWheeledSnaphotData SnapshotIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SnapshotIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::NewProp_SnapshotIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::NewProp_SnapshotIn = { "SnapshotIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetSnapshot_Parms, SnapshotIn), Z_Construct_UScriptStruct_FWheeledSnaphotData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::NewProp_SnapshotIn_MetaData), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::NewProp_SnapshotIn_MetaData) }; // 2084735378
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::NewProp_SnapshotIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "Comment", "/** Set snapshot of vehicle instance dynamic state */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Set snapshot of vehicle instance dynamic state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetSnapshot", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::ChaosWheeledVehicleMovementComponent_eventSetSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::ChaosWheeledVehicleMovementComponent_eventSetSnapshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetSuspensionParams_Parms
		{
			float Rate;
			float Damping;
			float Preload;
			float MaxRaise;
			float MaxDrop;
			int32 WheelIndex;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Preload;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRaise;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDrop;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetSuspensionParams_Parms, Rate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetSuspensionParams_Parms, Damping), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::NewProp_Preload = { "Preload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetSuspensionParams_Parms, Preload), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::NewProp_MaxRaise = { "MaxRaise", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetSuspensionParams_Parms, MaxRaise), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::NewProp_MaxDrop = { "MaxDrop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetSuspensionParams_Parms, MaxDrop), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetSuspensionParams_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::NewProp_Damping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::NewProp_Preload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::NewProp_MaxRaise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::NewProp_MaxDrop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::NewProp_WheelIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetSuspensionParams", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::ChaosWheeledVehicleMovementComponent_eventSetSuspensionParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::ChaosWheeledVehicleMovementComponent_eventSetSuspensionParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetTorqueCombineMethod_Parms
		{
			ETorqueCombineMethod InCombineMethod;
			int32 WheelIndex;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCombineMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InCombineMethod;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::NewProp_InCombineMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::NewProp_InCombineMethod = { "InCombineMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetTorqueCombineMethod_Parms, InCombineMethod), Z_Construct_UEnum_ChaosVehicles_ETorqueCombineMethod, METADATA_PARAMS(0, nullptr) }; // 2358336651
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetTorqueCombineMethod_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::NewProp_InCombineMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::NewProp_InCombineMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::NewProp_WheelIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetTorqueCombineMethod", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::ChaosWheeledVehicleMovementComponent_eventSetTorqueCombineMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::ChaosWheeledVehicleMovementComponent_eventSetTorqueCombineMethod_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetTractionControlEnabled_Parms
		{
			int32 WheelIndex;
			bool Enabled;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetTractionControlEnabled_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((ChaosWheeledVehicleMovementComponent_eventSetTractionControlEnabled_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosWheeledVehicleMovementComponent_eventSetTractionControlEnabled_Parms), &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetTractionControlEnabled", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::ChaosWheeledVehicleMovementComponent_eventSetTractionControlEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::ChaosWheeledVehicleMovementComponent_eventSetTractionControlEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetWheelClass_Parms
		{
			int32 WheelIndex;
			TSubclassOf<UChaosVehicleWheel>  InWheelClass;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InWheelClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetWheelClass_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::NewProp_InWheelClass = { "InWheelClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetWheelClass_Parms, InWheelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UChaosVehicleWheel_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::NewProp_InWheelClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetWheelClass", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::ChaosWheeledVehicleMovementComponent_eventSetWheelClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::ChaosWheeledVehicleMovementComponent_eventSetWheelClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetWheelFrictionMultiplier_Parms
		{
			int32 WheelIndex;
			float Friction;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetWheelFrictionMultiplier_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetWheelFrictionMultiplier_Parms, Friction), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::NewProp_Friction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetWheelFrictionMultiplier", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::ChaosWheeledVehicleMovementComponent_eventSetWheelFrictionMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::ChaosWheeledVehicleMovementComponent_eventSetWheelFrictionMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetWheelHandbrakeTorque_Parms
		{
			int32 WheelIndex;
			float Torque;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Torque;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetWheelHandbrakeTorque_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::NewProp_Torque = { "Torque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetWheelHandbrakeTorque_Parms, Torque), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::NewProp_Torque,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetWheelHandbrakeTorque", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::ChaosWheeledVehicleMovementComponent_eventSetWheelHandbrakeTorque_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::ChaosWheeledVehicleMovementComponent_eventSetWheelHandbrakeTorque_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetWheelMaxBrakeTorque_Parms
		{
			int32 WheelIndex;
			float Torque;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Torque;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetWheelMaxBrakeTorque_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::NewProp_Torque = { "Torque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetWheelMaxBrakeTorque_Parms, Torque), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::NewProp_Torque,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetWheelMaxBrakeTorque", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::ChaosWheeledVehicleMovementComponent_eventSetWheelMaxBrakeTorque_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::ChaosWheeledVehicleMovementComponent_eventSetWheelMaxBrakeTorque_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetWheelMaxSteerAngle_Parms
		{
			int32 WheelIndex;
			float AngleDegrees;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleDegrees;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetWheelMaxSteerAngle_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::NewProp_AngleDegrees = { "AngleDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetWheelMaxSteerAngle_Parms, AngleDegrees), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::NewProp_AngleDegrees,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetWheelMaxSteerAngle", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::ChaosWheeledVehicleMovementComponent_eventSetWheelMaxSteerAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::ChaosWheeledVehicleMovementComponent_eventSetWheelMaxSteerAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetWheelRadius_Parms
		{
			int32 WheelIndex;
			float Radius;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetWheelRadius_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetWheelRadius_Parms, Radius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetWheelRadius", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::ChaosWheeledVehicleMovementComponent_eventSetWheelRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::ChaosWheeledVehicleMovementComponent_eventSetWheelRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics
	{
		struct ChaosWheeledVehicleMovementComponent_eventSetWheelSlipGraphMultiplier_Parms
		{
			int32 WheelIndex;
			float Multiplier;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetWheelSlipGraphMultiplier_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosWheeledVehicleMovementComponent_eventSetWheelSlipGraphMultiplier_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::NewProp_Multiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Components|ChaosWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, nullptr, "SetWheelSlipGraphMultiplier", nullptr, nullptr, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::ChaosWheeledVehicleMovementComponent_eventSetWheelSlipGraphMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::ChaosWheeledVehicleMovementComponent_eventSetWheelSlipGraphMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosWheeledVehicleMovementComponent);
	UClass* Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister()
	{
		return UChaosWheeledVehicleMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MechanicalAnimationSetup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MechanicalAnimationSetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuspensionEnabled_MetaData[];
#endif
		static void NewProp_bSuspensionEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuspensionEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWheelFrictionEnabled_MetaData[];
#endif
		static void NewProp_bWheelFrictionEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWheelFrictionEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLegacyWheelFrictionPosition_MetaData[];
#endif
		static void NewProp_bLegacyWheelFrictionPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLegacyWheelFrictionPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WheelSetups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelSetups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelSetups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelTraceCollisionResponses_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WheelTraceCollisionResponses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMechanicalSimEnabled_MetaData[];
#endif
		static void NewProp_bMechanicalSimEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMechanicalSimEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineSetup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineSetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DifferentialSetup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DifferentialSetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionSetup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransmissionSetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringSetup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteeringSetup;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Wheels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wheels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Wheels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaosVehicleMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot, "BreakWheeledSnapshot" }, // 1291150383
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot, "BreakWheelSnapshot" }, // 4056058621
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_BreakWheelStatus, "BreakWheelStatus" }, // 1824985103
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableMechanicalSim, "EnableMechanicalSim" }, // 2106542211
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableSuspension, "EnableSuspension" }, // 1626506391
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_EnableWheelFriction, "EnableWheelFriction" }, // 3213606974
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed, "GetEngineMaxRotationSpeed" }, // 1142597465
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed, "GetEngineRotationSpeed" }, // 4099340166
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetNumWheels, "GetNumWheels" }, // 3352440624
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetSnapshot, "GetSnapshot" }, // 3760176136
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_GetWheelState, "GetWheelState" }, // 493353044
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot, "MakeWheeledSnapshot" }, // 381936306
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot, "MakeWheelSnapshot" }, // 3317243618
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_MakeWheelStatus, "MakeWheelStatus" }, // 1964700877
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetABSEnabled, "SetABSEnabled" }, // 290312290
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByBrake, "SetAffectedByBrake" }, // 1793761203
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByEngine, "SetAffectedByEngine" }, // 1183822084
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake, "SetAffectedByHandbrake" }, // 1303194195
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetAffectedBySteering, "SetAffectedBySteering" }, // 1342744938
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetBrakeTorque, "SetBrakeTorque" }, // 3426302105
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit, "SetDifferentialFrontRearSplit" }, // 4095072418
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient, "SetDownforceCoefficient" }, // 2618776950
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDragCoefficient, "SetDragCoefficient" }, // 1578248579
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetDriveTorque, "SetDriveTorque" }, // 2914742107
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque, "SetMaxEngineTorque" }, // 784993939
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSnapshot, "SetSnapshot" }, // 3847827248
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetSuspensionParams, "SetSuspensionParams" }, // 2227476107
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod, "SetTorqueCombineMethod" }, // 2793560548
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled, "SetTractionControlEnabled" }, // 1100485709
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelClass, "SetWheelClass" }, // 3088809636
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier, "SetWheelFrictionMultiplier" }, // 2311272706
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque, "SetWheelHandbrakeTorque" }, // 1850180719
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque, "SetWheelMaxBrakeTorque" }, // 811560429
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle, "SetWheelMaxSteerAngle" }, // 1935701146
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelRadius, "SetWheelRadius" }, // 2603883634
		{ &Z_Construct_UFunction_UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier, "SetWheelSlipGraphMultiplier" }, // 1812954736
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n" },
		{ "HideCategories", "PlanarMovement Components|Movement|Planar Activation Components|Activation PlanarMovement Components|Movement|Planar Activation Components|Activation" },
		{ "IncludePath", "ChaosWheeledVehicleMovementComponent.h" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_MechanicalAnimationSetup_MetaData[] = {
		{ "Category", "MechanicalAnimation" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_MechanicalAnimationSetup = { "MechanicalAnimationSetup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosWheeledVehicleMovementComponent, MechanicalAnimationSetup), Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_MechanicalAnimationSetup_MetaData), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_MechanicalAnimationSetup_MetaData) }; // 2148583062
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bSuspensionEnabled_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bSuspensionEnabled_SetBit(void* Obj)
	{
		((UChaosWheeledVehicleMovementComponent*)Obj)->bSuspensionEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bSuspensionEnabled = { "bSuspensionEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UChaosWheeledVehicleMovementComponent), &Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bSuspensionEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bSuspensionEnabled_MetaData), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bSuspensionEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bWheelFrictionEnabled_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bWheelFrictionEnabled_SetBit(void* Obj)
	{
		((UChaosWheeledVehicleMovementComponent*)Obj)->bWheelFrictionEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bWheelFrictionEnabled = { "bWheelFrictionEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UChaosWheeledVehicleMovementComponent), &Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bWheelFrictionEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bWheelFrictionEnabled_MetaData), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bWheelFrictionEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bLegacyWheelFrictionPosition_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bLegacyWheelFrictionPosition_SetBit(void* Obj)
	{
		((UChaosWheeledVehicleMovementComponent*)Obj)->bLegacyWheelFrictionPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bLegacyWheelFrictionPosition = { "bLegacyWheelFrictionPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UChaosWheeledVehicleMovementComponent), &Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bLegacyWheelFrictionPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bLegacyWheelFrictionPosition_MetaData), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bLegacyWheelFrictionPosition_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_WheelSetups_Inner = { "WheelSetups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosWheelSetup, METADATA_PARAMS(0, nullptr) }; // 1217111098
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_WheelSetups_MetaData[] = {
		{ "Category", "WheelSetup" },
		{ "Comment", "/** Wheels to create */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Wheels to create" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_WheelSetups = { "WheelSetups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosWheeledVehicleMovementComponent, WheelSetups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_WheelSetups_MetaData), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_WheelSetups_MetaData) }; // 1217111098
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_WheelTraceCollisionResponses_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_WheelTraceCollisionResponses = { "WheelTraceCollisionResponses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosWheeledVehicleMovementComponent, WheelTraceCollisionResponses), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_WheelTraceCollisionResponses_MetaData), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_WheelTraceCollisionResponses_MetaData) }; // 2352989251
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bMechanicalSimEnabled_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bMechanicalSimEnabled_SetBit(void* Obj)
	{
		((UChaosWheeledVehicleMovementComponent*)Obj)->bMechanicalSimEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bMechanicalSimEnabled = { "bMechanicalSimEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UChaosWheeledVehicleMovementComponent), &Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bMechanicalSimEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bMechanicalSimEnabled_MetaData), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bMechanicalSimEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_EngineSetup_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "Comment", "/** Engine */" },
		{ "EditCondition", "bMechanicalSimEnabled" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Engine" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_EngineSetup = { "EngineSetup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosWheeledVehicleMovementComponent, EngineSetup), Z_Construct_UScriptStruct_FVehicleEngineConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_EngineSetup_MetaData), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_EngineSetup_MetaData) }; // 3558002050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_DifferentialSetup_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "Comment", "/** Differential */" },
		{ "EditCondition", "bMechanicalSimEnabled" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Differential" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_DifferentialSetup = { "DifferentialSetup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosWheeledVehicleMovementComponent, DifferentialSetup), Z_Construct_UScriptStruct_FVehicleDifferentialConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_DifferentialSetup_MetaData), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_DifferentialSetup_MetaData) }; // 1109480676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_TransmissionSetup_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "Comment", "/** Transmission data */" },
		{ "EditCondition", "bMechanicalSimEnabled" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Transmission data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_TransmissionSetup = { "TransmissionSetup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosWheeledVehicleMovementComponent, TransmissionSetup), Z_Construct_UScriptStruct_FVehicleTransmissionConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_TransmissionSetup_MetaData), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_TransmissionSetup_MetaData) }; // 3908650820
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_SteeringSetup_MetaData[] = {
		{ "Category", "SteeringSetup" },
		{ "Comment", "/** Transmission data */" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Transmission data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_SteeringSetup = { "SteeringSetup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosWheeledVehicleMovementComponent, SteeringSetup), Z_Construct_UScriptStruct_FVehicleSteeringConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_SteeringSetup_MetaData), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_SteeringSetup_MetaData) }; // 2301188182
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_Wheels_Inner = { "Wheels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChaosVehicleWheel_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_Wheels_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "Comment", "// Our instanced wheels\n" },
		{ "ModuleRelativePath", "Public/ChaosWheeledVehicleMovementComponent.h" },
		{ "ToolTip", "Our instanced wheels" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_Wheels = { "Wheels", nullptr, (EPropertyFlags)0x0014000000202014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosWheeledVehicleMovementComponent, Wheels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_Wheels_MetaData), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_Wheels_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_MechanicalAnimationSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bSuspensionEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bWheelFrictionEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bLegacyWheelFrictionPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_WheelSetups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_WheelSetups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_WheelTraceCollisionResponses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_bMechanicalSimEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_EngineSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_DifferentialSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_TransmissionSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_SteeringSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_Wheels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::NewProp_Wheels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosWheeledVehicleMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::ClassParams = {
		&UChaosWheeledVehicleMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UChaosWheeledVehicleMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UChaosWheeledVehicleMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosWheeledVehicleMovementComponent.OuterSingleton, Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosWheeledVehicleMovementComponent.OuterSingleton;
	}
	template<> CHAOSVEHICLES_API UClass* StaticClass<UChaosWheeledVehicleMovementComponent>()
	{
		return UChaosWheeledVehicleMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosWheeledVehicleMovementComponent);
	UChaosWheeledVehicleMovementComponent::~UChaosWheeledVehicleMovementComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosWheeledVehicleMovementComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_Statics::EnumInfo[] = {
		{ EVehicleDifferential_StaticEnum, TEXT("EVehicleDifferential"), &Z_Registration_Info_UEnum_EVehicleDifferential, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2204051849U) },
		{ ESteeringType_StaticEnum, TEXT("ESteeringType"), &Z_Registration_Info_UEnum_ESteeringType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2710885376U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_Statics::ScriptStructInfo[] = {
		{ FWheelStatus::StaticStruct, Z_Construct_UScriptStruct_FWheelStatus_Statics::NewStructOps, TEXT("WheelStatus"), &Z_Registration_Info_UScriptStruct_WheelStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWheelStatus), 958082583U) },
		{ FVehicleDifferentialConfig::StaticStruct, Z_Construct_UScriptStruct_FVehicleDifferentialConfig_Statics::NewStructOps, TEXT("VehicleDifferentialConfig"), &Z_Registration_Info_UScriptStruct_VehicleDifferentialConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleDifferentialConfig), 1109480676U) },
		{ FVehicleEngineConfig::StaticStruct, Z_Construct_UScriptStruct_FVehicleEngineConfig_Statics::NewStructOps, TEXT("VehicleEngineConfig"), &Z_Registration_Info_UScriptStruct_VehicleEngineConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleEngineConfig), 3558002050U) },
		{ FVehicleTransmissionConfig::StaticStruct, Z_Construct_UScriptStruct_FVehicleTransmissionConfig_Statics::NewStructOps, TEXT("VehicleTransmissionConfig"), &Z_Registration_Info_UScriptStruct_VehicleTransmissionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleTransmissionConfig), 3908650820U) },
		{ FVehicleSteeringConfig::StaticStruct, Z_Construct_UScriptStruct_FVehicleSteeringConfig_Statics::NewStructOps, TEXT("VehicleSteeringConfig"), &Z_Registration_Info_UScriptStruct_VehicleSteeringConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleSteeringConfig), 2301188182U) },
		{ FChaosWheelSetup::StaticStruct, Z_Construct_UScriptStruct_FChaosWheelSetup_Statics::NewStructOps, TEXT("ChaosWheelSetup"), &Z_Registration_Info_UScriptStruct_ChaosWheelSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosWheelSetup), 1217111098U) },
		{ FChaosMechanicalAnimSetup::StaticStruct, Z_Construct_UScriptStruct_FChaosMechanicalAnimSetup_Statics::NewStructOps, TEXT("ChaosMechanicalAnimSetup"), &Z_Registration_Info_UScriptStruct_ChaosMechanicalAnimSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosMechanicalAnimSetup), 2148583062U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosWheeledVehicleMovementComponent, UChaosWheeledVehicleMovementComponent::StaticClass, TEXT("UChaosWheeledVehicleMovementComponent"), &Z_Registration_Info_UClass_UChaosWheeledVehicleMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosWheeledVehicleMovementComponent), 451975750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_13582843(TEXT("/Script/ChaosVehicles"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosWheeledVehicleMovementComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
