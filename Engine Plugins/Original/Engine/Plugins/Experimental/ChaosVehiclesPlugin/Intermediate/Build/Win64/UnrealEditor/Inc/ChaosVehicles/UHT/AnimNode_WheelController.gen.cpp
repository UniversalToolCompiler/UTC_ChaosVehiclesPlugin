// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVehicles/Public/AnimNode_WheelController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_WheelController() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_WheelController();
	UPackage* Z_Construct_UPackage__Script_ChaosVehicles();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_WheelController>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_WheelController cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_WheelController;
class UScriptStruct* FAnimNode_WheelController::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_WheelController.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_WheelController.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_WheelController, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("AnimNode_WheelController"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_WheelController.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FAnimNode_WheelController>()
{
	return FAnimNode_WheelController::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_WheelController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_WheelController>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_WheelController",
		nullptr,
		0,
		sizeof(FAnimNode_WheelController),
		alignof(FAnimNode_WheelController),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_WheelController()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_WheelController.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_WheelController.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_WheelController.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_AnimNode_WheelController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_AnimNode_WheelController_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_WheelController::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_WheelController_Statics::NewStructOps, TEXT("AnimNode_WheelController"), &Z_Registration_Info_UScriptStruct_AnimNode_WheelController, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_WheelController), 358830693U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_AnimNode_WheelController_h_3120749983(TEXT("/Script/ChaosVehicles"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_AnimNode_WheelController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_AnimNode_WheelController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
