 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cloud.generated.h"

class UBoxComponent;
class ACloudControl;
class UTextRenderComponent;
class USoundCue;

UCLASS()
class CLOUDDEMO_API ACloud : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACloud();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnyWhere,Category="Collision")
		UBoxComponent* BoxCollision;
	UPROPERTY(VisibleAnyWhere,BlueprintReadOnly, Category = "Show")
		UStaticMeshComponent* CloudPlane;
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Show")
		UStaticMeshComponent* RainPlane;

	UPROPERTY(EditAnyWhere, Category = "Show")
		TArray<UTexture*> Textures;   
	UPROPERTY( BlueprintReadOnly, Category = "Show")
		UMaterialInstanceDynamic*  MatInstance;  //ֻ�ܶ�Instanceָ��Texture
	
	UMaterialInterface* MatInterface;

	ACloudControl* CloudCtrl;

	void SetARandomTextures();
	void DisplayScore();
	UPROPERTY(VisibleAnyWhere, Category = "Show")
		UTextRenderComponent* ShowScoreText;
	
	UFUNCTION(BlueprintImplementableEvent)   //�ڴ����ﶨ�壬����ͼ����
	void FadeOut();

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		USoundCue* CloudSound;   //��������Ƭ��

	UPROPERTY(VisibleAnyWhere, Category = "Sound")
		UAudioComponent* AudioComp;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;  //�����Ǵ�������������ײ������
	
	
};
