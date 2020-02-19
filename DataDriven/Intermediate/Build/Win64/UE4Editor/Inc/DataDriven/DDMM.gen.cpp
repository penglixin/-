// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDCore/DDMM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDMM() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDMM_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDMM();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
// End Cross Module References
	void UDDMM::StaticRegisterNativesUDDMM()
	{
	}
	UClass* Z_Construct_UClass_UDDMM_NoRegister()
	{
		return UDDMM::StaticClass();
	}
	struct Z_Construct_UClass_UDDMM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDMM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDMM_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCore/DDMM.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDMM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDDMM>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDDMM_Statics::ClassParams = {
		&UDDMM::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDDMM_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDDMM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDMM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDMM_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDMM, 2648461749);
	template<> DATADRIVEN_API UClass* StaticClass<UDDMM>()
	{
		return UDDMM::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDMM(Z_Construct_UClass_UDDMM, &UDDMM::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDMM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDMM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
