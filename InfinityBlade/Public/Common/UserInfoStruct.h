// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UserInfoStruct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FUserInfoStruct
{
	GENERATED_BODY()

	FUserInfoStruct();

public:

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		FString NickName;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		FString PassWord;

};
