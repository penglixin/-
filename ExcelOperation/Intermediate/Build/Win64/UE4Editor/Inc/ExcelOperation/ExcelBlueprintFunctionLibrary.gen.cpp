// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExcelOperation/Public/ExcelBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExcelBlueprintFunctionLibrary() {}
// Cross Module References
	EXCELOPERATION_API UClass* Z_Construct_UClass_UExcelBlueprintFunctionLibrary_NoRegister();
	EXCELOPERATION_API UClass* Z_Construct_UClass_UExcelBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ExcelOperation();
	EXCELOPERATION_API UFunction* Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo();
	EXCELOPERATION_API UScriptStruct* Z_Construct_UScriptStruct_FExcelTwelveParamStruct();
	EXCELOPERATION_API UScriptStruct* Z_Construct_UScriptStruct_FExcelElevenParamStruct();
	EXCELOPERATION_API UScriptStruct* Z_Construct_UScriptStruct_FExcelTenParamStruct();
	EXCELOPERATION_API UScriptStruct* Z_Construct_UScriptStruct_FExcelNineParamStruct();
	EXCELOPERATION_API UScriptStruct* Z_Construct_UScriptStruct_FExcelEightParamStruct();
	EXCELOPERATION_API UScriptStruct* Z_Construct_UScriptStruct_FExcelSevenParamStruct();
	EXCELOPERATION_API UScriptStruct* Z_Construct_UScriptStruct_FExcelSixParamStruct();
	EXCELOPERATION_API UScriptStruct* Z_Construct_UScriptStruct_FExcelFiveParamStruct();
	EXCELOPERATION_API UFunction* Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel();
