// Fill out your copyright notice in the Description page of Project Settings.


#include "ExcelBlueprintFunctionLibrary.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Core/Public/HAL/FileManager.h"
#include "Engine/Engine.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "Runtime/Core/Public/Serialization/Csv/CsvParser.h"


void UExcelBlueprintFunctionLibrary::LoadExcelInfo(TArray<FExcelFiveParamStruct>& FiveParamOutResult, TArray<FExcelSixParamStruct>& SixParamOutResult, TArray<FExcelSevenParamStruct>& SevenParamOutResult, TArray<FExcelEightParamStruct>& EightParamOutResult, TArray<FExcelNineParamStruct>& NineParamOutResult, TArray<FExcelTenParamStruct>& TenParamOutResult, TArray<FExcelElevenParamStruct>& ElevenParamOutResult, TArray<FExcelTwelveParamStruct>& TwelveParamOutResult, int32& ColumnCount)
{
	TArray<FString> t_str;
	TArray<FString> AllFiles;
	FString csvFile;
	SearchAllExcel(AllFiles, csvFile);
	if (FPaths::FileExists(csvFile))
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, "Find .csv Successful!");
		FString FileContent;  //把Excel文件所有内容放入FileContent
		FFileHelper::LoadFileToString(FileContent, *csvFile);
		FCsvParser* csvfiles = new FCsvParser(FileContent);
		TArray<TArray<const TCHAR*>> content = csvfiles->GetRows();
		for (TArray<const TCHAR*>& ite : content)
			for (const TCHAR*& chr : ite)
				t_str.Add(chr);
		int key = 0;
		ColumnCount = t_str.Num() / content.Num();
		switch (ColumnCount)
		{
		case 5:
			GetFiveParamStruct(ColumnCount, t_str, FiveParamOutResult);
			break;
		case 6:
			GetSixParamStruct(ColumnCount, t_str, SixParamOutResult);
			break;
		case 7:
			GetSevenParamStruct(ColumnCount, t_str, SevenParamOutResult);
			break;
		case 8:
			GetEightParamStruct(ColumnCount, t_str, EightParamOutResult);
			break;
		case 9:
			GetNineParamStruct(ColumnCount, t_str, NineParamOutResult);
			break;
		case 10:
			GetTenParamStruct(ColumnCount, t_str, TenParamOutResult);
			break;
		case 11:
			GetElevenParamStruct(ColumnCount, t_str, ElevenParamOutResult);
			break;
		case 12:
			GetTwelveParamStruct(ColumnCount, t_str, TwelveParamOutResult);
			break;
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, "Find .csv Failed!");
	}
}

void UExcelBlueprintFunctionLibrary::SearchAllExcel(TArray<FString>& FoundFiles, FString& UsedFile)
{
	FString FilePath = FPaths::ProjectDir() + "CSV/";
	FString SearchedFile = FilePath + "*.csv";
	TArray<FString> FoundedFiles;
	IFileManager::Get().FindFiles(FoundedFiles, *SearchedFile, true, false);
	FString Searchfile = "";
	for (int i = 0;i < FoundedFiles.Num();i++)
	{
		Searchfile = FilePath + FoundedFiles[i];
		FoundFiles.Add(Searchfile);
	}
	if (FoundFiles.Num() > 0)
	{
		UsedFile = FoundFiles[0];
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, "The Path Has No .csv File!");
	}
}

void UExcelBlueprintFunctionLibrary::GetFiveParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelFiveParamStruct>& FiveParamOutResult)
{
	int key = 0;
	for (int i = 0; i < t_str.Num(); i++)
	{
		if (i % ColumnCount == 0)
		{
			if (key != 0)
			{
				FExcelFiveParamStruct tempdata;
				tempdata.FirstRow = FName(*t_str[i]);
				tempdata.Info1 = (t_str[i + 1]);
				tempdata.Info2 = (t_str[i + 2]);
				tempdata.Info3 = (t_str[i + 3]);
				tempdata.Info4 = (t_str[i + 4]);
				FiveParamOutResult.Add(tempdata);
			}
			key++;
		}
	}
}

void UExcelBlueprintFunctionLibrary::GetSixParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelSixParamStruct>& SixParamOutResult)
{
	int key = 0;
	for (int i = 0; i < t_str.Num(); i++)
	{
		if (i % ColumnCount == 0)
		{
			if (key != 0)
			{
				FExcelSixParamStruct tempdata;
				tempdata.FirstRow = FName(*t_str[i]);
				tempdata.Info1 = (t_str[i + 1]);
				tempdata.Info2 = (t_str[i + 2]);
				tempdata.Info3 = (t_str[i + 3]);
				tempdata.Info4 = (t_str[i + 4]);
				tempdata.Info5 = (t_str[i + 5]);
				SixParamOutResult.Add(tempdata);
			}
			key++;
		}
	}
}

void UExcelBlueprintFunctionLibrary::GetSevenParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelSevenParamStruct>& SevenParamOutResult)
{
	int key = 0;
	for (int i = 0; i < t_str.Num(); i++)
	{
		if (i % ColumnCount == 0)
		{
			if (key != 0)
			{
				FExcelSevenParamStruct tempdata;
				tempdata.FirstRow = FName(*t_str[i]);
				tempdata.Info1 = (t_str[i + 1]);
				tempdata.Info2 = (t_str[i + 2]);
				tempdata.Info3 = (t_str[i + 3]);
				tempdata.Info4 = (t_str[i + 4]);
				tempdata.Info5 = (t_str[i + 5]);
				tempdata.Info6 = (t_str[i + 6]);
				SevenParamOutResult.Add(tempdata);
			}
			key++;
		}
	}
}

