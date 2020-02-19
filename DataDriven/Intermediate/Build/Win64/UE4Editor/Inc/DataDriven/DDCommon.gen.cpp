// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDCommon/DDCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDCommon() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDCommon_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDCommon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
// End Cross Module References
	void UDDCommon::StaticRegisterNativesUDDCommon()
	{
	}
	UClass* Z_Construct_UClass_UDDCommon_NoRegister()
	{
		return UDDCommon::StaticClass();
	}
	struct Z_Construct_UClass_UDDCommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDCommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDCommon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDCommon/DDCommon.h" },
		{ "ModuleRelativePath", "Public/DDCommon/DDCommon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDCommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDCommon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDDCommon_Statics::ClassParams = {
		&UDDCommon::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDDCommon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDDCommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDCommon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDCommon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDCommon, 1716111374);
	template<> DATADRIVEN_API UClass* StaticClass<UDDCommon>()
	{
		return UDDCommon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDCommon(Z_Construct_UClass_UDDCommon, &UDDCommon::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDCommon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDCommon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
