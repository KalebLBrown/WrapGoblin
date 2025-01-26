// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WrapGoblin/WrapGoblinPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrapGoblinPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_WrapGoblin();
WRAPGOBLIN_API UClass* Z_Construct_UClass_AWrapGoblinPlayerController();
WRAPGOBLIN_API UClass* Z_Construct_UClass_AWrapGoblinPlayerController_NoRegister();
// End Cross Module References

// Begin Class AWrapGoblinPlayerController
void AWrapGoblinPlayerController::StaticRegisterNativesAWrapGoblinPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWrapGoblinPlayerController);
UClass* Z_Construct_UClass_AWrapGoblinPlayerController_NoRegister()
{
	return AWrapGoblinPlayerController::StaticClass();
}
struct Z_Construct_UClass_AWrapGoblinPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "WrapGoblinPlayerController.h" },
		{ "ModuleRelativePath", "WrapGoblinPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "WrapGoblinPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWrapGoblinPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWrapGoblinPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWrapGoblinPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWrapGoblinPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWrapGoblinPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWrapGoblinPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWrapGoblinPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_WrapGoblin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWrapGoblinPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWrapGoblinPlayerController_Statics::ClassParams = {
	&AWrapGoblinPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWrapGoblinPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWrapGoblinPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWrapGoblinPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWrapGoblinPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWrapGoblinPlayerController()
{
	if (!Z_Registration_Info_UClass_AWrapGoblinPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWrapGoblinPlayerController.OuterSingleton, Z_Construct_UClass_AWrapGoblinPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWrapGoblinPlayerController.OuterSingleton;
}
template<> WRAPGOBLIN_API UClass* StaticClass<AWrapGoblinPlayerController>()
{
	return AWrapGoblinPlayerController::StaticClass();
}
AWrapGoblinPlayerController::AWrapGoblinPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWrapGoblinPlayerController);
AWrapGoblinPlayerController::~AWrapGoblinPlayerController() {}
// End Class AWrapGoblinPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWrapGoblinPlayerController, AWrapGoblinPlayerController::StaticClass, TEXT("AWrapGoblinPlayerController"), &Z_Registration_Info_UClass_AWrapGoblinPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWrapGoblinPlayerController), 278500339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinPlayerController_h_3318197727(TEXT("/Script/WrapGoblin"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
