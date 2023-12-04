// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_StageCoachWheelController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_StageCoachWheelController() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController();
	UPackage* Z_Construct_UPackage__Script_ChaosVehicles();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_StageCoachWheelController>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_StageCoachWheelController cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_StageCoachWheelController;
class UScriptStruct* FAnimNode_StageCoachWheelController::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_StageCoachWheelController.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_StageCoachWheelController.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("AnimNode_StageCoachWheelController"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_StageCoachWheelController.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FAnimNode_StageCoachWheelController>()
{
	return FAnimNode_StageCoachWheelController::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelSpokeCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelSpokeCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShutterSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShutterSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageCoachBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StageCoachBlend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n */" },
		{ "ModuleRelativePath", "Public/AnimNode_StageCoachWheelController.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_StageCoachWheelController>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_WheelSpokeCount_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// Number of spokes visible on wheel\n" },
		{ "ModuleRelativePath", "Public/AnimNode_StageCoachWheelController.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Number of spokes visible on wheel" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_WheelSpokeCount = { "WheelSpokeCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_StageCoachWheelController, WheelSpokeCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_WheelSpokeCount_MetaData), Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_WheelSpokeCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_MaxAngularVelocity_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// Wheel max rotation speed in degrees/second\n" },
		{ "ModuleRelativePath", "Public/AnimNode_StageCoachWheelController.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Wheel max rotation speed in degrees/second" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_MaxAngularVelocity = { "MaxAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_StageCoachWheelController, MaxAngularVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_MaxAngularVelocity_MetaData), Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_MaxAngularVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_ShutterSpeed_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// Camera shutter speed in frames/second\n" },
		{ "ModuleRelativePath", "Public/AnimNode_StageCoachWheelController.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Camera shutter speed in frames/second" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_ShutterSpeed = { "ShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_StageCoachWheelController, ShutterSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_ShutterSpeed_MetaData), Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_ShutterSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_StageCoachBlend_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// Blend effect degrees/second\n" },
		{ "ModuleRelativePath", "Public/AnimNode_StageCoachWheelController.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Blend effect degrees/second" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_StageCoachBlend = { "StageCoachBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_StageCoachWheelController, StageCoachBlend), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_StageCoachBlend_MetaData), Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_StageCoachBlend_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_WheelSpokeCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_MaxAngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_ShutterSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewProp_StageCoachBlend,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_StageCoachWheelController",
		Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::PropPointers),
		sizeof(FAnimNode_StageCoachWheelController),
		alignof(FAnimNode_StageCoachWheelController),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_StageCoachWheelController.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_StageCoachWheelController.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_StageCoachWheelController.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_AnimNode_StageCoachWheelController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_AnimNode_StageCoachWheelController_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_StageCoachWheelController::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController_Statics::NewStructOps, TEXT("AnimNode_StageCoachWheelController"), &Z_Registration_Info_UScriptStruct_AnimNode_StageCoachWheelController, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_StageCoachWheelController), 1827173727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_AnimNode_StageCoachWheelController_h_2170967334(TEXT("/Script/ChaosVehicles"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_AnimNode_StageCoachWheelController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_AnimNode_StageCoachWheelController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
