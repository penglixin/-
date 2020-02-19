// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDCore/DDCenterModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDCenterModule() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDCenterModule_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDCenterModule();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDModule();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
// End Cross Module References
	void UDDCenterModule::StaticRegisterNativesUDDCenterModule()
	{
	}
	UClass* Z_Construct_UClass_UDDCenterModule_NoRegister()
	{
		return UDDCenterModule::StaticClass();
	}
	struct Z_Construct_UClass_UDDCenterModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDCenterModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDDModule,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDCenterModule_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DDCore/DDCenterModule.h" },
		{ "ModuleRelativePath", "Public/DDCore/DDCenterModule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDCenterModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDCenterModule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDDCenterModule_Statics::ClassParams = {
		&UDDCenterModule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDDCenterModule_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDDCenterModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDCenterModule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDCenterModule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDCenterModule, 1629099919);
	template<> DATADRIVEN_API UClass* StaticClass<UDDCenterModule>()
	{
		return UDDCenterModule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDCenterModule(Z_Construct_UClass_UDDCenterModule, &UDDCenterModule::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDCenterModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDCenterModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
