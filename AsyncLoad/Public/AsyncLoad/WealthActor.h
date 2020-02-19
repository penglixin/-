// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataAsset.h"
#include "WealthActor.generated.h"

class UWealthWidget;
struct FStreamableManager;
struct FStreamableHandle;
class UTexture2D;

USTRUCT()
struct FWealthNode 
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FName WealthName;
	UPROPERTY(EditAnywhere)
		FStringAssetReference WealthPath;
};

UCLASS()
class ASYNCASSETLOAD_API UWealthData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FWealthNode> WealthArray;

	UPROPERTY(EditAnywhere)
		TArray<UTexture2D*> WealthTextures;

};


UCLASS()
class ASYNCASSETLOAD_API AWealthActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWealthActor();
	void AssignWealthWidget(UWealthWidget* InWidget);

public:
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* WorkMesh;
	UPROPERTY(EditAnywhere)
		UWealthData* WealthData;

	UWealthWidget* WealthWidget;

	UPROPERTY(EditAnywhere)
		FStringAssetReference HandleObjPath;
	UPROPERTY(EditAnywhere)
		FStringAssetReference HandleActorPath;
	UPROPERTY(EditAnywhere)
		FStringAssetReference HandleWidgetPath;


protected:

	int32 MeshIndex;
	FTimerHandle UpdateMeshTimeHandle;
	
	//����ĳ���ļ����µ�ĳ�����͵��ļ�
	class UObjectLibrary* ObjectLibrary;
	TArray<FSoftObjectPath> TexturePath;  //���ͨ��UObjectLibrary�ҵ��������ļ���·��    

	//�첽����
	FStreamableManager* WealthLoader;
	//����ָ��
	TSharedPtr<FStreamableHandle> WealthHandle;
	TArray<UTexture2D*> TextureGroup;
	int32 TextureIndex;
	FTimerHandle UpdateTextureHandle;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//��Դ��ue4��״̬
	void WealthState();

	//ѭ������WorkMesh
	void UpdateMesh();
	//ѭ��������ͼ
	void UpdateTexture();

	void TestLoadAsset();

	//UObjectLibrary����   �����ļ����µ�������Դ
	void ObjectLibriraryOperate();

	//�����첽��Դ���ع�����
	void StreamableManagerOperate();
	//�첽�������ʱ�ص�����
	void StreamableManagerOperateComplete();

	//���ֹ�ϵת��
	void UClassUObjectUBlueprint();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void DebugMesg(const FString& Msg);

};
