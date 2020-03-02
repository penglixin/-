// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "ItemInfo.generated.h"

/**
 * 
 */ 
UENUM(BlueprintType)
enum class EItemType:uint8
{
	HP UMETA(DisplayName = "HP"),
	MP UMETA(DisplayName = "MP")
};

USTRUCT(BlueprintType)
struct FItemInfo
{

	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Property")
		uint8 Id;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Property")
		FText Name;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Property")
		FText Desc;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Property")
		EItemType type;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Property")
		UTexture2D* Pic;
	 
};