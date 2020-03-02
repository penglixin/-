// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Public/Common/UserInfoStruct.h"
#include "UserInfoSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class INFINITYBLADE_API UUserInfoSaveGame : public USaveGame
{
	GENERATED_BODY()

	UUserInfoSaveGame();

private:

	UPROPERTY()
		TArray<FUserInfoStruct> UserInfos;


public:

	void SaveToUserInfo(FUserInfoStruct Info);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		FUserInfoStruct GetInfoFromIndex(int32 index);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		TArray<FUserInfoStruct>  GetUserInfos();

	UFUNCTION(BlueprintCallable)
		bool IsExist(FString NickName);

	UFUNCTION()
		bool CheckNameAndPassword(FString NickName, FString PassWord);


};
