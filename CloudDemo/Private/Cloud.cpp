// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Cloud.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Public/CloudControl.h"
#include "Components/TextRenderComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Components/AudioComponent.h"


// Sets default values
ACloud::ACloud()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = BoxCollision;

	CloudPlane= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CloudPlane"));
	CloudPlane->SetupAttachment(RootComponent);
	RainPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RainPlane"));
	RainPlane->SetupAttachment(CloudPlane);
	ShowScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ShowScoreText"));
	ShowScoreText->SetupAttachment(RootComponent);
	AudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComp"));
	AudioComp->SetupAttachment(CloudPlane);
}

// Called when the game starts or when spawned
void ACloud::BeginPlay()
{
	Super::BeginPlay();
	SetARandomTextures();
	int a = FMath::RandRange(0, 2);
	if (a == 0) {
		RainPlane->SetVisibility(false);
		AudioComp->Activate(true);
	}
}

void ACloud::SetARandomTextures()
{
	MatInterface = CloudPlane->GetMaterial(0);    //获取云的材质
	MatInstance = CloudPlane->CreateDynamicMaterialInstance(0, MatInterface);  //把Interface转换成instance
	int Index = FMath::RandRange(0, 2);   //包括最大值和最小值
	MatInstance->SetTextureParameterValue(FName(TEXT("Texture")), Textures[Index]);
	CloudPlane->SetMaterial(0, MatInstance);
}

void ACloud::DisplayScore()
{
	CloudCtrl->IncreaseScore();
	ShowScoreText->SetText(FText::FromString(FString::FromInt(CloudCtrl->GetScore() )));
}

// Called every frame
void ACloud::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACloud::NotifyActorBeginOverlap(AActor * OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	CloudCtrl = Cast<ACloudControl>(OtherActor);  //把OtherActor转换成CloudControl，如果能转换，则OtherActor是主角
	if (CloudCtrl) {
		CloudCtrl->Launch();
		DisplayScore();
		UGameplayStatics::PlaySoundAtLocation(this, CloudSound, GetActorLocation());
		FadeOut();

	}
}

