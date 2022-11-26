// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEarth_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Earth;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Earth()
	{
		if (!Z_Registration_Info_UPackage__Script_Earth.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Earth",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x089CEF38,
				0x3A63BE4B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Earth.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Earth.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Earth(Z_Construct_UPackage__Script_Earth, TEXT("/Script/Earth"), Z_Registration_Info_UPackage__Script_Earth, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x089CEF38, 0x3A63BE4B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
