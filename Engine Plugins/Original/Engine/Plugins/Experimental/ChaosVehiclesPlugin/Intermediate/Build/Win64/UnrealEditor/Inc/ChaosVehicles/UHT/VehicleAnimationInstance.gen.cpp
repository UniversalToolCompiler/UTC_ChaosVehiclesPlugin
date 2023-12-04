// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVehicles/Public/VehicleAnimationInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleAnimationInstance() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn_NoRegister();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UVehicleAnimationInstance();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UVehicleAnimationInstance_NoRegister();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_ChaosVehicles();
// End Cross Module References

static_assert(std::is_polymorphic<FVehicleAnimationInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FVehicleAnimationInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleAnimationInstanceProxy;
class UScriptStruct* FVehicleAnimationInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleAnimationInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleAnimationInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy, (UObject*)Z_Construct_UPackage__Script_ChaosVehicles(), TEXT("VehicleAnimationInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleAnimationInstanceProxy.OuterSingleton;
}
template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<FVehicleAnimationInstanceProxy>()
{
	return FVehicleAnimationInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
#endif
		{ "ModuleRelativePath", "Public/VehicleAnimationInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleAnimationInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"VehicleAnimationInstanceProxy",
		nullptr,
		0,
		sizeof(FVehicleAnimationInstanceProxy),
		alignof(FVehicleAnimationInstanceProxy),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_VehicleAnimationInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleAnimationInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VehicleAnimationInstanceProxy.InnerSingleton;
	}
	DEFINE_FUNCTION(UVehicleAnimationInstance::execGetVehicle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWheeledVehiclePawn**)Z_Param__Result=P_THIS->GetVehicle();
		P_NATIVE_END;
	}
	void UVehicleAnimationInstance::StaticRegisterNativesUVehicleAnimationInstance()
	{
		UClass* Class = UVehicleAnimationInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVehicle", &UVehicleAnimationInstance::execGetVehicle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics
	{
		struct VehicleAnimationInstance_eventGetVehicle_Parms
		{
			AWheeledVehiclePawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleAnimationInstance_eventGetVehicle_Parms, ReturnValue), Z_Construct_UClass_AWheeledVehiclePawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Makes a montage jump to the end of a named section. */" },
#endif
		{ "ModuleRelativePath", "Public/VehicleAnimationInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Makes a montage jump to the end of a named section." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleAnimationInstance, nullptr, "GetVehicle", nullptr, nullptr, Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::VehicleAnimationInstance_eventGetVehicle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::VehicleAnimationInstance_eventGetVehicle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVehicleAnimationInstance);
	UClass* Z_Construct_UClass_UVehicleAnimationInstance_NoRegister()
	{
		return UVehicleAnimationInstance::StaticClass();
	}
	struct Z_Construct_UClass_UVehicleAnimationInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheeledVehicleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WheeledVehicleComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicleAnimationInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleAnimationInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVehicleAnimationInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehicleAnimationInstance_GetVehicle, "GetVehicle" }, // 3660268017
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleAnimationInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleAnimationInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "VehicleAnimationInstance.h" },
		{ "ModuleRelativePath", "Public/VehicleAnimationInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleAnimationInstance_Statics::NewProp_WheeledVehicleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VehicleAnimationInstance.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVehicleAnimationInstance_Statics::NewProp_WheeledVehicleComponent = { "WheeledVehicleComponent", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleAnimationInstance, WheeledVehicleComponent), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleAnimationInstance_Statics::NewProp_WheeledVehicleComponent_MetaData), Z_Construct_UClass_UVehicleAnimationInstance_Statics::NewProp_WheeledVehicleComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVehicleAnimationInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleAnimationInstance_Statics::NewProp_WheeledVehicleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicleAnimationInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleAnimationInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVehicleAnimationInstance_Statics::ClassParams = {
		&UVehicleAnimationInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVehicleAnimationInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleAnimationInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleAnimationInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UVehicleAnimationInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleAnimationInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVehicleAnimationInstance()
	{
		if (!Z_Registration_Info_UClass_UVehicleAnimationInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVehicleAnimationInstance.OuterSingleton, Z_Construct_UClass_UVehicleAnimationInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVehicleAnimationInstance.OuterSingleton;
	}
	template<> CHAOSVEHICLES_API UClass* StaticClass<UVehicleAnimationInstance>()
	{
		return UVehicleAnimationInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleAnimationInstance);
	UVehicleAnimationInstance::~UVehicleAnimationInstance() {}
	struct Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_Statics::ScriptStructInfo[] = {
		{ FVehicleAnimationInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics::NewStructOps, TEXT("VehicleAnimationInstanceProxy"), &Z_Registration_Info_UScriptStruct_VehicleAnimationInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleAnimationInstanceProxy), 3021292781U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVehicleAnimationInstance, UVehicleAnimationInstance::StaticClass, TEXT("UVehicleAnimationInstance"), &Z_Registration_Info_UClass_UVehicleAnimationInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVehicleAnimationInstance), 71592026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_54752240(TEXT("/Script/ChaosVehicles"),
		Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projets_UE5_CarRnD_5_3_Plugins_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
