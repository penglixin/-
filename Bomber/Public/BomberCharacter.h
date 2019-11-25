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

	float ExploredRange; //��ը��Χ
	int  BombNum; //�������ɵ�ը������
	bool bHasRemote = false;  //�Ƿ�Ե�ң�ص���
	
	class ABomberGameMode*  BomberGameMode;

	bool bIsDead = false;

public:	

	TArray<class ABomb*> PlacedBombNum;  //���ڴ洢������ڳ����������ɵ�ը������

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CreateBomb();

	float GetSnappedValue(int Value, float Scale);  //Value:��ǰը����������ֵ��Scale�����С
	FVector GetSnappedPos(FVector BombPos);        //��ը��������������������,�����ڷ������м�����
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
