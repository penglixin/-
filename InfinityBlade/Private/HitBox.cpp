// Fill out your copyright notice in the Description page of Project Settings.

#include "HitBox.h"
#include "Components/BoxComponent.h"
#include "Public/Character/PlayerCharacter.h"


// Sets default values
AHitBox::AHitBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BocCollision"));
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &AHitBox::BoxBeginOverlap);

}

void AHitBox::BoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	APlayerCharacter* XCharacter = Cast<APlayerCharacter>(OtherActor);
	if (XCharacter != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Purple, TEXT("HitBox"));
		XCharacter->SetActorLocation(XCharacter->Startlocation);
	}
}


