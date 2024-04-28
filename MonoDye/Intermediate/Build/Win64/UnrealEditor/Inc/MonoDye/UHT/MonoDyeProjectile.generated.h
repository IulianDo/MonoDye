// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MonoDyeProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MONODYE_MonoDyeProjectile_generated_h
#error "MonoDyeProjectile.generated.h already included, missing '#pragma once' in MonoDyeProjectile.h"
#endif
#define MONODYE_MonoDyeProjectile_generated_h

#define FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_SPARSE_DATA
#define FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_ACCESSORS
#define FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonoDyeProjectile(); \
	friend struct Z_Construct_UClass_AMonoDyeProjectile_Statics; \
public: \
	DECLARE_CLASS(AMonoDyeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonoDye"), NO_API) \
	DECLARE_SERIALIZER(AMonoDyeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonoDyeProjectile(AMonoDyeProjectile&&); \
	NO_API AMonoDyeProjectile(const AMonoDyeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonoDyeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonoDyeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonoDyeProjectile) \
	NO_API virtual ~AMonoDyeProjectile();


#define FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_12_PROLOG
#define FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_SPARSE_DATA \
	FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_ACCESSORS \
	FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONODYE_API UClass* StaticClass<class AMonoDyeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
