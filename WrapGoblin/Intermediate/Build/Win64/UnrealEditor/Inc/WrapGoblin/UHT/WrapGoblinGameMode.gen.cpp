// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WrapGoblin/WrapGoblinGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrapGoblinGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_WrapGoblin();
WRAPGOBLIN_API UClass* Z_Construct_UClass_AWrapGoblinGameMode();
WRAPGOBLIN_API UClass* Z_Construct_UClass_AWrapGoblinGameMode_NoRegister();
// End Cross Module References

// Begin Class AWrapGoblinGameMode
void AWrapGoblinGameMode::StaticRegisterNativesAWrapGoblinGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWrapGoblinGameMode);
UClass* Z_Construct_UClass_AWrapGoblinGameMode_NoRegister()
{
	return AWrapGoblinGameMode::StaticClass();
}
struct Z_Construct_UClass_AWrapGoblinGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WrapGoblinGameMode.h" },
		{ "ModuleRelativePath", "WrapGoblinGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWrapGoblinGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWrapGoblinGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WrapGoblin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWrapGoblinGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWrapGoblinGameMode_Statics::ClassParams = {
	&AWrapGoblinGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWrapGoblinGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AWrapGoblinGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWrapGoblinGameMode()
{
	if (!Z_Registration_Info_UClass_AWrapGoblinGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWrapGoblinGameMode.OuterSingleton, Z_Construct_UClass_AWrapGoblinGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWrapGoblinGameMode.OuterSingleton;
}
template<> WRAPGOBLIN_API UClass* StaticClass<AWrapGoblinGameMode>()
{
	return AWrapGoblinGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWrapGoblinGameMode);
AWrapGoblinGameMode::~AWrapGoblinGameMode() {}
// End Class AWrapGoblinGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWrapGoblinGameMode, AWrapGoblinGameMode::StaticClass, TEXT("AWrapGoblinGameMode"), &Z_Registration_Info_UClass_AWrapGoblinGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWrapGoblinGameMode), 366477891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinGameMode_h_2399636622(TEXT("/Script/WrapGoblin"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
