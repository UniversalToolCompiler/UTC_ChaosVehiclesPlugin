// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVehiclesEditor/Public/AnimGraphNode_StageCoachWheelController.h"
#include "ChaosVehicles/Public/AnimNode_StageCoachWheelController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_StageCoachWheelController() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController();
	CHAOSVEHICLESEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController();
	CHAOSVEHICLESEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosVehiclesEditor();
// End Cross Module References
	void UAnimGraphNode_StageCoachWheelController::StaticRegisterNativesUAnimGraphNode_StageCoachWheelController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_StageCoachWheelController);
	UClass* Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_NoRegister()
	{
		return UAnimGraphNode_StageCoachWheelController::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehiclesEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_StageCoachWheelController.h" },
		{ "Keywords", "Modify Wheel Vehicle" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_StageCoachWheelController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_StageCoachWheelController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_StageCoachWheelController, Node), Z_Construct_UScriptStruct_FAnimNode_StageCoachWheelController, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::NewProp_Node_MetaData) }; // 581114983
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_StageCoachWheelController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::ClassParams = {
		&UAnimGraphNode_StageCoachWheelController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_StageCoachWheelController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_StageCoachWheelController.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_StageCoachWheelController.OuterSingleton;
	}
	template<> CHAOSVEHICLESEDITOR_API UClass* StaticClass<UAnimGraphNode_StageCoachWheelController>()
	{
		return UAnimGraphNode_StageCoachWheelController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_StageCoachWheelController);
	UAnimGraphNode_StageCoachWheelController::~UAnimGraphNode_StageCoachWheelController() {}
	struct Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_StageCoachWheelController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_StageCoachWheelController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_StageCoachWheelController, UAnimGraphNode_StageCoachWheelController::StaticClass, TEXT("UAnimGraphNode_StageCoachWheelController"), &Z_Registration_Info_UClass_UAnimGraphNode_StageCoachWheelController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_StageCoachWheelController), 3485304108U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_StageCoachWheelController_h_3128556034(TEXT("/Script/ChaosVehiclesEditor"),
		Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_StageCoachWheelController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_StageCoachWheelController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
