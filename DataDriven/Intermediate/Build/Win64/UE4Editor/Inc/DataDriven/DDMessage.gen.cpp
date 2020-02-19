// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDCore/DDMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDMessage() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDInputBinder_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDInputBinder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDMessage_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDMessage();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDMM_NoRegister();
// End Cross Module References
	void UDDInputBinder::StaticRegisterNativesUDDInputBinder()
	{
	}
	UClass* Z_Construct_UClass_UDDInputBinder_NoRegister()
	{
		return UDDInputBinder::StaticClass();
	}
	struct Z_Construct_UClass_UDDInputBinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDInputBinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDInputBinder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDCore/DDMessage.h" },
		{ "ModuleRelativePath", "Public/DDCore/DDMessage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDInputBinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDInputBinder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDDInputBinder_Statics::ClassParams = {
		&UDDInputBinder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDDInputBinder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDDInputBinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDInputBinder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDInputBinder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDInputBinder, 3892662055);
	template<> DATADRIVEN_API UClass* StaticClass<UDDInputBinder>()
	{
		return UDDInputBinder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDInputBinder(Z_Construct_UClass_UDDInputBinder, &UDDInputBinder::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDInputBinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDInputBinder);
	void UDDMessage::StaticRegisterNativesUDDMessage()
	{
	}
	UClass* Z_Construct_UClass_UDDMessage_NoRegister()
	{
		return UDDMessage::StaticClass();
	}
	struct Z_Construct_UClass_UDDMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDMessage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDCore/DDMessage.h" },
		{ "ModuleRelativePath", "Public/DDCore/DDMessage.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDDMessage_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDDMM_NoRegister, (int32)VTABLE_OFFSET(UDDMessage, IDDMM), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDDMessage_Statics::ClassParams = {
		&UDDMessage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDDMessage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDDMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDMessage, 755566271);
	template<> DATADRIVEN_API UClass* StaticClass<UDDMessage>()
	{
		return UDDMessage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDMessage(Z_Construct_UClass_UDDMessage, &UDDMessage::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
