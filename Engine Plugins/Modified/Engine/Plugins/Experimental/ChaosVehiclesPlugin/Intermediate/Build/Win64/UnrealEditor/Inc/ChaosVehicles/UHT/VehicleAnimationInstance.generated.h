// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VehicleAnimationInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWheeledVehiclePawn;
#ifdef CHAOSVEHICLES_VehicleAnimationInstance_generated_h
#error "VehicleAnimationInstance.generated.h already included, missing '#pragma once' in VehicleAnimationInstance.h"
#endif
#define CHAOSVEHICLES_VehicleAnimationInstance_generated_h

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleAnimationInstanceProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleAnimationInstanceProxy>();

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVehicle);


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_INCLASS \
private: \
	static void StaticRegisterNativesUVehicleAnimationInstance(); \
	friend struct Z_Construct_UClass_UVehicleAnimationInstance_Statics; \
public: \
	DECLARE_CLASS(UVehicleAnimationInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ChaosVehicles"), NO_API) \
	DECLARE_SERIALIZER(UVehicleAnimationInstance)


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehicleAnimationInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleAnimationInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleAnimationInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleAnimationInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehicleAnimationInstance(UVehicleAnimationInstance&&); \
	NO_API UVehicleAnimationInstance(const UVehicleAnimationInstance&); \
public: \
	NO_API virtual ~UVehicleAnimationInstance();


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_88_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h_91_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVEHICLES_API UClass* StaticClass<class UVehicleAnimationInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_VehicleAnimationInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
