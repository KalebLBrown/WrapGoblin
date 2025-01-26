// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrapGoblin_init() {}
	WRAPGOBLIN_API UFunction* Z_Construct_UDelegateFunction_WrapGoblin_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WrapGoblin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WrapGoblin()
	{
		if (!Z_Registration_Info_UPackage__Script_WrapGoblin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WrapGoblin_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WrapGoblin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC4F5BF01,
				0x9E2A780D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WrapGoblin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WrapGoblin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WrapGoblin(Z_Construct_UPackage__Script_WrapGoblin, TEXT("/Script/WrapGoblin"), Z_Registration_Info_UPackage__Script_WrapGoblin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC4F5BF01, 0x9E2A780D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
