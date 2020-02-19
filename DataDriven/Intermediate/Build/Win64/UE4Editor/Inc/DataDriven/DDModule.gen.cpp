// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDCore/DDModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDModule() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDModule_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDModule();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UFunction* Z_Construct_UFunction_UDDModule_DestroyObject();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EAgreementType();
	DATADRIVEN_API UFunction* Z_Construct_UFunction_UDDModule_DisableObject();
	DATADRIVEN_API UFunction* Z_Construct_UFunction_UDDModule_EnableObject();
	DATADRIVEN_API UClass* Z_Construct_UClass_UWealthData_NoRegister();
// End Cross Module References
	void UDDModule::StaticRegisterNativesUDDModule()
	{
		UClass* Class = UDDModule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyObject", &UDDModule::execDestroyObject },
			{ "DisableObject", &UDDModule::execDisableObject },
			{ "EnableObject", &UDDModule::execEnableObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDDModule_DestroyObject_Statics
	{
		struct DDModule_eventDestroyObject_Parms
		{
			EAgreementType Agreement;
			TArray<FName> TargetNameGroup;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetNameGroup;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetNameGroup_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Agreement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Agreement_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDDModule_DestroyObject_Statics::NewProp_TargetNameGroup = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDModule_eventDestroyObject_Parms, TargetNameGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDDModule_DestroyObject_Statics::NewProp_TargetNameGroup_Inner = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDDModule_DestroyObject_Statics::NewProp_Agreement = { "Agreement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDModule_eventDestroyObject_Parms, Agreement), Z_Construct_UEnum_DataDriven_EAgreementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDDModule_DestroyObject_Statics::NewProp_Agreement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDModule_DestroyObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DestroyObject_Statics::NewProp_TargetNameGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DestroyObject_Statics::NewProp_TargetNameGroup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DestroyObject_Statics::NewProp_Agreement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DestroyObject_Statics::NewProp_Agreement_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDModule_DestroyObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCore/DDModule.h" },
		{ "ToolTip", "?????\xc2\xbc????????\xd9\xb6???" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDModule_DestroyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDModule, nullptr, "DestroyObject", sizeof(DDModule_eventDestroyObject_Parms), Z_Construct_UFunction_UDDModule_DestroyObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDDModule_DestroyObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDModule_DestroyObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDDModule_DestroyObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDModule_DestroyObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDModule_DestroyObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDModule_DisableObject_Statics
	{
		struct DDModule_eventDisableObject_Parms
		{
			EAgreementType Agreement;
			TArray<FName> TargetNameGroup;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetNameGroup;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetNameGroup_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Agreement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Agreement_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_TargetNameGroup = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDModule_eventDisableObject_Parms, TargetNameGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_TargetNameGroup_Inner = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_Agreement = { "Agreement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDModule_eventDisableObject_Parms, Agreement), Z_Construct_UEnum_DataDriven_EAgreementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_Agreement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDModule_DisableObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_TargetNameGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_TargetNameGroup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_Agreement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_DisableObject_Statics::NewProp_Agreement_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDModule_DisableObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCore/DDModule.h" },
		{ "ToolTip", "?????\xc2\xbc?????\xca\xa7??????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDModule_DisableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDModule, nullptr, "DisableObject", sizeof(DDModule_eventDisableObject_Parms), Z_Construct_UFunction_UDDModule_DisableObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDDModule_DisableObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDModule_DisableObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDDModule_DisableObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDModule_DisableObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDModule_DisableObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDModule_EnableObject_Statics
	{
		struct DDModule_eventEnableObject_Parms
		{
			EAgreementType Agreement;
			TArray<FName> TargetNameGroup;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetNameGroup;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetNameGroup_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Agreement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Agreement_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_TargetNameGroup = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDModule_eventEnableObject_Parms, TargetNameGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_TargetNameGroup_Inner = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_Agreement = { "Agreement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDModule_eventEnableObject_Parms, Agreement), Z_Construct_UEnum_DataDriven_EAgreementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_Agreement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDModule_EnableObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_TargetNameGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_TargetNameGroup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_Agreement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDModule_EnableObject_Statics::NewProp_Agreement_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDModule_EnableObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCore/DDModule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDModule_EnableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDModule, nullptr, "EnableObject", sizeof(DDModule_eventEnableObject_Parms), Z_Construct_UFunction_UDDModule_EnableObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDDModule_EnableObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDModule_EnableObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDDModule_EnableObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDModule_EnableObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDModule_EnableObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDDModule_NoRegister()
	{
		return UDDModule::StaticClass();
	}
	struct Z_Construct_UClass_UDDModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WealthData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WealthData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDDModule_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDDModule_DestroyObject, "DestroyObject" }, // 3353505623
		{ &Z_Construct_UFunction_UDDModule_DisableObject, "DisableObject" }, // 2025971134
		{ &Z_Construct_UFunction_UDDModule_EnableObject, "EnableObject" }, // 3366911179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DDCore/DDModule.h" },
		{ "ModuleRelativePath", "Public/DDCore/DDModule.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDModule_Statics::NewProp_WealthData_MetaData[] = {
		{ "Category", "DataDriven" },
		{ "ModuleRelativePath", "Public/DDCore/DDModule.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDDModule_Statics::NewProp_WealthData = { "WealthData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDModule, WealthData), METADATA_PARAMS(Z_Construct_UClass_UDDModule_Statics::NewProp_WealthData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDDModule_Statics::NewProp_WealthData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDDModule_Statics::NewProp_WealthData_Inner = { "WealthData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWealthData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDDModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDModule_Statics::NewProp_WealthData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDModule_Statics::NewProp_WealthData_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDModule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDDModule_Statics::ClassParams = {
		&UDDModule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDDModule_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UDDModule_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDDModule_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDDModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDModule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDModule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDModule, 2713626886);
	template<> DATADRIVEN_API UClass* StaticClass<UDDModule>()
	{
		return UDDModule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDModule(Z_Construct_UClass_UDDModule, &UDDModule::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
