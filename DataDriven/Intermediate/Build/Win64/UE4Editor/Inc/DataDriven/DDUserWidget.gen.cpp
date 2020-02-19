// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDObject/DDUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDUserWidget() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDUserWidget_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDOO_NoRegister();
// End Cross Module References
	void UDDUserWidget::StaticRegisterNativesUDDUserWidget()
	{
	}
	UClass* Z_Construct_UClass_UDDUserWidget_NoRegister()
	{
		return UDDUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDDUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDObject/DDUserWidget.h" },
		{ "ModuleRelativePath", "Public/DDObject/DDUserWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDDUserWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDDOO_NoRegister, (int32)VTABLE_OFFSET(UDDUserWidget, IDDOO), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDDUserWidget_Statics::ClassParams = {
		&UDDUserWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDDUserWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDDUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDUserWidget, 3963916546);
	template<> DATADRIVEN_API UClass* StaticClass<UDDUserWidget>()
	{
		return UDDUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDUserWidget(Z_Construct_UClass_UDDUserWidget, &UDDUserWidget::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
