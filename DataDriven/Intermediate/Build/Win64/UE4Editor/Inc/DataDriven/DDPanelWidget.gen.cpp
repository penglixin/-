// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDUI/DDPanelWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDPanelWidget() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDPanelWidget_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDPanelWidget();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDUserWidget();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UFunction* Z_Construct_UFunction_UDDPanelWidget_DisplayEnterMovie();
	DATADRIVEN_API UFunction* Z_Construct_UFunction_UDDPanelWidget_DisplayLeaveMovie();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FUINature();
// End Cross Module References
	static FName NAME_UDDPanelWidget_DisplayEnterMovie = FName(TEXT("DisplayEnterMovie"));
	float UDDPanelWidget::DisplayEnterMovie()
	{
		DDPanelWidget_eventDisplayEnterMovie_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UDDPanelWidget_DisplayEnterMovie),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDDPanelWidget_DisplayLeaveMovie = FName(TEXT("DisplayLeaveMovie"));
	float UDDPanelWidget::DisplayLeaveMovie()
	{
		DDPanelWidget_eventDisplayLeaveMovie_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UDDPanelWidget_DisplayLeaveMovie),&Parms);
		return Parms.ReturnValue;
	}
	void UDDPanelWidget::StaticRegisterNativesUDDPanelWidget()
	{
	}
	struct Z_Construct_UFunction_UDDPanelWidget_DisplayEnterMovie_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDDPanelWidget_DisplayEnterMovie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDPanelWidget_eventDisplayEnterMovie_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDPanelWidget_DisplayEnterMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDPanelWidget_DisplayEnterMovie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDPanelWidget_DisplayEnterMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDUI/DDPanelWidget.h" },
		{ "ToolTip", "?????\xd8\xb5?????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDPanelWidget_DisplayEnterMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDPanelWidget, nullptr, "DisplayEnterMovie", sizeof(DDPanelWidget_eventDisplayEnterMovie_Parms), Z_Construct_UFunction_UDDPanelWidget_DisplayEnterMovie_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDDPanelWidget_DisplayEnterMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDPanelWidget_DisplayEnterMovie_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDDPanelWidget_DisplayEnterMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDPanelWidget_DisplayEnterMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDPanelWidget_DisplayEnterMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDPanelWidget_DisplayLeaveMovie_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDDPanelWidget_DisplayLeaveMovie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDPanelWidget_eventDisplayLeaveMovie_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDPanelWidget_DisplayLeaveMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDPanelWidget_DisplayLeaveMovie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDPanelWidget_DisplayLeaveMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDUI/DDPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDPanelWidget_DisplayLeaveMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDPanelWidget, nullptr, "DisplayLeaveMovie", sizeof(DDPanelWidget_eventDisplayLeaveMovie_Parms), Z_Construct_UFunction_UDDPanelWidget_DisplayLeaveMovie_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDDPanelWidget_DisplayLeaveMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDPanelWidget_DisplayLeaveMovie_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDDPanelWidget_DisplayLeaveMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDPanelWidget_DisplayLeaveMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDPanelWidget_DisplayLeaveMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDDPanelWidget_NoRegister()
	{
		return UDDPanelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDDPanelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UINature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UINature;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDPanelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDDUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDDPanelWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDDPanelWidget_DisplayEnterMovie, "DisplayEnterMovie" }, // 4137248900
		{ &Z_Construct_UFunction_UDDPanelWidget_DisplayLeaveMovie, "DisplayLeaveMovie" }, // 3822891769
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDPanelWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDUI/DDPanelWidget.h" },
		{ "ModuleRelativePath", "Public/DDUI/DDPanelWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDPanelWidget_Statics::NewProp_UINature_MetaData[] = {
		{ "Category", "DDPanelWidget" },
		{ "ModuleRelativePath", "Public/DDUI/DDPanelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDDPanelWidget_Statics::NewProp_UINature = { "UINature", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDPanelWidget, UINature), Z_Construct_UScriptStruct_FUINature, METADATA_PARAMS(Z_Construct_UClass_UDDPanelWidget_Statics::NewProp_UINature_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDDPanelWidget_Statics::NewProp_UINature_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDDPanelWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDPanelWidget_Statics::NewProp_UINature,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDPanelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDPanelWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDDPanelWidget_Statics::ClassParams = {
		&UDDPanelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDDPanelWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UDDPanelWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDDPanelWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDDPanelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDPanelWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDPanelWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDPanelWidget, 3314510934);
	template<> DATADRIVEN_API UClass* StaticClass<UDDPanelWidget>()
	{
		return UDDPanelWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDPanelWidget(Z_Construct_UClass_UDDPanelWidget, &UDDPanelWidget::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDPanelWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDPanelWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
