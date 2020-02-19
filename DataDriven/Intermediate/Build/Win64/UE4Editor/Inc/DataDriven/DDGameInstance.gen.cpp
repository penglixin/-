// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDObject/DDGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDGameInstance() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDGameInstance_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDOO_NoRegister();
// End Cross Module References
	void UDDGameInstance::StaticRegisterNativesUDDGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UDDGameInstance_NoRegister()
	{
		return UDDGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDDGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDObject/DDGameInstance.h" },
		{ "ModuleRelativePath", "Public/DDObject/DDGameInstance.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDDGameInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDDOO_NoRegister, (int32)VTABLE_OFFSET(UDDGameInstance, IDDOO), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDDGameInstance_Statics::ClassParams = {
		&UDDGameInstance::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDDGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDDGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDGameInstance, 2735058530);
	template<> DATADRIVEN_API UClass* StaticClass<UDDGameInstance>()
	{
		return UDDGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDGameInstance(Z_Construct_UClass_UDDGameInstance, &UDDGameInstance::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
