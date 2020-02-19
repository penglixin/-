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
	
	//加载某个文件夹下的某种类型的文件
	class UObjectLibrary* ObjectLibrary;
	TArray<FSoftObjectPath> TexturePath;  //存放通过UObjectLibrary找到的所有文件的路径    

	//异步加载
	FStreamableManager* WealthLoader;
	//共享指针
	TSharedPtr<FStreamableHandle> WealthHandle;
	TArray<UTexture2D*> TextureGroup;
	int32 TextureIndex;
	FTimerHandle UpdateTextureHandle;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//资源在ue4的状态
	void WealthState();

	//循环更新WorkMesh
	void UpdateMesh();
	//循环更新贴图
	void UpdateTexture();

	void TestLoadAsset();

	//UObjectLibrary操作   加载文件夹下的所有资源
	void ObjectLibriraryOperate();

	//创建异步资源加载管理器
	void StreamableManagerOperate();
	//异步加载完成时回调函数
	void StreamableManagerOperateComplete();

	//三种关系转换
	void UClassUObjectUBlueprint();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void DebugMesg(const FString& Msg);

};
