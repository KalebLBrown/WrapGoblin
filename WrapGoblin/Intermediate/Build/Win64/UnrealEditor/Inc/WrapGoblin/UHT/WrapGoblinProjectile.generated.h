// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WrapGoblinProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef WRAPGOBLIN_WrapGoblinProjectile_generated_h
#error "WrapGoblinProjectile.generated.h already included, missing '#pragma once' in WrapGoblinProjectile.h"
#endif
#define WRAPGOBLIN_WrapGoblinProjectile_generated_h

#define FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWrapGoblinProjectile(); \
	friend struct Z_Construct_UClass_AWrapGoblinProjectile_Statics; \
public: \
	DECLARE_CLASS(AWrapGoblinProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WrapGoblin"), NO_API) \
	DECLARE_SERIALIZER(AWrapGoblinProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWrapGoblinProjectile(AWrapGoblinProjectile&&); \
	AWrapGoblinProjectile(const AWrapGoblinProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWrapGoblinProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWrapGoblinProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWrapGoblinProjectile) \
	NO_API virtual ~AWrapGoblinProjectile();


#define FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinProjectile_h_12_PROLOG
#define FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WRAPGOBLIN_API UClass* StaticClass<class AWrapGoblinProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kaleb_Desktop_WrapGoblin_WrapGoblin_WrapGoblin_Source_WrapGoblin_WrapGoblinProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
