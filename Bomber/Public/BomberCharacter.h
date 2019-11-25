// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Public/BomberGameMode.h"
#include "BomberCharacter.generated.h"


class ABomb;


UCLASS()
class BOMBER_API ABomberCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABomberCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnyWhere, Category = "Bomb")
		TSubclassOf<ABomb> Bomb;

	float InitialRange=1;
	int InitialBombNum = 1;

	float ExploredRange; //爆炸范围
	int  BombNum; //可生生成的炸弹数量
	bool bHasRemote = false;  //是否吃到遥控道具
	
	class ABomberGameMode*  BomberGameMode;

	bool bIsDead = false;

public:	

	TArray<class ABomb*> PlacedBombNum;  //用于存储该玩家在场景中已生成的炸弹数量

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CreateBomb();

	float GetSnappedValue(int Value, float Scale);  //Value:当前炸弹单个坐标值，Scale方格大小
	FVector GetSnappedPos(FVector BombPos);        //对炸弹的整个横纵坐标修正,让其在方格正中间生成
	void IncreaseExploredRange(float RangeBoost) {
		this->ExploredRange += RangeBoost;
	}
	void IncreaceBombNum() { BombNum++; }

	void SetHasRemote() {	this->bHasRemote = true;  }

	bool GetHasRemote() { return bHasRemote; }
	// FORCEINLINE int GetHasRemote() { return bHasRemote; }

	void Reset(EPowerupType PowerType);


	void OnDeath();
};
