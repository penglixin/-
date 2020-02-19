// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FExcelFiveParamStruct;
struct FExcelSixParamStruct;
struct FExcelSevenParamStruct;
struct FExcelEightParamStruct;
struct FExcelNineParamStruct;
struct FExcelTenParamStruct;
struct FExcelElevenParamStruct;
struct FExcelTwelveParamStruct;
#ifdef EXCELOPERATION_ExcelBlueprintFunctionLibrary_generated_h
#error "ExcelBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in ExcelBlueprintFunctionLibrary.h"
#endif
#define EXCELOPERATION_ExcelBlueprintFunctionLibrary_generated_h

#define ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSearchAllExcel) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_FoundFiles); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_UsedFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UExcelBlueprintFunctionLibrary::SearchAllExcel(Z_Param_Out_FoundFiles,Z_Param_Out_UsedFile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadExcelInfo) \
	{ \
		P_GET_TARRAY_REF(FExcelFiveParamStruct,Z_Param_Out_FiveParamOutResult); \
		P_GET_TARRAY_REF(FExcelSixParamStruct,Z_Param_Out_SixParamOutResult); \
		P_GET_TARRAY_REF(FExcelSevenParamStruct,Z_Param_Out_SevenParamOutResult); \
		P_GET_TARRAY_REF(FExcelEightParamStruct,Z_Param_Out_EightParamOutResult); \
		P_GET_TARRAY_REF(FExcelNineParamStruct,Z_Param_Out_NineParamOutResult); \
		P_GET_TARRAY_REF(FExcelTenParamStruct,Z_Param_Out_TenParamOutResult); \
		P_GET_TARRAY_REF(FExcelElevenParamStruct,Z_Param_Out_ElevenParamOutResult); \
		P_GET_TARRAY_REF(FExcelTwelveParamStruct,Z_Param_Out_TwelveParamOutResult); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ColumnCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UExcelBlueprintFunctionLibrary::LoadExcelInfo(Z_Param_Out_FiveParamOutResult,Z_Param_Out_SixParamOutResult,Z_Param_Out_SevenParamOutResult,Z_Param_Out_EightParamOutResult,Z_Param_Out_NineParamOutResult,Z_Param_Out_TenParamOutResult,Z_Param_Out_ElevenParamOutResult,Z_Param_Out_TwelveParamOutResult,Z_Param_Out_ColumnCount); \
		P_NATIVE_END; \
	}


#define ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSearchAllExcel) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_FoundFiles); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_UsedFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UExcelBlueprintFunctionLibrary::SearchAllExcel(Z_Param_Out_FoundFiles,Z_Param_Out_UsedFile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadExcelInfo) \
	{ \
		P_GET_TARRAY_REF(FExcelFiveParamStruct,Z_Param_Out_FiveParamOutResult); \
		P_GET_TARRAY_REF(FExcelSixParamStruct,Z_Param_Out_SixParamOutResult); \
		P_GET_TARRAY_REF(FExcelSevenParamStruct,Z_Param_Out_SevenParamOutResult); \
		P_GET_TARRAY_REF(FExcelEightParamStruct,Z_Param_Out_EightParamOutResult); \
		P_GET_TARRAY_REF(FExcelNineParamStruct,Z_Param_Out_NineParamOutResult); \
		P_GET_TARRAY_REF(FExcelTenParamStruct,Z_Param_Out_TenParamOutResult); \
		P_GET_TARRAY_REF(FExcelElevenParamStruct,Z_Param_Out_ElevenParamOutResult); \
		P_GET_TARRAY_REF(FExcelTwelveParamStruct,Z_Param_Out_TwelveParamOutResult); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ColumnCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UExcelBlueprintFunctionLibrary::LoadExcelInfo(Z_Param_Out_FiveParamOutResult,Z_Param_Out_SixParamOutResult,Z_Param_Out_SevenParamOutResult,Z_Param_Out_EightParamOutResult,Z_Param_Out_NineParamOutResult,Z_Param_Out_TenParamOutResult,Z_Param_Out_ElevenParamOutResult,Z_Param_Out_TwelveParamOutResult,Z_Param_Out_ColumnCount); \
		P_NATIVE_END; \
	}


#define ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExcelBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UExcelBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UExcelBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExcelOperation"), NO_API) \
	DECLARE_SERIALIZER(UExcelBlueprintFunctionLibrary)


#define ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUExcelBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UExcelBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UExcelBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExcelOperation"), NO_API) \
	DECLARE_SERIALIZER(UExcelBlueprintFunctionLibrary)


#define ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExcelBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExcelBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExcelBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExcelBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExcelBlueprintFunctionLibrary(UExcelBlueprintFunctionLibrary&&); \
	NO_API UExcelBlueprintFunctionLibrary(const UExcelBlueprintFunctionLibrary&); \
public:


#define ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExcelBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExcelBlueprintFunctionLibrary(UExcelBlueprintFunctionLibrary&&); \
	NO_API UExcelBlueprintFunctionLibrary(const UExcelBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExcelBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExcelBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExcelBlueprintFunctionLibrary)


#define ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_14_PROLOG
#define ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_RPC_WRAPPERS \
	ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_INCLASS \
	ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXCELOPERATION_API UClass* StaticClass<class UExcelBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ExcelOperation_HostProject_Plugins_ExcelOperation_Source_ExcelOperation_Public_ExcelBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
