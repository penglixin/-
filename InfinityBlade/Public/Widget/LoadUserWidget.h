// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoadUserWidget.generated.h"

class UTextBlock;
class UCircularThrobber;
/**
 * 
 */
UCLASS()
class INFINITYBLADE_API ULoadUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY()
		UTextBlock* GoOnText;
	UPROPERTY()
		UTextBlock* Loadding;
	UPROPERTY()
		UCircularThrobber* Waitting;

protected:

	virtual bool Initialize() override;

public:

};
