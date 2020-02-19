// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDriven/Public/DDGame/DGTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDGTypes() {}
// Cross Module References
	DATADRIVEN_API UEnum* Z_Construct_UEnum_DataDriven_EDDExampleModule();
	UPackage* Z_Construct_UPackage__Script_DataDriven();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDGTypes_NoRegister();
	DATADRIVEN_API UClass* Z_Construct_UClass_UDGTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EDDExampleModule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataDriven_EDDExampleModule, Z_Construct_UPackage__Script_DataDriven(), TEXT("EDDExampleModule"));
		}
		return Singleton;
	}
	template<> DATADRIVEN_API UEnum* StaticEnum<EDDExampleModule>()
	{
		return EDDExampleModule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDDExampleModule(EDDExampleModule_StaticEnum, TEXT("/Script/DataDriven"), TEXT("EDDExampleModule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataDriven_EDDExampleModule_Hash() { return 121688986U; }
	UEnum* Z_Construct_UEnum_DataDriven_EDDExampleModule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDDExampleModule"), 0, Get_Z_Construct_UEnum_DataDriven_EDDExampleModule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDDExampleModule::Center", (int64)EDDExampleModule::Center },
				{ "EDDExampleModule::HUD", (int64)EDDExampleModule::HUD },
				{ "EDDExampleModule::Data", (int64)EDDExampleModule::Data },
				{ "EDDExampleModule::Player", (int64)EDDExampleModule::Player },
				{ "EDDExampleModule::NPC", (int64)EDDExampleModule::NPC },
				{ "EDDExampleModule::Bots", (int64)EDDExampleModule::Bots },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bots.ToolTip", "NPC\xc4\xa3??" },
				{ "Data.ToolTip", "UI\xc4\xa3??, \xd4\xbc?????\xda\xb5\xda\xb6?\xce\xbb, UI???\xdc\xbb?\xd6\xb1??\xca\xb9??????1\xc8\xa5??\xc8\xa1HUD\xc4\xa3??, ??????\xca\xb9??UI????, ????\xd2\xaa\xc7\xbf???\xda\xb5\xda\xb6?\xce\xbb" },
				{ "HUD.ToolTip", "????\xc4\xa3??, \xd4\xbc?????\xda\xb5?\xd2\xbb\xce\xbb" },
				{ "ModuleRelativePath", "Public/DDGame/DGTypes.h" },
				{ "NPC.ToolTip", "????\xc4\xa3??" },
				{ "Player.ToolTip", "????\xc4\xa3??" },
				{ "ToolTip", "********************************************************************//\xca\xbe??\xc4\xa3??\xc3\xb6??, \xc4\xa3??\xd4\xbc??, ????\xd2\xaa\xca\xb9??DataDriven??????UI????, ??\xd2\xbb??\xd2\xaa??HUD\xc4\xa3?????\xda\xb5\xda\xb6?\xce\xbb, UIFrame???\xdc\xb9?????\xca\xbc????HUD\xc4\xa3????" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataDriven,
				nullptr,
				"EDDExampleModule",
				"EDDExampleModule",
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
	void UDGTypes::StaticRegisterNativesUDGTypes()
	{
	}
	UClass* Z_Construct_UClass_UDGTypes_NoRegister()
	{
		return UDGTypes::StaticClass();
	}
	struct Z_Construct_UClass_UDGTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDGTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDGTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DDGame/DGTypes.h" },
		{ "ModuleRelativePath", "Public/DDGame/DGTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDGTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDGTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDGTypes_Statics::ClassParams = {
		&UDGTypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDGTypes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDGTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDGTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDGTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDGTypes, 402711939);
	template<> DATADRIVEN_API UClass* StaticClass<UDGTypes>()
	{
		return UDGTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDGTypes(Z_Construct_UClass_UDGTypes, &UDGTypes::StaticClass, TEXT("/Script/DataDriven"), TEXT("UDGTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDGTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
