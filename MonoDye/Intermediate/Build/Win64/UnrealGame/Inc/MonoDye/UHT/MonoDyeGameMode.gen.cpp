// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonoDye/MonoDyeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonoDyeGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MONODYE_API UClass* Z_Construct_UClass_AMonoDyeGameMode();
	MONODYE_API UClass* Z_Construct_UClass_AMonoDyeGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MonoDye();
// End Cross Module References
	void AMonoDyeGameMode::StaticRegisterNativesAMonoDyeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonoDyeGameMode);
	UClass* Z_Construct_UClass_AMonoDyeGameMode_NoRegister()
	{
		return AMonoDyeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMonoDyeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonoDyeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MonoDye,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonoDyeGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonoDyeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MonoDyeGameMode.h" },
		{ "ModuleRelativePath", "MonoDyeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonoDyeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonoDyeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonoDyeGameMode_Statics::ClassParams = {
		&AMonoDyeGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMonoDyeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMonoDyeGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMonoDyeGameMode()
	{
		if (!Z_Registration_Info_UClass_AMonoDyeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonoDyeGameMode.OuterSingleton, Z_Construct_UClass_AMonoDyeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMonoDyeGameMode.OuterSingleton;
	}
	template<> MONODYE_API UClass* StaticClass<AMonoDyeGameMode>()
	{
		return AMonoDyeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonoDyeGameMode);
	AMonoDyeGameMode::~AMonoDyeGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMonoDyeGameMode, AMonoDyeGameMode::StaticClass, TEXT("AMonoDyeGameMode"), &Z_Registration_Info_UClass_AMonoDyeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonoDyeGameMode), 2966662198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeGameMode_h_3487871955(TEXT("/Script/MonoDye"),
		Z_CompiledInDeferFile_FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_iulid_OneDrive_Documents_Unreal_Projects_MonoDye_Source_MonoDye_MonoDyeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
