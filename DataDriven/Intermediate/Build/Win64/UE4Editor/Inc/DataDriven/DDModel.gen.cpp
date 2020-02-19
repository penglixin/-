// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDCore/DDModel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDModel() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDModel_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDModel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDMM_NoRegister();
// End Cross Module References
	void UDDModel::StaticRegisterNativesUDDModel()
	{
	}
	UClass* Z_Construct_UClass_UDDModel_NoRegister()
	{
		return UDDModel::StaticClass();
	}
	struct Z_Construct_UClass_UDDModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDCore/DDModel.h" },
		{ "ModuleRelativePath", "Public/DDCore/DDModel.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDDModel_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDDMM_NoRegister, (int32)VTABLE_OFFSET(UDDModel, IDDMM), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDModel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDDModel_Statics::ClassParams = {
		&UDDModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDDModel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDDModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDModel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDModel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDModel, 1901215204);
	template<> DATADRIVEN_API UClass* StaticClass<UDDModel>()
	{
		return UDDModel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDModel(Z_Construct_UClass_UDDModel, &UDDModel::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDModel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDModel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
