// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/CloudSpawner.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "Public/Cloud.h"
#include "Public/CloudControl.h"
#include "kismet/GameplayStatics.h"


// Sets default values
ACloudSpawner::ACloudSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DefauleRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefauleRootComponent"));
	RootComponent = DefauleRootComponent;
	SpawnArea = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnArea"));
	SpawnArea->SetupAttachment(RootComponent);
	TriggerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));
	TriggerArea->SetupAttachment(RootComponent);

	InitSpawnCount = 6;
	SpawnRaise = 300.0f;
}

// Called when the game starts or when spawned
void ACloudSpawner::BeginPlay()
{
	Super::BeginPlay();
	ResetCloudSpawner();
}

void ACloudSpawner::SpawnCloud()
{
	FVector SpawnOrigin = SpawnArea->Bounds.Origin;   //��ȡSpawn�����ĵ�
	FVector SpawnExtent = SpawnArea->Bounds.BoxExtent;  //��ȡSpawn�ķ�Χ

	float YLocation = UKismetMathLibrary::RandomPointInBoundingBox(SpawnOrigin, SpawnExtent).Y;
	FVector  SpawnPos = FVector(SpawnArea->GetComponentLocation().X, YLocation, SpawnArea->GetComponentLocation().Z);
	FActorSpawnParameters SpawnParameter;
	GetWorld()->SpawnActor<ACloud>(Cloud,SpawnPos,FRotator::ZeroRotator, SpawnParameter);
	AddActorWorldOffset(FVector(0, 0, SpawnRaise));  //����һ���ƣ����������ƶ�SpawnRaise�ľ���

}

void ACloudSpawner::ResetCloudSpawner()
{
	InitSpawnCount = 6;
	SetActorLocation(FVector(-520,0,0));

	TArray<AActor*> Clouds;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACloud::StaticClass(), Clouds); //�ҵ������Ʋ�
	for (AActor* TActor : Clouds) {
		ACloud* MyCloud = Cast<ACloud>(TActor);
		if (MyCloud != nullptr) {
			MyCloud->Destroy();
		}
	}

	while (InitSpawnCount > 0) {
		InitSpawnCount--;
		SpawnCloud();
	}
}

// Called every frame
void ACloudSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ACloudSpawner::NotifyActorBeginOverlap(AActor * OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	CloudCtrl = Cast<ACloudControl>(OtherActor);  //��OtherActorת����CloudControl�������ת������OtherActor������
	if (CloudCtrl) {
		SpawnCloud();
	}
}

