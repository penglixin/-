// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDUI/DDFrameWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDFrameWidget() {}
// Cross Module References
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDFrameWidget_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDFrameWidget();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDUserWidget();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UFunction* Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DATADRIVEN_API UFunction* Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget();
	DATADRIVEN_API UFunction* Z_Construct_UFunction_UDDFrameWidget_AdvanceLoadPanel();
	DATADRIVEN_API UFunction* Z_Construct_UFunction_UDDFrameWidget_ExitCallBack();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_ELayoutType();
	DATADRIVEN_API UFunction* Z_Construct_UFunction_UDDFrameWidget_ExitUIPanel();
	DATADRIVEN_API UFunction* Z_Construct_UFunction_UDDFrameWidget_HideUIPanel();
	DATADRIVEN_API UFunction* Z_Construct_UFunction_UDDFrameWidget_ShowUIPanel();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
// End Cross Module References
	void UDDFrameWidget::StaticRegisterNativesUDDFrameWidget()
	{
		UClass* Class = UDDFrameWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptAdvancePanel", &UDDFrameWidget::execAcceptAdvancePanel },
			{ "AcceptPanelWidget", &UDDFrameWidget::execAcceptPanelWidget },
			{ "AdvanceLoadPanel", &UDDFrameWidget::execAdvanceLoadPanel },
			{ "ExitCallBack", &UDDFrameWidget::execExitCallBack },
			{ "ExitUIPanel", &UDDFrameWidget::execExitUIPanel },
			{ "HideUIPanel", &UDDFrameWidget::execHideUIPanel },
			{ "ShowUIPanel", &UDDFrameWidget::execShowUIPanel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics
	{
		struct DDFrameWidget_eventAcceptAdvancePanel_Parms
		{
			FName BackName;
			UUserWidget* BackWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackWidget;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BackName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::NewProp_BackWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::NewProp_BackWidget = { "BackWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDFrameWidget_eventAcceptAdvancePanel_Parms, BackWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::NewProp_BackWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::NewProp_BackWidget_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::NewProp_BackName = { "BackName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDFrameWidget_eventAcceptAdvancePanel_Parms, BackName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::NewProp_BackWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::NewProp_BackName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDUI/DDFrameWidget.h" },
		{ "ToolTip", "??\xc7\xb0?????????\xd8\xb5?????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDFrameWidget, nullptr, "AcceptAdvancePanel", sizeof(DDFrameWidget_eventAcceptAdvancePanel_Parms), Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics
	{
		struct DDFrameWidget_eventAcceptPanelWidget_Parms
		{
			FName BackName;
			UUserWidget* BackWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackWidget;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BackName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::NewProp_BackWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::NewProp_BackWidget = { "BackWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDFrameWidget_eventAcceptPanelWidget_Parms, BackWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::NewProp_BackWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::NewProp_BackWidget_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::NewProp_BackName = { "BackName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDFrameWidget_eventAcceptPanelWidget_Parms, BackName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::NewProp_BackWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::NewProp_BackName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDUI/DDFrameWidget.h" },
		{ "ToolTip", "??\xca\xbe\xca\xb1???\xd8\xbb\xd8\xb5?????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDFrameWidget, nullptr, "AcceptPanelWidget", sizeof(DDFrameWidget_eventAcceptPanelWidget_Parms), Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDFrameWidget_AdvanceLoadPanel_Statics
	{
		struct DDFrameWidget_eventAdvanceLoadPanel_Parms
		{
			FName PanelName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PanelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDDFrameWidget_AdvanceLoadPanel_Statics::NewProp_PanelName = { "PanelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDFrameWidget_eventAdvanceLoadPanel_Parms, PanelName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDFrameWidget_AdvanceLoadPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDFrameWidget_AdvanceLoadPanel_Statics::NewProp_PanelName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDFrameWidget_AdvanceLoadPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDUI/DDFrameWidget.h" },
		{ "ToolTip", "??\xc7\xb0????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDFrameWidget_AdvanceLoadPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDFrameWidget, nullptr, "AdvanceLoadPanel", sizeof(DDFrameWidget_eventAdvanceLoadPanel_Parms), Z_Construct_UFunction_UDDFrameWidget_AdvanceLoadPanel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_AdvanceLoadPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDFrameWidget_AdvanceLoadPanel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_AdvanceLoadPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDFrameWidget_AdvanceLoadPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDFrameWidget_AdvanceLoadPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics
	{
		struct DDFrameWidget_eventExitCallBack_Parms
		{
			ELayoutType LayoutType;
			UPanelWidget* InLayout;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLayout_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InLayout;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LayoutType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LayoutType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::NewProp_InLayout_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::NewProp_InLayout = { "InLayout", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDFrameWidget_eventExitCallBack_Parms, InLayout), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::NewProp_InLayout_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::NewProp_InLayout_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::NewProp_LayoutType = { "LayoutType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDFrameWidget_eventExitCallBack_Parms, LayoutType), Z_Construct_UEnum_DataDriven_ELayoutType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::NewProp_LayoutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::NewProp_InLayout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::NewProp_LayoutType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::NewProp_LayoutType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDUI/DDFrameWidget.h" },
		{ "ToolTip", "????UI???????\xd9\xba??\xc4\xb8??\xd8\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDFrameWidget, nullptr, "ExitCallBack", sizeof(DDFrameWidget_eventExitCallBack_Parms), Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDFrameWidget_ExitCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDFrameWidget_ExitCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDFrameWidget_ExitUIPanel_Statics
	{
		struct DDFrameWidget_eventExitUIPanel_Parms
		{
			FName PanelName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PanelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDDFrameWidget_ExitUIPanel_Statics::NewProp_PanelName = { "PanelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDFrameWidget_eventExitUIPanel_Parms, PanelName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDFrameWidget_ExitUIPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDFrameWidget_ExitUIPanel_Statics::NewProp_PanelName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDFrameWidget_ExitUIPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDUI/DDFrameWidget.h" },
		{ "ToolTip", "????UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDFrameWidget_ExitUIPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDFrameWidget, nullptr, "ExitUIPanel", sizeof(DDFrameWidget_eventExitUIPanel_Parms), Z_Construct_UFunction_UDDFrameWidget_ExitUIPanel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_ExitUIPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDFrameWidget_ExitUIPanel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_ExitUIPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDFrameWidget_ExitUIPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDFrameWidget_ExitUIPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDFrameWidget_HideUIPanel_Statics
	{
		struct DDFrameWidget_eventHideUIPanel_Parms
		{
			FName PanelName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PanelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDDFrameWidget_HideUIPanel_Statics::NewProp_PanelName = { "PanelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDFrameWidget_eventHideUIPanel_Parms, PanelName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDFrameWidget_HideUIPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDFrameWidget_HideUIPanel_Statics::NewProp_PanelName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDFrameWidget_HideUIPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDUI/DDFrameWidget.h" },
		{ "ToolTip", "????UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDFrameWidget_HideUIPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDFrameWidget, nullptr, "HideUIPanel", sizeof(DDFrameWidget_eventHideUIPanel_Parms), Z_Construct_UFunction_UDDFrameWidget_HideUIPanel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_HideUIPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDFrameWidget_HideUIPanel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_HideUIPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDFrameWidget_HideUIPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDFrameWidget_HideUIPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDFrameWidget_ShowUIPanel_Statics
	{
		struct DDFrameWidget_eventShowUIPanel_Parms
		{
			FName PanelName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PanelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDDFrameWidget_ShowUIPanel_Statics::NewProp_PanelName = { "PanelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDFrameWidget_eventShowUIPanel_Parms, PanelName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDFrameWidget_ShowUIPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDFrameWidget_ShowUIPanel_Statics::NewProp_PanelName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDFrameWidget_ShowUIPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDUI/DDFrameWidget.h" },
		{ "ToolTip", "??\xca\xbe???? ???? = UI????????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDFrameWidget_ShowUIPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDFrameWidget, nullptr, "ShowUIPanel", sizeof(DDFrameWidget_eventShowUIPanel_Parms), Z_Construct_UFunction_UDDFrameWidget_ShowUIPanel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_ShowUIPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDFrameWidget_ShowUIPanel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDDFrameWidget_ShowUIPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDFrameWidget_ShowUIPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDFrameWidget_ShowUIPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDDFrameWidget_NoRegister()
	{
		return UDDFrameWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDDFrameWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnActiveCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnActiveCanvas;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnActiveCanvas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveCanvas;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveCanvas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnActiveOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnActiveOverlay;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnActiveOverlay_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveOverlay;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveOverlay_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDFrameWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDDUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDDFrameWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDDFrameWidget_AcceptAdvancePanel, "AcceptAdvancePanel" }, // 2238075969
		{ &Z_Construct_UFunction_UDDFrameWidget_AcceptPanelWidget, "AcceptPanelWidget" }, // 3285997621
		{ &Z_Construct_UFunction_UDDFrameWidget_AdvanceLoadPanel, "AdvanceLoadPanel" }, // 571261757
		{ &Z_Construct_UFunction_UDDFrameWidget_ExitCallBack, "ExitCallBack" }, // 2692626389
		{ &Z_Construct_UFunction_UDDFrameWidget_ExitUIPanel, "ExitUIPanel" }, // 2686970971
		{ &Z_Construct_UFunction_UDDFrameWidget_HideUIPanel, "HideUIPanel" }, // 1821411124
		{ &Z_Construct_UFunction_UDDFrameWidget_ShowUIPanel, "ShowUIPanel" }, // 2337599094
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDFrameWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDUI/DDFrameWidget.h" },
		{ "ModuleRelativePath", "Public/DDUI/DDFrameWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_MaskPanel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DDUI/DDFrameWidget.h" },
		{ "ToolTip", "????\xcd\xbc\xc6\xac" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_MaskPanel = { "MaskPanel", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDFrameWidget, MaskPanel), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_MaskPanel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_MaskPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_UnActiveCanvas_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DDUI/DDFrameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_UnActiveCanvas = { "UnActiveCanvas", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDFrameWidget, UnActiveCanvas), METADATA_PARAMS(Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_UnActiveCanvas_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_UnActiveCanvas_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_UnActiveCanvas_Inner = { "UnActiveCanvas", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_ActiveCanvas_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DDUI/DDFrameWidget.h" },
		{ "ToolTip", "????Canvas?\xd8\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_ActiveCanvas = { "ActiveCanvas", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDFrameWidget, ActiveCanvas), METADATA_PARAMS(Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_ActiveCanvas_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_ActiveCanvas_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_ActiveCanvas_Inner = { "ActiveCanvas", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_UnActiveOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DDUI/DDFrameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_UnActiveOverlay = { "UnActiveOverlay", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDFrameWidget, UnActiveOverlay), METADATA_PARAMS(Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_UnActiveOverlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_UnActiveOverlay_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_UnActiveOverlay_Inner = { "UnActiveOverlay", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_ActiveOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DDUI/DDFrameWidget.h" },
		{ "ToolTip", "????Overlay?\xd8\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_ActiveOverlay = { "ActiveOverlay", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDFrameWidget, ActiveOverlay), METADATA_PARAMS(Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_ActiveOverlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_ActiveOverlay_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_ActiveOverlay_Inner = { "ActiveOverlay", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDDFrameWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_MaskPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_UnActiveCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_UnActiveCanvas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_ActiveCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_ActiveCanvas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_UnActiveOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_UnActiveOverlay_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_ActiveOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDFrameWidget_Statics::NewProp_ActiveOverlay_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDFrameWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDFrameWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDDFrameWidget_Statics::ClassParams = {
		&UDDFrameWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDDFrameWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UDDFrameWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDDFrameWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDDFrameWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDFrameWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDFrameWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDFrameWidget, 2423431147);
	template<> DATADRIVEN_API UClass* StaticClass<UDDFrameWidget>()
	{
		return UDDFrameWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDFrameWidget(Z_Construct_UClass_UDDFrameWidget, &UDDFrameWidget::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDFrameWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDFrameWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
