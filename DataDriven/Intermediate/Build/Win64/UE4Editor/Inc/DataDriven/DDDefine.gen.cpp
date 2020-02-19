// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDCommon/DDDefine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDDefine() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDDefine_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDDefine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
// End Cross Module References
	void UDDDefine::StaticRegisterNativesUDDDefine()
	{
	}
	UClass* Z_Construct_UClass_UDDDefine_NoRegister()
	{
		return UDDDefine::StaticClass();
	}
	struct Z_Construct_UClass_UDDDefine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDDefine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDDefine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDCommon/DDDefine.h" },
		{ "ModuleRelativePath", "Public/DDCommon/DDDefine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDDefine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDDefine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDDDefine_Statics::ClassParams = {
		&UDDDefine::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDDDefine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDDDefine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDDefine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDDefine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDDefine, 1140616841);
	template<> DATADRIVEN_API UClass* StaticClass<UDDDefine>()
	{
		return UDDDefine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDDefine(Z_Construct_UClass_UDDDefine, &UDDDefine::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDDefine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDDefine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