void UExcelBlueprintFunctionLibrary::GetEightParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelEightParamStruct>& EightParamOutResult)
{
	int key = 0;
	for (int i = 0; i < t_str.Num(); i++)
	{
		if (i % ColumnCount == 0)
		{
			if (key != 0)
			{
				FExcelEightParamStruct tempdata;
				tempdata.FirstRow = FName(*t_str[i]);
				tempdata.Info1 = (t_str[i + 1]);
				tempdata.Info2 = (t_str[i + 2]);
				tempdata.Info3 = (t_str[i + 3]);
				tempdata.Info4 = (t_str[i + 4]);
				tempdata.Info5 = (t_str[i + 5]);
				tempdata.Info6 = (t_str[i + 6]);
				tempdata.Info7 = (t_str[i + 7]);
				EightParamOutResult.Add(tempdata);
			}
			key++;
		}
	}
}

void UExcelBlueprintFunctionLibrary::GetNineParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelNineParamStruct>& NineParamOutResult)
{
	int key = 0;
	for (int i = 0; i < t_str.Num(); i++)
	{
		if (i % ColumnCount == 0)
		{
			if (key != 0)
			{
				FExcelNineParamStruct tempdata;
				tempdata.FirstRow = FName(*t_str[i]);
				tempdata.Info1 = (t_str[i + 1]);
				tempdata.Info2 = (t_str[i + 2]);
				tempdata.Info3 = (t_str[i + 3]);
				tempdata.Info4 = (t_str[i + 4]);
				tempdata.Info5 = (t_str[i + 5]);
				tempdata.Info6 = (t_str[i + 6]);
				tempdata.Info7 = (t_str[i + 7]);
				tempdata.Info8 = (t_str[i + 8]);
				NineParamOutResult.Add(tempdata);
			}
			key++;
		}
	}
}

void UExcelBlueprintFunctionLibrary::GetTenParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelTenParamStruct>& TenParamOutResult)
{
	int key = 0;
	for (int i = 0; i < t_str.Num(); i++)
	{
		if (i % ColumnCount == 0)
		{
			if (key != 0)
			{
				FExcelTenParamStruct tempdata;
				tempdata.FirstRow = FName(*t_str[i]);
				tempdata.Info1 = (t_str[i + 1]);
				tempdata.Info2 = (t_str[i + 2]);
				tempdata.Info3 = (t_str[i + 3]);
				tempdata.Info4 = (t_str[i + 4]);
				tempdata.Info5 = (t_str[i + 5]);
				tempdata.Info6 = (t_str[i + 6]);
				tempdata.Info7 = (t_str[i + 7]);
				tempdata.Info8 = (t_str[i + 8]);
				tempdata.Info9 = (t_str[i + 9]);
				TenParamOutResult.Add(tempdata);
			}
			key++;
		}
	}
}

void UExcelBlueprintFunctionLibrary::GetElevenParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelElevenParamStruct>& ElevenParamOutResult)
{
	int key = 0;
	for (int i = 0; i < t_str.Num(); i++)
	{
		if (i % ColumnCount == 0)
		{
			if (key != 0)
			{
				FExcelElevenParamStruct tempdata;
				tempdata.FirstRow = FName(*t_str[i]);
				tempdata.Info1 = (t_str[i + 1]);
				tempdata.Info2 = (t_str[i + 2]);
				tempdata.Info3 = (t_str[i + 3]);
				tempdata.Info4 = (t_str[i + 4]);
				tempdata.Info5 = (t_str[i + 5]);
				tempdata.Info6 = (t_str[i + 6]);
				tempdata.Info7 = (t_str[i + 7]);
				tempdata.Info8 = (t_str[i + 8]);
				tempdata.Info9 = (t_str[i + 9]);
				tempdata.Info10 = (t_str[i + 10]);
				ElevenParamOutResult.Add(tempdata);
			}
			key++;
		}
	}
}

void UExcelBlueprintFunctionLibrary::GetTwelveParamStruct(int32 ColumnCount, TArray<FString> t_str, TArray<FExcelTwelveParamStruct>& TwelveParamOutResult)
{
	int key = 0;
	for (int i = 0; i < t_str.Num(); i++)
	{
		if (i % ColumnCount == 0)
		{
			if (key != 0)
			{
				FExcelTwelveParamStruct tempdata;
				tempdata.FirstRow = FName(*t_str[i]);
				tempdata.Info1 = (t_str[i + 1]);
				tempdata.Info2 = (t_str[i + 2]);
				tempdata.Info3 = (t_str[i + 3]);
				tempdata.Info4 = (t_str[i + 4]);
				tempdata.Info5 = (t_str[i + 5]);
				tempdata.Info6 = (t_str[i + 6]);
				tempdata.Info7 = (t_str[i + 7]);
				tempdata.Info8 = (t_str[i + 8]);
				tempdata.Info9 = (t_str[i + 9]);
				tempdata.Info10 = (t_str[i + 10]);
				tempdata.Info11 = (t_str[i + 11]);
				TwelveParamOutResult.Add(tempdata);
			}
			key++;
		}
	}
}
