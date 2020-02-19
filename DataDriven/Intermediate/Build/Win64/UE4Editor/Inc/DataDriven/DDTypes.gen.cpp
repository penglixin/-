// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDCommon/DDTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDTypes() {}
// Cross Module References
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EPanelLucenyType();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EPanelShowType();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_ELayoutLevel();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_ELayoutType();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EWealthType();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_ECallResult();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EAgreementType();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EBaseObjectState();
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EBaseObjectLife();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FUINature();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FWealthURL();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FClassWealthEntry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FObjectWealthEntry();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FWealthWidget();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FWealthItem();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FWealthActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DATADRIVEN_API UScriptStruct* Z_Construct_UScriptStruct_FWealthObject();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDTypes_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDDTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATADRIVEN_API UClass* Z_Construct_UClass_UWealthData_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UWealthData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
	static UEnum* EPanelLucenyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_EPanelLucenyType, Z_Construct_UPackage__Script_DataDriven(), TEXT("EPanelLucenyType"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<EPanelLucenyType>()
	{
		return EPanelLucenyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPanelLucenyType(EPanelLucenyType_StaticEnum, TEXT("/Script/DataDriven"), TEXT("EPanelLucenyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_EPanelLucenyType_Hash() { return 1162110539U; }
	UEnum* Z_Construct_UEnum_DataDriven_EPanelLucenyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPanelLucenyType"), 0, Get_Z_Construct_UEnum_DataDriven_EPanelLucenyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPanelLucenyType::Lucency", (int64)EPanelLucenyType::Lucency },
				{ "EPanelLucenyType::Translucence", (int64)EPanelLucenyType::Translucence },
				{ "EPanelLucenyType::ImPenetrable", (int64)EPanelLucenyType::ImPenetrable },
				{ "EPanelLucenyType::Pentrate", (int64)EPanelLucenyType::Pentrate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ImPenetrable.ToolTip", "??\xcd\xb8???????\xdc\xb4?\xcd\xb8" },
				{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
				{ "Pentrate.ToolTip", "??\xcd\xb8???\xc8\xa3????\xdc\xb4?\xcd\xb8" },
				{ "ToolTip", "????????\xcd\xb8????" },
				{ "Translucence.ToolTip", "\xc8\xab\xcd\xb8??, ???\xdc\xb4?\xcd\xb8" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"EPanelLucenyType",
				"EPanelLucenyType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPanelShowType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_EPanelShowType, Z_Construct_UPackage__Script_DataDriven(), TEXT("EPanelShowType"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<EPanelShowType>()
	{
		return EPanelShowType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPanelShowType(EPanelShowType_StaticEnum, TEXT("/Script/DataDriven"), TEXT("EPanelShowType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_EPanelShowType_Hash() { return 2762556778U; }
	UEnum* Z_Construct_UEnum_DataDriven_EPanelShowType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPanelShowType"), 0, Get_Z_Construct_UEnum_DataDriven_EPanelShowType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPanelShowType::DoNothing", (int64)EPanelShowType::DoNothing },
				{ "EPanelShowType::HideOther", (int64)EPanelShowType::HideOther },
				{ "EPanelShowType::Reverse", (int64)EPanelShowType::Reverse },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HideOther.ToolTip", "????????\n??\xd3\xb0??????????" },
				{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"EPanelShowType",
				"EPanelShowType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELayoutLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_ELayoutLevel, Z_Construct_UPackage__Script_DataDriven(), TEXT("ELayoutLevel"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<ELayoutLevel>()
	{
		return ELayoutLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELayoutLevel(ELayoutLevel_StaticEnum, TEXT("/Script/DataDriven"), TEXT("ELayoutLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_ELayoutLevel_Hash() { return 1282114335U; }
	UEnum* Z_Construct_UEnum_DataDriven_ELayoutLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELayoutLevel"), 0, Get_Z_Construct_UEnum_DataDriven_ELayoutLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELayoutLevel::Level_0", (int64)ELayoutLevel::Level_0 },
				{ "ELayoutLevel::Level_1", (int64)ELayoutLevel::Level_1 },
				{ "ELayoutLevel::Level_2", (int64)ELayoutLevel::Level_2 },
				{ "ELayoutLevel::Level_3", (int64)ELayoutLevel::Level_3 },
				{ "ELayoutLevel::Level_All", (int64)ELayoutLevel::Level_All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
				{ "ToolTip", "UI?\xe3\xbc\xb6????, ?\xd4\xbc???\xcc\xac????, \xd2\xbb??6?\xe3\xb9\xbb????" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"ELayoutLevel",
				"ELayoutLevel",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELayoutType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_ELayoutType, Z_Construct_UPackage__Script_DataDriven(), TEXT("ELayoutType"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<ELayoutType>()
	{
		return ELayoutType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELayoutType(ELayoutType_StaticEnum, TEXT("/Script/DataDriven"), TEXT("ELayoutType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_ELayoutType_Hash() { return 2736804763U; }
	UEnum* Z_Construct_UEnum_DataDriven_ELayoutType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELayoutType"), 0, Get_Z_Construct_UEnum_DataDriven_ELayoutType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELayoutType::Canvas", (int64)ELayoutType::Canvas },
				{ "ELayoutType::Overlay", (int64)ELayoutType::Overlay },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
				{ "Overlay.ToolTip", "????????\n??\xd3\xa6""CanvasPanel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"ELayoutType",
				"ELayoutType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EWealthType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_EWealthType, Z_Construct_UPackage__Script_DataDriven(), TEXT("EWealthType"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<EWealthType>()
	{
		return EWealthType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWealthType(EWealthType_StaticEnum, TEXT("/Script/DataDriven"), TEXT("EWealthType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_EWealthType_Hash() { return 3956680641U; }
	UEnum* Z_Construct_UEnum_DataDriven_EWealthType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWealthType"), 0, Get_Z_Construct_UEnum_DataDriven_EWealthType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWealthType::Object", (int64)EWealthType::Object },
				{ "EWealthType::Actor", (int64)EWealthType::Actor },
				{ "EWealthType::Widget", (int64)EWealthType::Widget },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
				{ "ToolTip", "UClass????\xc3\xb6??" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"EWealthType",
				"EWealthType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECallResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_ECallResult, Z_Construct_UPackage__Script_DataDriven(), TEXT("ECallResult"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<ECallResult>()
	{
		return ECallResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECallResult(ECallResult_StaticEnum, TEXT("/Script/DataDriven"), TEXT("ECallResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_ECallResult_Hash() { return 1771558151U; }
	UEnum* Z_Construct_UEnum_DataDriven_ECallResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECallResult"), 0, Get_Z_Construct_UEnum_DataDriven_ECallResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECallResult::NoModule", (int64)ECallResult::NoModule },
				{ "ECallResult::LackObject", (int64)ECallResult::LackObject },
				{ "ECallResult::NoFunction", (int64)ECallResult::NoFunction },
				{ "ECallResult::Succeed", (int64)ECallResult::Succeed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LackObject.ToolTip", "\xc8\xb1\xca\xa7\xc4\xa3??" },
				{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
				{ "NoFunction.ToolTip", "\xc8\xb1\xca\xa7???\xd6\xb6???" },
				{ "Succeed.ToolTip", "\xc8\xb1\xca\xa7????" },
				{ "ToolTip", "???\xc3\xbd???,??\xc4\xbf????\xca\xb1??\xc8\xb7??\xc3\xbf?\xce\xb6??\xdc\xb5??\xc3\xb3\xc9\xb9?" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"ECallResult",
				"ECallResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAgreementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_EAgreementType, Z_Construct_UPackage__Script_DataDriven(), TEXT("EAgreementType"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<EAgreementType>()
	{
		return EAgreementType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAgreementType(EAgreementType_StaticEnum, TEXT("/Script/DataDriven"), TEXT("EAgreementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_EAgreementType_Hash() { return 3155139225U; }
	UEnum* Z_Construct_UEnum_DataDriven_EAgreementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAgreementType"), 0, Get_Z_Construct_UEnum_DataDriven_EAgreementType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAgreementType::SelfObject", (int64)EAgreementType::SelfObject },
				{ "EAgreementType::OtherObject", (int64)EAgreementType::OtherObject },
				{ "EAgreementType::ClassOtherObject", (int64)EAgreementType::ClassOtherObject },
				{ "EAgreementType::SelfClass", (int64)EAgreementType::SelfClass },
				{ "EAgreementType::OtherClass", (int64)EAgreementType::OtherClass },
				{ "EAgreementType::All", (int64)EAgreementType::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.ToolTip", "????????\xd6\xae??????\xcd\xa8??" },
				{ "ClassOtherObject.ToolTip", "???????\xc4\xb6???\xd6\xae???\xc4\xb6???\xcd\xa8??" },
				{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
				{ "OtherClass.ToolTip", "?????????\xc4\xb6???\xcd\xa8??" },
				{ "OtherObject.ToolTip", "???????\xc4\xb6???\xcd\xa8??" },
				{ "SelfClass.ToolTip", "???????\xc4\xb6???????\xcd\xac????????????\xcd\xa8??,????????????\xd2\xaa\xc8\xb7?????????\xc4\xb6???????\xcd\xac\xd2\xbb????,??????\xcd\xac???\xcd\xb6???\xcd\xa8??" },
				{ "ToolTip", "????????\xd0\xad??" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"EAgreementType",
				"EAgreementType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBaseObjectState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_EBaseObjectState, Z_Construct_UPackage__Script_DataDriven(), TEXT("EBaseObjectState"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<EBaseObjectState>()
	{
		return EBaseObjectState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBaseObjectState(EBaseObjectState_StaticEnum, TEXT("/Script/DataDriven"), TEXT("EBaseObjectState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_EBaseObjectState_Hash() { return 278445137U; }
	UEnum* Z_Construct_UEnum_DataDriven_EBaseObjectState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBaseObjectState"), 0, Get_Z_Construct_UEnum_DataDriven_EBaseObjectState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBaseObjectState::Active", (int64)EBaseObjectState::Active },
				{ "EBaseObjectState::Stable", (int64)EBaseObjectState::Stable },
				{ "EBaseObjectState::Destroy", (int64)EBaseObjectState::Destroy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Destroy.ToolTip", "????\n?\xc8\xb6?" },
				{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
				{ "ToolTip", "BaseObject????????\xd7\xb4\xcc\xac" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"EBaseObjectState",
				"EBaseObjectState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBaseObjectLife_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_EBaseObjectLife, Z_Construct_UPackage__Script_DataDriven(), TEXT("EBaseObjectLife"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<EBaseObjectLife>()
	{
		return EBaseObjectLife_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBaseObjectLife(EBaseObjectLife_StaticEnum, TEXT("/Script/DataDriven"), TEXT("EBaseObjectLife"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_EBaseObjectLife_Hash() { return 1663667365U; }
	UEnum* Z_Construct_UEnum_DataDriven_EBaseObjectLife()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBaseObjectLife"), 0, Get_Z_Construct_UEnum_DataDriven_EBaseObjectLife_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBaseObjectLife::None", (int64)EBaseObjectLife::None },
				{ "EBaseObjectLife::Init", (int64)EBaseObjectLife::Init },
				{ "EBaseObjectLife::Loading", (int64)EBaseObjectLife::Loading },
				{ "EBaseObjectLife::Register", (int64)EBaseObjectLife::Register },
				{ "EBaseObjectLife::Enable", (int64)EBaseObjectLife::Enable },
				{ "EBaseObjectLife::Disable", (int64)EBaseObjectLife::Disable },
				{ "EBaseObjectLife::UnRegister", (int64)EBaseObjectLife::UnRegister },
				{ "EBaseObjectLife::UnLoading", (int64)EBaseObjectLife::UnLoading },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Init.ToolTip", "??\xca\xbc??\xd7\xb4\xcc\xac" },
				{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
				{ "ToolTip", "BaseObject????????" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"EBaseObjectLife",
				"EBaseObjectLife",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FUINature::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FUINature_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUINature, Z_Construct_UPackage__Script_DataDriven(), TEXT("UINature"), sizeof(FUINature), Get_Z_Construct_UScriptStruct_FUINature_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FUINature>()
{
	return FUINature::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUINature(FUINature::StaticStruct, TEXT("/Script/DataDriven"), TEXT("UINature"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFUINature
{
	FScriptStruct_DataDriven_StaticRegisterNativesFUINature()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UINature")),new UScriptStruct::TCppStructOps<FUINature>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFUINature;
	struct Z_Construct_UScriptStruct_FUINature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VAlign_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VAlign;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HAlign_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HAlign;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offsets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anchors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Anchors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanelLucenyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PanelLucenyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PanelLucenyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanelShowType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PanelShowType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PanelShowType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LayoutLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LayoutLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LayoutType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LayoutType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUINature_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUINature>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_VAlign_MetaData[] = {
		{ "Category", "UINature" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "Overlay?\xc4\xb4?\xd6\xb1????" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_VAlign = { "VAlign", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUINature, VAlign), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_VAlign_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_VAlign_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_HAlign_MetaData[] = {
		{ "Category", "UINature" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "Overlay??\xcb\xae\xc6\xbd????" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_HAlign = { "HAlign", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUINature, HAlign), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_HAlign_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_HAlign_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Offsets_MetaData[] = {
		{ "Category", "UINature" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "Canvas??Offset(pos, size)  Overlay??padding" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Offsets = { "Offsets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUINature, Offsets), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Offsets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Offsets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Anchors_MetaData[] = {
		{ "Category", "UINature" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "Canvas\xc3\xaa??" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Anchors = { "Anchors", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUINature, Anchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Anchors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Anchors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelLucenyType_MetaData[] = {
		{ "Category", "UINature" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "????????\xcd\xb8????" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelLucenyType = { "PanelLucenyType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUINature, PanelLucenyType), Z_Construct_UEnum_DataDriven_EPanelLucenyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelLucenyType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelLucenyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelLucenyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelShowType_MetaData[] = {
		{ "Category", "UINature" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelShowType = { "PanelShowType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUINature, PanelShowType), Z_Construct_UEnum_DataDriven_EPanelShowType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelShowType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelShowType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelShowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutLevel_MetaData[] = {
		{ "Category", "UINature" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "UI?\xe3\xbc\xb6, ??HideOther???\xcd\xb5?????\xca\xb9??, \xd6\xb8??\xd3\xb0???\xc4\xb7?\xce\xa7" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutLevel = { "LayoutLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUINature, LayoutLevel), Z_Construct_UEnum_DataDriven_ELayoutLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutType_MetaData[] = {
		{ "Category", "UINature" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutType = { "LayoutType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUINature, LayoutType), Z_Construct_UEnum_DataDriven_ELayoutType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUINature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_VAlign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_HAlign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Offsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Anchors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelLucenyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelLucenyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelShowType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelShowType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUINature_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		nullptr,
		&NewStructOps,
		"UINature",
		sizeof(FUINature),
		alignof(FUINature),
		Z_Construct_UScriptStruct_FUINature_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUINature()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUINature_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UINature"), sizeof(FUINature), Get_Z_Construct_UScriptStruct_FUINature_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUINature_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUINature_Hash() { return 386192797U; }
class UScriptStruct* FWealthURL::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FWealthURL_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthURL, Z_Construct_UPackage__Script_DataDriven(), TEXT("WealthURL"), sizeof(FWealthURL), Get_Z_Construct_UScriptStruct_FWealthURL_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FWealthURL>()
{
	return FWealthURL::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWealthURL(FWealthURL::StaticStruct, TEXT("/Script/DataDriven"), TEXT("WealthURL"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFWealthURL
{
	FScriptStruct_DataDriven_StaticRegisterNativesFWealthURL()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WealthURL")),new UScriptStruct::TCppStructOps<FWealthURL>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFWealthURL;
	struct Z_Construct_UScriptStruct_FWealthURL_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_WealthPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WealthPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthKind_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WealthKind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WealthName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthURL_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "????\xc8\xa1???\xd3\xbd\xe1\xb9\xb9??, ??????\xcd\xac?\xec\xb2\xbd????" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthURL_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthURL>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPtr_MetaData[] = {
		{ "Category", "WealthURL" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "??\xd4\xb4????" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPtr = { "WealthPtr", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthURL, WealthPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPtr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPath_MetaData[] = {
		{ "Category", "WealthURL" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "??\xd4\xb4????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPath = { "WealthPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthURL, WealthPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthKind_MetaData[] = {
		{ "Category", "WealthURL" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "??\xd4\xb4??????" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthKind = { "WealthKind", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthURL, WealthKind), METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthKind_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthKind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthName_MetaData[] = {
		{ "Category", "WealthURL" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "??\xd4\xb4??" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthName = { "WealthName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthURL, WealthName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthURL_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		nullptr,
		&NewStructOps,
		"WealthURL",
		sizeof(FWealthURL),
		alignof(FWealthURL),
		Z_Construct_UScriptStruct_FWealthURL_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthURL_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthURL_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthURL_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthURL()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWealthURL_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WealthURL"), sizeof(FWealthURL), Get_Z_Construct_UScriptStruct_FWealthURL_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWealthURL_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWealthURL_Hash() { return 3646672081U; }
class UScriptStruct* FClassWealthEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FClassWealthEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassWealthEntry, Z_Construct_UPackage__Script_DataDriven(), TEXT("ClassWealthEntry"), sizeof(FClassWealthEntry), Get_Z_Construct_UScriptStruct_FClassWealthEntry_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FClassWealthEntry>()
{
	return FClassWealthEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClassWealthEntry(FClassWealthEntry::StaticStruct, TEXT("/Script/DataDriven"), TEXT("ClassWealthEntry"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFClassWealthEntry
{
	FScriptStruct_DataDriven_StaticRegisterNativesFClassWealthEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClassWealthEntry")),new UScriptStruct::TCppStructOps<FClassWealthEntry>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFClassWealthEntry;
	struct Z_Construct_UScriptStruct_FClassWealthEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WealthClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_WealthPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthKind_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WealthKind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WealthName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WealthType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WealthType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "Class??\xd4\xb4?\xe1\xb9\xb9??" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassWealthEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "???\xd8\xb3????\xc4\xb6???" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass = { "WealthClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassWealthEntry, WealthClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr_MetaData[] = {
		{ "Category", "ClassWealthEntry" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "??\xd4\xb4????" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr = { "WealthPtr", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassWealthEntry, WealthPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind_MetaData[] = {
		{ "Category", "ClassWealthEntry" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "??\xd4\xb4??????" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind = { "WealthKind", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassWealthEntry, WealthKind), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName_MetaData[] = {
		{ "Category", "ClassWealthEntry" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "??\xd4\xb4??" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName = { "WealthName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassWealthEntry, WealthName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_MetaData[] = {
		{ "Category", "ClassWealthEntry" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "??\xd4\xb4????" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType = { "WealthType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassWealthEntry, WealthType), Z_Construct_UEnum_DataDriven_EWealthType, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassWealthEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		nullptr,
		&NewStructOps,
		"ClassWealthEntry",
		sizeof(FClassWealthEntry),
		alignof(FClassWealthEntry),
		Z_Construct_UScriptStruct_FClassWealthEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassWealthEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClassWealthEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClassWealthEntry"), sizeof(FClassWealthEntry), Get_Z_Construct_UScriptStruct_FClassWealthEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClassWealthEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClassWealthEntry_Hash() { return 2678235141U; }
class UScriptStruct* FObjectWealthEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FObjectWealthEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectWealthEntry, Z_Construct_UPackage__Script_DataDriven(), TEXT("ObjectWealthEntry"), sizeof(FObjectWealthEntry), Get_Z_Construct_UScriptStruct_FObjectWealthEntry_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FObjectWealthEntry>()
{
	return FObjectWealthEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObjectWealthEntry(FObjectWealthEntry::StaticStruct, TEXT("/Script/DataDriven"), TEXT("ObjectWealthEntry"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFObjectWealthEntry
{
	FScriptStruct_DataDriven_StaticRegisterNativesFObjectWealthEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ObjectWealthEntry")),new UScriptStruct::TCppStructOps<FObjectWealthEntry>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFObjectWealthEntry;
	struct Z_Construct_UScriptStruct_FObjectWealthEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WealthObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WealthPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthKind_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WealthKind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WealthName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "Object??\xd4\xb4?\xe1\xb9\xb9??" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectWealthEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "???\xd8\xb3????\xc4\xb6???" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject = { "WealthObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectWealthEntry, WealthObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath_MetaData[] = {
		{ "Category", "ObjectWealthEntry" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "??\xd4\xb4????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath = { "WealthPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectWealthEntry, WealthPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind_MetaData[] = {
		{ "Category", "ObjectWealthEntry" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "??\xd4\xb4??????" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind = { "WealthKind", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectWealthEntry, WealthKind), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName_MetaData[] = {
		{ "Category", "ObjectWealthEntry" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "??\xd4\xb4??" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName = { "WealthName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectWealthEntry, WealthName), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		nullptr,
		&NewStructOps,
		"ObjectWealthEntry",
		sizeof(FObjectWealthEntry),
		alignof(FObjectWealthEntry),
		Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectWealthEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObjectWealthEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObjectWealthEntry"), sizeof(FObjectWealthEntry), Get_Z_Construct_UScriptStruct_FObjectWealthEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObjectWealthEntry_Hash() { return 2355489113U; }
class UScriptStruct* FWealthWidget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FWealthWidget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthWidget, Z_Construct_UPackage__Script_DataDriven(), TEXT("WealthWidget"), sizeof(FWealthWidget), Get_Z_Construct_UScriptStruct_FWealthWidget_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FWealthWidget>()
{
	return FWealthWidget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWealthWidget(FWealthWidget::StaticStruct, TEXT("/Script/DataDriven"), TEXT("WealthWidget"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFWealthWidget
{
	FScriptStruct_DataDriven_StaticRegisterNativesFWealthWidget()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WealthWidget")),new UScriptStruct::TCppStructOps<FWealthWidget>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFWealthWidget;
	struct Z_Construct_UScriptStruct_FWealthWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WealthClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthWidget_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthWidget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthWidget>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass_MetaData[] = {
		{ "Category", "WealthWidget" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass = { "WealthClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthWidget, WealthClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthWidget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		Z_Construct_UScriptStruct_FWealthItem,
		&NewStructOps,
		"WealthWidget",
		sizeof(FWealthWidget),
		alignof(FWealthWidget),
		Z_Construct_UScriptStruct_FWealthWidget_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthWidget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthWidget_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthWidget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthWidget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWealthWidget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WealthWidget"), sizeof(FWealthWidget), Get_Z_Construct_UScriptStruct_FWealthWidget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWealthWidget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWealthWidget_Hash() { return 675924743U; }
class UScriptStruct* FWealthActor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FWealthActor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthActor, Z_Construct_UPackage__Script_DataDriven(), TEXT("WealthActor"), sizeof(FWealthActor), Get_Z_Construct_UScriptStruct_FWealthActor_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FWealthActor>()
{
	return FWealthActor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWealthActor(FWealthActor::StaticStruct, TEXT("/Script/DataDriven"), TEXT("WealthActor"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFWealthActor
{
	FScriptStruct_DataDriven_StaticRegisterNativesFWealthActor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WealthActor")),new UScriptStruct::TCppStructOps<FWealthActor>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFWealthActor;
	struct Z_Construct_UScriptStruct_FWealthActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WealthClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthActor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthActor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "WealthActor" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthActor, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass_MetaData[] = {
		{ "Category", "WealthActor" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass = { "WealthClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthActor, WealthClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		Z_Construct_UScriptStruct_FWealthItem,
		&NewStructOps,
		"WealthActor",
		sizeof(FWealthActor),
		alignof(FWealthActor),
		Z_Construct_UScriptStruct_FWealthActor_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthActor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthActor_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthActor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWealthActor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WealthActor"), sizeof(FWealthActor), Get_Z_Construct_UScriptStruct_FWealthActor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWealthActor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWealthActor_Hash() { return 1189322867U; }
class UScriptStruct* FWealthObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FWealthObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthObject, Z_Construct_UPackage__Script_DataDriven(), TEXT("WealthObject"), sizeof(FWealthObject), Get_Z_Construct_UScriptStruct_FWealthObject_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FWealthObject>()
{
	return FWealthObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWealthObject(FWealthObject::StaticStruct, TEXT("/Script/DataDriven"), TEXT("WealthObject"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFWealthObject
{
	FScriptStruct_DataDriven_StaticRegisterNativesFWealthObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WealthObject")),new UScriptStruct::TCppStructOps<FWealthObject>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFWealthObject;
	struct Z_Construct_UScriptStruct_FWealthObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WealthClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthObject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass_MetaData[] = {
		{ "Category", "WealthObject" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass = { "WealthClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthObject, WealthClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		Z_Construct_UScriptStruct_FWealthItem,
		&NewStructOps,
		"WealthObject",
		sizeof(FWealthObject),
		alignof(FWealthObject),
		Z_Construct_UScriptStruct_FWealthObject_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthObject_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWealthObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WealthObject"), sizeof(FWealthObject), Get_Z_Construct_UScriptStruct_FWealthObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWealthObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWealthObject_Hash() { return 3120276776U; }
class UScriptStruct* FWealthItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATADRIVEN_API uint32 Get_Z_Construct_UScriptStruct_FWealthItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthItem, Z_Construct_UPackage__Script_DataDriven(), TEXT("WealthItem"), sizeof(FWealthItem), Get_Z_Construct_UScriptStruct_FWealthItem_Hash());
	}
	return Singleton;
}
template<> DATADRIVEN_API UScriptStruct* StaticStruct<FWealthItem>()
{
	return FWealthItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWealthItem(FWealthItem::StaticStruct, TEXT("/Script/DataDriven"), TEXT("WealthItem"), false, nullptr, nullptr);
static struct FScriptStruct_DataDriven_StaticRegisterNativesFWealthItem
{
	FScriptStruct_DataDriven_StaticRegisterNativesFWealthItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WealthItem")),new UScriptStruct::TCppStructOps<FWealthItem>);
	}
} ScriptStruct_DataDriven_StaticRegisterNativesFWealthItem;
	struct Z_Construct_UScriptStruct_FWealthItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName_MetaData[] = {
		{ "Category", "WealthItem" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthItem, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "WealthItem" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWealthItem, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjectName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjectName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
		nullptr,
		&NewStructOps,
		"WealthItem",
		sizeof(FWealthItem),
		alignof(FWealthItem),
		Z_Construct_UScriptStruct_FWealthItem_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWealthItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WealthItem"), sizeof(FWealthItem), Get_Z_Construct_UScriptStruct_FWealthItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWealthItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWealthItem_Hash() { return 4129531813U; }
	void UDDTypes::StaticRegisterNativesUDDTypes()
	{
	}
	UClass* Z_Construct_UClass_UDDTypes_NoRegister()
	{
		return UDDTypes::StaticClass();
	}
	struct Z_Construct_UClass_UDDTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDCommon/DDTypes.h" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDDTypes_Statics::ClassParams = {
		&UDDTypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDDTypes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDDTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDTypes, 3861587802);
	template<> DATADRIVEN_API UClass* StaticClass<UDDTypes>()
	{
		return UDDTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDTypes(Z_Construct_UClass_UDDTypes, &UDDTypes::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDDTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDTypes);
	void UWealthData::StaticRegisterNativesUWealthData()
	{
	}
	UClass* Z_Construct_UClass_UWealthData_NoRegister()
	{
		return UWealthData::StaticClass();
	}
	struct Z_Construct_UClass_UWealthData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WealthURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WealthURL;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WealthURL_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassWealthData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClassWealthData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClassWealthData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectWealthData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectWealthData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectWealthData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoWidgetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AutoWidgetData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoWidgetData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoActorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AutoActorData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoActorData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoObjectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AutoObjectData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoObjectData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWealthData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDCommon/DDTypes.h" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_WealthURL_MetaData[] = {
		{ "Category", "WealthData" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "??\xd4\xb4???\xd3\xbc???" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_WealthURL = { "WealthURL", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWealthData, WealthURL), METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_WealthURL_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_WealthURL_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_WealthURL_Inner = { "WealthURL", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWealthURL, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_ClassWealthData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "Class??\xd4\xb4???\xd3\xbc???" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ClassWealthData = { "ClassWealthData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWealthData, ClassWealthData), METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_ClassWealthData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_ClassWealthData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ClassWealthData_Inner = { "ClassWealthData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClassWealthEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "Object??\xd4\xb4???\xd3\xbc???" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData = { "ObjectWealthData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWealthData, ObjectWealthData), METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_Inner = { "ObjectWealthData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FObjectWealthEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "?\xd4\xb6????\xc9\xb5?Widget" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData = { "AutoWidgetData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWealthData, AutoWidgetData), METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_Inner = { "AutoWidgetData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWealthWidget, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "?\xd4\xb6????\xc9\xb5?Actor" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData = { "AutoActorData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWealthData, AutoActorData), METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_Inner = { "AutoActorData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWealthActor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "?\xd4\xb6????\xc9\xb5?Object" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData = { "AutoObjectData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWealthData, AutoObjectData), METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_Inner = { "AutoObjectData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWealthObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleName_MetaData[] = {
		{ "Category", "WealthData" },
		{ "ModuleRelativePath", "Public/DDCommon/DDTypes.h" },
		{ "ToolTip", "\xc4\xa3??????, ????DataAsset?\xc2\xb5???\xd4\xb4???\xc9\xb5\xc4\xb6???\xc4\xac??\xd7\xa2?\xe1\xb5\xbdModuleName??\xd3\xa6??\xc4\xa3??\n????\xce\xaa????\xcb\xb5????Asset\xca\xb9???\xda\xb6???\xc4\xa3????, ?\xd4\xb6????\xc9\xb5\xc4\xb6???\xd7\xa2?\xe1\xb5\xbd??Asset???\xc3\xb5?\xc4\xa3????" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWealthData, ModuleName), METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWealthData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_WealthURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_WealthURL_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ClassWealthData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ClassWealthData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWealthData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWealthData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWealthData_Statics::ClassParams = {
		&UWealthData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWealthData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWealthData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWealthData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWealthData, 977953889);
	template<> DATADRIVEN_API UClass* StaticClass<UWealthData>()
	{
		return UWealthData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWealthData(Z_Construct_UClass_UWealthData, &UWealthData::StaticClass, TEXT("/Script/DataDriven"), TEXT("UWealthData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWealthData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
