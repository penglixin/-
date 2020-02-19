// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDObject/DDGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDGameStateBase() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_ADDGameStateBase_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_ADDGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDOO_NoRegister();
// End Cross Module References
	void ADDGameStateBase::StaticRegisterNativesADDGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_ADDGameStateBase_NoRegister()
	{
		return ADDGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_ADDGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADDGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DDObject/DDGameStateBase.h" },
		{ "ModuleRelativePath", "Public/DDObject/DDGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ClassName_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "ModuleRelativePath", "Public/DDObject/DDGameStateBase.h" },
		{ "ToolTip", "??????,????\xce\xaa??,\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??,??\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADDGameStateBase, ClassName), METADATA_PARAMS(Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "ModuleRelativePath", "Public/DDObject/DDGameStateBase.h" },
		{ "ToolTip", "????????,????\xce\xaa??,\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??,??\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADDGameStateBase, ObjectName), METADATA_PARAMS(Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ObjectName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ModuleName_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "ModuleRelativePath", "Public/DDObject/DDGameStateBase.h" },
		{ "ToolTip", "\xc4\xa3??????,????\xce\xaa??,\xcb\xb5??\xd2\xaa?\xd6\xb6?\xd6\xb8??,??\xce\xaa?\xd5\xbe????\xd4\xb6?\xd6\xb8??" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADDGameStateBase, ModuleName), METADATA_PARAMS(Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ModuleName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADDGameStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ObjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADDGameStateBase_Statics::NewProp_ModuleName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADDGameStateBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDDOO_NoRegister, (int32)VTABLE_OFFSET(ADDGameStateBase, IDDOO), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADDGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADDGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADDGameStateBase_Statics::ClassParams = {
		&ADDGameStateBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADDGameStateBase_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADDGameStateBase_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADDGameStateBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADDGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADDGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADDGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADDGameStateBase, 2641009441);
	template<> DATADRIVEN_API UClass* StaticClass<ADDGameStateBase>()
	{
		return ADDGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADDGameStateBase(Z_Construct_UClass_ADDGameStateBase, &ADDGameStateBase::StaticClass, TEXT("/Script/DataDriven"), TEXT("ADDGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADDGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
