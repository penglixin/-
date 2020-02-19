// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExcelDefine.h"
#include "ExcelBlueprintFunctionLibrary.generated.h"


/**
 * 
 */
UCLASS()
class EXCELOPERATION_API UExcelBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:


public:

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "LoadExcel", Keywords = "LoadExcel"), Category = "ExcelOperation")
		static void LoadExcelInfo(TArray<FExcelFiveParamStruct>& FiveParamOutResult, 
								  TArray<FExcelSixParamStruct>& SixParamOutResult, 
								  TArray<FExcelSevenParamStruct>& SevenParamOutResult,
								  TArray<FExcelEightParamStruct>& EightParamOutResult,
								  TArray<FExcelNineParamStruct>& NineParamOutResult,
								  TArray<FExcelTenParamStruct>& TenParamOutResult,
								  TArray<FExcelElevenParamStruct>& ElevenParamOutResult,
			                      TArray<FExcelTwelveParamStruct>& TwelveParamOutResult,
								  int32& ColumnCount);

	UFUNCTION(meta = (DisplayName = "SearchExcel", Keywords = "LoadExcel"), Category = "ExcelOperation")
		static void SearchAllExcel(TArray<FString>& FoundFiles, FString& UsedFile);

	static void GetFiveParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelFiveParamStruct>& FiveParamOutResult);
	static void GetSixParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelSixParamStruct>& SixParamOutResult);
	static void GetSevenParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelSevenParamStruct>& SevenParamOutResult);
	static void GetEightParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelEightParamStruct>& EightParamOutResult);
	static void GetNineParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelNineParamStruct>& NineParamOutResult);
	static void GetTenParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelTenParamStruct>& TenParamOutResult);
	static void GetElevenParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelElevenParamStruct>& ElevenParamOutResult);
	static void GetTwelveParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelTwelveParamStruct>& TwelveParamOutResult);
};
