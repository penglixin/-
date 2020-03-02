// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "InfinityBladeGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class INFINITYBLADE_API AInfinityBladeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

		AInfinityBladeGameModeBase();

public:

	UPROPERTY()
		class UStartUserWidget* StartWidget;

	UPROPERTY()
		class UZhuCeUserWidget* ZhuCeWidget;

	UPROPERTY()
		class ULoginUserWidget* LoginWidget;

	UPROPERTY()
		class UAdminUserWidget* AdminWidget;

	UPROPERTY()
		class UNoNameUserWidget* NoNameWidget;

	class UUserInfoSaveGame*  UserInfoSaveGame;
	FString  SlotName;
	int32 UserIndex;
	FTimerHandle MyHandle;
	FString LoginNickName;

protected:

	virtual void BeginPlay() override;
	

public:

	UFUNCTION()
		void Start_ZhuCeBtnOnClickEvent();
	UFUNCTION()
		void Start_StartBtnOnClickEvent();
	UFUNCTION()
		void Start_AdminBtnOnClickEvent();

	UFUNCTION()
		void ZhuCe_BackBtnOnClickEvent();
	UFUNCTION()
		void ZhuCe_OkBtnOnClickEvent();

	void SaveUserInfo(FString Nickname, FString pasw);

	UFUNCTION()
		void Login_BackBtnOnClickEvent();
	UFUNCTION()
		void Login_LoginBtnOnClickEvent();

	void OpenLevelOneSeconds();

	UFUNCTION()
		void Admin_OkBtnOnClickEvent();
	UFUNCTION()
		void Admin_BackBtnOkClick();

	UFUNCTION()
		void NoName_BackBtnOkClick();
};
