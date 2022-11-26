// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EARTH_EarthGameModeBase_generated_h
#error "EarthGameModeBase.generated.h already included, missing '#pragma once' in EarthGameModeBase.h"
#endif
#define EARTH_EarthGameModeBase_generated_h

#define FID_Earth_Source_Earth_EarthGameModeBase_h_15_SPARSE_DATA
#define FID_Earth_Source_Earth_EarthGameModeBase_h_15_RPC_WRAPPERS
#define FID_Earth_Source_Earth_EarthGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Earth_Source_Earth_EarthGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEarthGameModeBase(); \
	friend struct Z_Construct_UClass_AEarthGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AEarthGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Earth"), NO_API) \
	DECLARE_SERIALIZER(AEarthGameModeBase)


#define FID_Earth_Source_Earth_EarthGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEarthGameModeBase(); \
	friend struct Z_Construct_UClass_AEarthGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AEarthGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Earth"), NO_API) \
	DECLARE_SERIALIZER(AEarthGameModeBase)


#define FID_Earth_Source_Earth_EarthGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEarthGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEarthGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEarthGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEarthGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEarthGameModeBase(AEarthGameModeBase&&); \
	NO_API AEarthGameModeBase(const AEarthGameModeBase&); \
public:


#define FID_Earth_Source_Earth_EarthGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEarthGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEarthGameModeBase(AEarthGameModeBase&&); \
	NO_API AEarthGameModeBase(const AEarthGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEarthGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEarthGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEarthGameModeBase)


#define FID_Earth_Source_Earth_EarthGameModeBase_h_12_PROLOG
#define FID_Earth_Source_Earth_EarthGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Earth_Source_Earth_EarthGameModeBase_h_15_SPARSE_DATA \
	FID_Earth_Source_Earth_EarthGameModeBase_h_15_RPC_WRAPPERS \
	FID_Earth_Source_Earth_EarthGameModeBase_h_15_INCLASS \
	FID_Earth_Source_Earth_EarthGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Earth_Source_Earth_EarthGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Earth_Source_Earth_EarthGameModeBase_h_15_SPARSE_DATA \
	FID_Earth_Source_Earth_EarthGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Earth_Source_Earth_EarthGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Earth_Source_Earth_EarthGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EARTH_API UClass* StaticClass<class AEarthGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Earth_Source_Earth_EarthGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
