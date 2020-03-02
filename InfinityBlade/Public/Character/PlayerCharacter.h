// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Animation/AnimMontage.h"
#include "Components/TimelineComponent.h"
#include "Particles/ParticleSystem.h"
#include "Public/Common/ItemInfo.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class INFINITYBLADE_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()


public:

	UPROPERTY(VisibleAnywhere , Category="CameraComp")
		class UCameraComponent* CameraComp;
	UPROPERTY(VisibleAnywhere , Category = "CameraComp")
		class USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere,Category = "WeaponClass")
		TSubclassOf<class AXWeapon> WeaponClass;

	UPROPERTY(EditAnywhere, Category = "Montage")
		UAnimMontage* AttackMontage;

	UPROPERTY(EditAnywhere, Category = "PlayerState")
		float TotalHP;
	UPROPERTY(EditAnywhere, Category = "PlayerState")
		float TotalMP;
	UPROPERTY(EditAnywhere, Category = "PlayerState")
		float MinMP;
	UPROPERTY(EditAnywhere, Category = "PlayerState")
		float IncreaseHP;
	UPROPERTY(EditAnywhere, Category = "PlayerState")
		float NormalAttack;
	UPROPERTY(EditAnywhere, Category = "PlayerState")
		float XBladeAttack;
	UPROPERTY(EditAnywhere, Category = "PlayerState")
		float MP_SkillOne;
	UPROPERTY(EditAnywhere, Category = "PlayerState")
		float MP_SkillTwo;
	UPROPERTY(EditAnywhere, Category = "PlayerState")
		float MP_SkillThree;
	UPROPERTY(EditAnywhere, Category = "PlayerState")
		float MP_SkillFour;
	

	UPROPERTY(EditAnywhere, Category = "CD")
		float CD_One;
	UPROPERTY(EditAnywhere, Category = "CD")
		float CD_Two;
	UPROPERTY(EditAnywhere, Category = "CD")
		float CD_Three;
	UPROPERTY(EditAnywhere, Category = "CD")
		float CD_Four;

	//添加时间轴让玩家锁定敌人的时候缓慢旋转
	FTimeline RotationTimelime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyFloatCurve")
		class UCurveFloat*  myTimeLimeCurve;
	FRotator TargetRotation;

	UPROPERTY(EditAnywhere, Category = "Skill")
		TSubclassOf<class AIceStone> SkillOneClass;

	UPROPERTY(EditAnywhere, Category = "Skill")
		TSubclassOf<class AXBlade> SkillFoueClass;

	UPROPERTY(EditAnywhere, Category = "Montage")
		UAnimMontage* SkillOneMontage;
	UPROPERTY(EditAnywhere, Category = "Montage")
		UAnimMontage* SkillTwoMontage;
	UPROPERTY(EditAnywhere, Category = "Montage")
		UAnimMontage* SkillThreeMontage;
	UPROPERTY(EditAnywhere, Category = "Montage")
		UAnimMontage* SkillFourMontage;

	//出生特效
	UPROPERTY(EditAnywhere, Category = "SpawnParticle")
		UParticleSystem* SpawnParticle;
	FTimerHandle TimerHandle;
	class UParticleSystemComponent* particle;

	UPROPERTY(EditAnywhere, Category = "Items")
		TArray<FItemInfo> ItemArray;
	UPROPERTY(EditAnywhere, Category = "Coin")
		float Coin;

	UPROPERTY(EditAnywhere, Category = "Textures")
		TArray<UTexture2D * > Icons;

	UPROPERTY(EditAnywhere, Category = "Names")
		TArray<FText> Names;

	UPROPERTY(EditAnywhere, Category = "Desc")
		TArray<FText> Descs;

	float Dis_Value;
	float High_Value;

	//复活后回到起始位置
	FVector Startlocation;

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void TranslateRotation(FRotator Rotation);

	UFUNCTION()
		void UpdateRotation(float value);

	void DestroyEmitter();

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
};
