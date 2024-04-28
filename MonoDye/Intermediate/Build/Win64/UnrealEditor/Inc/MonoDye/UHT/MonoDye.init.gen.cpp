// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonoDye_init() {}
	MONODYE_API UFunction* Z_Construct_UDelegateFunction_MonoDye_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MonoDye;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MonoDye()
	{
		if (!Z_Registration_Info_UPackage__Script_MonoDye.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MonoDye_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MonoDye",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0A241DBC,
				0x43B4D869,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MonoDye.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MonoDye.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MonoDye(Z_Construct_UPackage__Script_MonoDye, TEXT("/Script/MonoDye"), Z_Registration_Info_UPackage__Script_MonoDye, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0A241DBC, 0x43B4D869));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
