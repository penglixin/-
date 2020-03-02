// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "XPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class INFINITYBLADE_API AXPlayerController : public APlayerController
{
	GENERATED_BODY()


public:

	class APlayerCharacter* character;
	class AXPlayerState* playerstate;
	class UCustomGameInstance* XGameInstance;
	UPROPERTY()
		class UMainUserWidget* MainWidget;
	UPROPERTY()
		class UBackpackUserWidget* BackpackWidget;
	UPROPERTY()
		class USettingUserWidget* SettingWidget;
	UPROPERTY()
		class UShopUserWidget* ShopWidget;
	UPROPERTY()
		class AXWeapon* Weapon;

	class UXAnimInstance* AnimInstance;

	TArray<AActor*> AiArray;

	//技能冷却
	bool bIsSkill1;
	float CurrentCD_1;

	bool bIsSkill2;
	float CurrentCD_2;

	bool bIsSkill3;
	float CurrentCD_3;

	bool bIsSkill4;
	float CurrentCD_4;

	FTimerHandle NoteHandle;

protected:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupInputComponent() override;

	//virtual bool InputTouch(uint32 Handle, ETouchType::Type Type, const FVector2D& TouchLocation, float Force, FDateTime DeviceTimestamp, uint32 TouchpadIndex) override;

public:

	void InitButtonClickEvent();
	void InitState();
	void UpdateUI();

	void MoveForward(float value);

	void MoveRight(float value);

	UFUNCTION()
		void AttackBtnOnClickEvent();
	UFUNCTION()
		void SkillOneBtnOnClickEvent();
	UFUNCTION()
		void SkillTwoBtnOnClickEvent();
	UFUNCTION()
		void SkillThreeBtnOnClickEvent();
	UFUNCTION()
		void SkillFourBtnOnClickEvent();
	UFUNCTION()
		void BackpackBtnOnClickEvent();
	UFUNCTION()
		void SettingBtnOnClickEvent();
	UFUNCTION()
		void ShopBtnOnClickEvent();

	UFUNCTION()
		void WeaponBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//锁定敌人
	void LockAI();

	//冷却
	void Fun_CD_One(float DeltaSeconds);
	void Fun_CD_Two(float DeltaSeconds);
	void Fun_CD_Three(float DeltaSeconds);
	void Fun_CD_Four(float DeltaSeconds);

	void SetNoteHiden();
};