// End Cross Module References
	void UExcelBlueprintFunctionLibrary::StaticRegisterNativesUExcelBlueprintFunctionLibrary()
	{
		UClass* Class = UExcelBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadExcelInfo", &UExcelBlueprintFunctionLibrary::execLoadExcelInfo },
			{ "SearchAllExcel", &UExcelBlueprintFunctionLibrary::execSearchAllExcel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics
	{
		struct ExcelBlueprintFunctionLibrary_eventLoadExcelInfo_Parms
		{
			TArray<FExcelFiveParamStruct> FiveParamOutResult;
			TArray<FExcelSixParamStruct> SixParamOutResult;
			TArray<FExcelSevenParamStruct> SevenParamOutResult;
			TArray<FExcelEightParamStruct> EightParamOutResult;
			TArray<FExcelNineParamStruct> NineParamOutResult;
			TArray<FExcelTenParamStruct> TenParamOutResult;
			TArray<FExcelElevenParamStruct> ElevenParamOutResult;
			TArray<FExcelTwelveParamStruct> TwelveParamOutResult;
			int32 ColumnCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColumnCount;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TwelveParamOutResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwelveParamOutResult_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ElevenParamOutResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ElevenParamOutResult_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TenParamOutResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TenParamOutResult_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NineParamOutResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NineParamOutResult_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EightParamOutResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EightParamOutResult_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SevenParamOutResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SevenParamOutResult_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SixParamOutResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SixParamOutResult_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FiveParamOutResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FiveParamOutResult_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_ColumnCount = { "ColumnCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBlueprintFunctionLibrary_eventLoadExcelInfo_Parms, ColumnCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_TwelveParamOutResult = { "TwelveParamOutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBlueprintFunctionLibrary_eventLoadExcelInfo_Parms, TwelveParamOutResult), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_TwelveParamOutResult_Inner = { "TwelveParamOutResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExcelTwelveParamStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_ElevenParamOutResult = { "ElevenParamOutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBlueprintFunctionLibrary_eventLoadExcelInfo_Parms, ElevenParamOutResult), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_ElevenParamOutResult_Inner = { "ElevenParamOutResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExcelElevenParamStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_TenParamOutResult = { "TenParamOutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBlueprintFunctionLibrary_eventLoadExcelInfo_Parms, TenParamOutResult), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_TenParamOutResult_Inner = { "TenParamOutResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExcelTenParamStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_NineParamOutResult = { "NineParamOutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBlueprintFunctionLibrary_eventLoadExcelInfo_Parms, NineParamOutResult), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_NineParamOutResult_Inner = { "NineParamOutResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExcelNineParamStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_EightParamOutResult = { "EightParamOutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBlueprintFunctionLibrary_eventLoadExcelInfo_Parms, EightParamOutResult), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_EightParamOutResult_Inner = { "EightParamOutResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExcelEightParamStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_SevenParamOutResult = { "SevenParamOutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBlueprintFunctionLibrary_eventLoadExcelInfo_Parms, SevenParamOutResult), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_SevenParamOutResult_Inner = { "SevenParamOutResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExcelSevenParamStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_SixParamOutResult = { "SixParamOutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBlueprintFunctionLibrary_eventLoadExcelInfo_Parms, SixParamOutResult), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_SixParamOutResult_Inner = { "SixParamOutResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExcelSixParamStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_FiveParamOutResult = { "FiveParamOutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBlueprintFunctionLibrary_eventLoadExcelInfo_Parms, FiveParamOutResult), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_FiveParamOutResult_Inner = { "FiveParamOutResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExcelFiveParamStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_ColumnCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_TwelveParamOutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_TwelveParamOutResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_ElevenParamOutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_ElevenParamOutResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_TenParamOutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_TenParamOutResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_NineParamOutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_NineParamOutResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_EightParamOutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_EightParamOutResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_SevenParamOutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_SevenParamOutResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_SixParamOutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_SixParamOutResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_FiveParamOutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::NewProp_FiveParamOutResult_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ExcelOperation" },
		{ "DisplayName", "LoadExcel" },
		{ "Keywords", "LoadExcel" },
		{ "ModuleRelativePath", "Public/ExcelBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExcelBlueprintFunctionLibrary, nullptr, "LoadExcelInfo", sizeof(ExcelBlueprintFunctionLibrary_eventLoadExcelInfo_Parms), Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics
	{
		struct ExcelBlueprintFunctionLibrary_eventSearchAllExcel_Parms
		{
			TArray<FString> FoundFiles;
			FString UsedFile;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UsedFile;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoundFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FoundFiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics::NewProp_UsedFile = { "UsedFile", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBlueprintFunctionLibrary_eventSearchAllExcel_Parms, UsedFile), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics::NewProp_FoundFiles = { "FoundFiles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBlueprintFunctionLibrary_eventSearchAllExcel_Parms, FoundFiles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics::NewProp_FoundFiles_Inner = { "FoundFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics::NewProp_UsedFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics::NewProp_FoundFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics::NewProp_FoundFiles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ExcelOperation" },
		{ "DisplayName", "SearchExcel" },
		{ "Keywords", "LoadExcel" },
		{ "ModuleRelativePath", "Public/ExcelBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExcelBlueprintFunctionLibrary, nullptr, "SearchAllExcel", sizeof(ExcelBlueprintFunctionLibrary_eventSearchAllExcel_Parms), Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExcelBlueprintFunctionLibrary_NoRegister()
	{
		return UExcelBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UExcelBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExcelBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ExcelOperation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExcelBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_LoadExcelInfo, "LoadExcelInfo" }, // 2378644664
		{ &Z_Construct_UFunction_UExcelBlueprintFunctionLibrary_SearchAllExcel, "SearchAllExcel" }, // 4072444467
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExcelBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExcelBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ExcelBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExcelBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExcelBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExcelBlueprintFunctionLibrary_Statics::ClassParams = {
		&UExcelBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExcelBlueprintFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UExcelBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExcelBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExcelBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExcelBlueprintFunctionLibrary, 3301557374);
	template<> EXCELOPERATION_API UClass* StaticClass<UExcelBlueprintFunctionLibrary>()
	{
		return UExcelBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExcelBlueprintFunctionLibrary(Z_Construct_UClass_UExcelBlueprintFunctionLibrary, &UExcelBlueprintFunctionLibrary::StaticClass, TEXT("/Script/ExcelOperation"), TEXT("UExcelBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExcelBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
