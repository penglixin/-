// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/BomberCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Public/Bomb.h"
#include "Engine/World.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ABomberCharacter::ABomberCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FClassFinder<ABomb>Bo(TEXT("/Game/Blueprint/BP_Bomb"));
	Bomb = Bo.Class;
}

// Called when the game starts or when spawned
void ABomberCharacter::BeginPlay()
{
	Super::BeginPlay();

	ExploredRange = InitialRange;
	BombNum = InitialBombNum;

	BomberGameMode = Cast<ABomberGameMode>(GetWorld()->GetAuthGameMode());
	//BomberGameMode = Cast<ABomberGameMode>(UGameplayStatics::GetGameMode(this));
}


// Called every frame
void ABomberCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABomberCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ABomberCharacter::CreateBomb()
{
	if (PlacedBombNum.Num() >= BombNum) {
		return;
	}

	if (Bomb) {
		FActorSpawnParameters Params;
		Params.Owner = this;
		ABomb* TempBomb = GetWorld()->SpawnActor<ABomb>(Bomb, GetSnappedPos(GetActorLocation()), FRotator::ZeroRotator,Params);  //申明炸弹的拥有者是this，即生成炸弹的玩家
		TempBomb->SetExploredRange(ExploredRange);
		PlacedBombNum.Add(TempBomb);
	}
}

float ABomberCharacter::GetSnappedValue(int Value, float Scale)
{

	int Remains = Value % (int)Scale;
	return FMath::Abs(Remains) > Scale / 2 ? Value - Remains + (Value > 0 ? Scale : -Scale) : Value - Remains;
}

FVector ABomberCharacter::GetSnappedPos(FVector BombPos)
{
	BombPos.X = GetSnappedValue(BombPos.X, 100.0f);
	BombPos.Y = GetSnappedValue(BombPos.Y, 100.0f);
	return BombPos;
}

void ABomberCharacter::Reset(EPowerupType PowerType)
{
	switch (PowerType)
	{
	case EPowerupType::Speed:
		GetCharacterMovement()->MaxWalkSpeed = 600;
		break;
	case EPowerupType::LongBlast:
		ExploredRange = InitialRange;
		break;
	case EPowerupType::MoreBomb:
		BombNum = InitialBombNum;
		break;
	case EPowerupType::Remote:
		bHasRemote = false;
		break;
	default:
		break;
	}
}

void ABomberCharacter::OnDeath()
{
	if (!bIsDead) {
		bIsDead = true;
		BomberGameMode->OnplayerDeath(this->GetController());

	}
}