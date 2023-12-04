// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVehicleWheel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAxleType : uint8;
#ifdef CHAOSVEHICLES_ChaosVehicleWheel_generated_h
#error "ChaosVehicleWheel.generated.h already included, missing '#pragma once' in ChaosVehicleWheel.h"
#endif
#define CHAOSVEHICLES_ChaosVehicleWheel_generated_h

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAxleType); \
	DECLARE_FUNCTION(execIsInAir); \
	DECLARE_FUNCTION(execGetSuspensionAxis); \
	DECLARE_FUNCTION(execGetWheelAngularVelocity); \
	DECLARE_FUNCTION(execGetWheelRadius); \
	DECLARE_FUNCTION(execGetSuspensionOffset); \
	DECLARE_FUNCTION(execGetRotationAngularVelocity); \
	DECLARE_FUNCTION(execGetRotationAngle); \
	DECLARE_FUNCTION(execGetSteerAngle);


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUChaosVehicleWheel(); \
	friend struct Z_Construct_UClass_UChaosVehicleWheel_Statics; \
public: \
	DECLARE_CLASS(UChaosVehicleWheel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosVehicles"), NO_API) \
	DECLARE_SERIALIZER(UChaosVehicleWheel)


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVehicleWheel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVehicleWheel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVehicleWheel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVehicleWheel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosVehicleWheel(UChaosVehicleWheel&&); \
	NO_API UChaosVehicleWheel(const UChaosVehicleWheel&); \
public: \
	NO_API virtual ~UChaosVehicleWheel();


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_74_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVEHICLES_API UClass* StaticClass<class UChaosVehicleWheel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleWheel_h


#define FOREACH_ENUM_ESWEEPSHAPE(op) \
	op(ESweepShape::Raycast) \
	op(ESweepShape::Spherecast) \
	op(ESweepShape::AdvancedSpherecast) \
	op(ESweepShape::Shapecast) 

enum class ESweepShape : uint8;
template<> struct TIsUEnumClass<ESweepShape> { enum { Value = true }; };
template<> CHAOSVEHICLES_API UEnum* StaticEnum<ESweepShape>();

#define FOREACH_ENUM_ESWEEPTYPE(op) \
	op(ESweepType::SimpleSweep) \
	op(ESweepType::ComplexSweep) 

enum class ESweepType : uint8;
template<> struct TIsUEnumClass<ESweepType> { enum { Value = true }; };
template<> CHAOSVEHICLES_API UEnum* StaticEnum<ESweepType>();

#define FOREACH_ENUM_EAXLETYPE(op) \
	op(EAxleType::Undefined) \
	op(EAxleType::Front) \
	op(EAxleType::Rear) 

enum class EAxleType : uint8;
template<> struct TIsUEnumClass<EAxleType> { enum { Value = true }; };
template<> CHAOSVEHICLES_API UEnum* StaticEnum<EAxleType>();

#define FOREACH_ENUM_ETORQUECOMBINEMETHOD(op) \
	op(ETorqueCombineMethod::None) \
	op(ETorqueCombineMethod::Override) \
	op(ETorqueCombineMethod::Additive) 

enum class ETorqueCombineMethod : uint8;
template<> struct TIsUEnumClass<ETorqueCombineMethod> { enum { Value = true }; };
template<> CHAOSVEHICLES_API UEnum* StaticEnum<ETorqueCombineMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
