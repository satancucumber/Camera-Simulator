// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Earth/EarthGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEarthGameModeBase() {}
// Cross Module References
	EARTH_API UClass* Z_Construct_UClass_AEarthGameModeBase_NoRegister();
	EARTH_API UClass* Z_Construct_UClass_AEarthGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Earth();
// End Cross Module References
	void AEarthGameModeBase::StaticRegisterNativesAEarthGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEarthGameModeBase);
	UClass* Z_Construct_UClass_AEarthGameModeBase_NoRegister()
	{
		return AEarthGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AEarthGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEarthGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Earth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEarthGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EarthGameModeBase.h" },
		{ "ModuleRelativePath", "EarthGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEarthGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEarthGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEarthGameModeBase_Statics::ClassParams = {
		&AEarthGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEarthGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEarthGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEarthGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AEarthGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEarthGameModeBase.OuterSingleton, Z_Construct_UClass_AEarthGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEarthGameModeBase.OuterSingleton;
	}
	template<> EARTH_API UClass* StaticClass<AEarthGameModeBase>()
	{
		return AEarthGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEarthGameModeBase);
	struct Z_CompiledInDeferFile_FID_Earth_Source_Earth_EarthGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Earth_Source_Earth_EarthGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEarthGameModeBase, AEarthGameModeBase::StaticClass, TEXT("AEarthGameModeBase"), &Z_Registration_Info_UClass_AEarthGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEarthGameModeBase), 248152176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Earth_Source_Earth_EarthGameModeBase_h_1640048392(TEXT("/Script/Earth"),
		Z_CompiledInDeferFile_FID_Earth_Source_Earth_EarthGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Earth_Source_Earth_EarthGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
