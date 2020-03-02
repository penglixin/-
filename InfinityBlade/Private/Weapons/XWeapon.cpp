// Fill out your copyright notice in the Description page of Project Settings.

#include "XWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"


// Sets default values
AXWeapon::AXWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	RootComponent = WeaponMesh;
	WeaponCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	WeaponCapsule->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AXWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AXWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

