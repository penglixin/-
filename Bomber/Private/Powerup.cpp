// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Powerup.h"
#include "Components/BoxComponent.h"
#include "Components/BillboardComponent.h"
#include "ConstructorHelpers.h"
#include "Public/BomberCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"


// Sets default values
APowerup::APowerup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = BoxCollision;

	BillBoard = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillBoard"));
	BillBoard->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UTexture2D>BombIcon(TEXT("/Game/_Project/Textures/BombIcon"));
	Sprites.Add(BombIcon.Object);
	static ConstructorHelpers::FObjectFinder<UTexture2D>LongerIcon(TEXT("/Game/_Project/Textures/LongerBlastsIcon"));
	Sprites.Add(LongerIcon.Object);
	static ConstructorHelpers::FObjectFinder<UTexture2D>RemoteIcon(TEXT("/Game/_Project/Textures/RemoteIcon"));
	Sprites.Add(RemoteIcon.Object);
	static ConstructorHelpers::FObjectFinder<UTexture2D>SpeedIcon(TEXT("/Game/_Project/Textures/SpeedIcon"));
	Sprites.Add(SpeedIcon.Object);

	BillBoard->SetHiddenInGame(false);
}

// Called when the game starts or when spawned
void APowerup::BeginPlay()
{
	Super::BeginPlay();
	int i = FMath::RandRange(0, 3);
	PowerupType = static_cast<EPowerupType>(i);
	BillBoard->SetSprite(Sprites[i]);
}

void APowerup::ResetPowerup()
{
	BomberCharacter->Reset(PowerupType);
	BomberCharacter = nullptr;
	Destroy();
}

// Called every frame
void APowerup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
               
void APowerup::NotifyActorBeginOverlap(AActor * OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

    BomberCharacter = Cast<ABomberCharacter>(OtherActor);
	if (BomberCharacter) {
		switch (PowerupType)
		{
		case EPowerupType::Speed:
			BomberCharacter->GetCharacterMovement()->MaxWalkSpeed += AddSpeed;
			break;
		case EPowerupType::LongBlast:
			BomberCharacter->IncreaseExploredRange(ExploredRangeBoost);
			break;
		case EPowerupType::MoreBomb:
			BomberCharacter->IncreaceBombNum();
			break;
		case EPowerupType::Remote:
			BomberCharacter->SetHasRemote();
			break;
		default:
			break;
		}
		this->SetActorHiddenInGame(true);
		BoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetWorldTimerManager().SetTimer(TimerHandle_Reset, this, &APowerup::ResetPowerup, 10.0f, false);
	}
}

