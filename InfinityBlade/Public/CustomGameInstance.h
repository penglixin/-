// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Runtime/MoviePlayer/Public/MoviePlayer.h"
#include "CustomGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class INFINITYBLADE_API UCustomGameInstance : public UGameInstance
{
	GENERATED_BODY()
	

public:

	TMap<FString, FString> ContextMap;

	UPROPERTY()
		class ULoadUserWidget* loadWidget;

protected:

	virtual void Init() override;

public:
	//���ص�ͼǰ����
	UFUNCTION()
		void PreLoadMap(const FString& Map);

	//���ص�ͼ�����
	UFUNCTION()
		void PostLoadMap(UWorld* world);
	UFUNCTION(BlueprintCallable)
		bool GetLoadStatus();
};
