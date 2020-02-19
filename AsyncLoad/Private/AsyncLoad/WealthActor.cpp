// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/AsyncLoad/WealthActor.h"
#include "Public/AsyncLoad/WealthWidget.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine.h"
#include "TimerManager.h"
#include "Engine/ObjectLibrary.h"
#include "Engine/StreamableManager.h"


// Sets default values
AWealthActor::AWealthActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));

	WorkMesh = CreateDefaultSubobject< UStaticMeshComponent>(TEXT("WorkMesh"));
	WorkMesh->SetupAttachment(RootComponent);

	MeshIndex = 0;
	TextureIndex = 0;
}

void AWealthActor::AssignWealthWidget(UWealthWidget * InWidget)
{
	WealthWidget = InWidget;
	//UClassUObjectUBlueprint();
}

// Called when the game starts or when spawned
void AWealthActor::BeginPlay()
{
	Super::BeginPlay();
	//WealthState();

	/*FTimerDelegate UpdateMeshDele = FTimerDelegate::CreateUObject(this, &AWealthActor::UpdateMesh);
	GetWorld()->GetTimerManager().SetTimer(UpdateMeshTimeHandle, UpdateMeshDele, 2.f, true);*/

	//TestLoadAsset();

	//�첽����UObject����
	ObjectLibriraryOperate();
}

void AWealthActor::WealthState()
{
	UStaticMesh* BlockMesh = FindObject<UStaticMesh>(NULL, TEXT("StaticMesh'/Game/StarterContent/Props/SM_Rock.SM_Rock'"));
	if (!BlockMesh)
	{
		//FindObjectʧ�ܣ�˵���ڴ��в����ڸ���Դ����Ҫ��LoadObject������Դ���ص��ڴ��У�Ȼ����FindObject
		DebugMesg("BlockMesh Find Failed");
	}
	DebugMesg("Loading BlockMesh......");
	LoadObject<UStaticMesh>(NULL, TEXT("StaticMesh'/Game/StarterContent/Props/SM_Rock.SM_Rock'"));
	BlockMesh = FindObject<UStaticMesh>(NULL, TEXT("StaticMesh'/Game/StarterContent/Props/SM_Rock.SM_Rock'"));
	WorkMesh->SetStaticMesh(BlockMesh);

}

void AWealthActor::UpdateMesh()
{
	if (WealthData && WealthData->WealthArray.Num() > 0)
	{
		UStaticMesh* FactMesh = LoadObject<UStaticMesh>(NULL, *WealthData->WealthArray[MeshIndex].WealthPath.ToString());
		WorkMesh->SetStaticMesh(FactMesh);
		MeshIndex = (MeshIndex + 1) >= WealthData->WealthArray.Num() ? 0 : MeshIndex + 1;
	}
}

void AWealthActor::TestLoadAsset()
{
	FStringAssetReference adsset = "Blueprint'/Game/Blueprint/NewBlueprint.NewBlueprint'";
	UObject* ItemObj = adsset.ResolveObject();   //�����ַ�����Ӧ����Դ   ʹ��������������ȣ�LoadObject������Դ���ص��ڴ���
	UBlueprint* gen = Cast<UBlueprint>(ItemObj);
	if (gen)
	{
		DebugMesg(ItemObj->GetName());
		GetWorld()->SpawnActor<AActor>(gen->GeneratedClass, GetActorLocation() + FVector(0.f, 0.f, 200.f), GetActorRotation());
	}

	UObject* loadObj = StaticLoadObject(UBlueprint::StaticClass(), NULL, TEXT("Blueprint'/Game/Blueprint/NewBlueprint.NewBlueprint'"));
	if (loadObj)
	{
		DebugMesg(loadObj->GetName());
		UBlueprint* ubp = Cast<UBlueprint>(loadObj);
		GetWorld()->SpawnActor<AActor>(ubp->GeneratedClass, GetActorLocation() + FVector(200.f, 0.f, 200.f), GetActorRotation());
	}
}

void AWealthActor::ObjectLibriraryOperate()
{
	if (!ObjectLibrary)
	{
		// ����library
		ObjectLibrary = UObjectLibrary::CreateLibrary(UObject::StaticClass(), false, false);
		ObjectLibrary->AddToRoot();  //��ֹ��UE4���������ջ�������
	}
	//����·���µ�����StaticMesh
	ObjectLibrary->LoadAssetDataFromPath(TEXT("/Game/StarterContent/Textures"));
	TArray<FAssetData> TextureDatas;
	//���ҵ�����Դ���浽TextureData
	ObjectLibrary->GetAssetDataList(TextureDatas);
	for (int32 i = 0;i < TextureDatas.Num();i++)
	{
		//DebugMesg(TextureData[i].ToSoftObjectPath().ToString());  //��ӡ��Դ·��
		TexturePath.AddUnique(TextureDatas[i].ToSoftObjectPath());
	}

	// �ҵ��ļ����µ�������Դ·���󴴽��첽��Դ���ع�����
	StreamableManagerOperate();
}

void AWealthActor::StreamableManagerOperate()
{
	// �����첽��Դ������
	WealthLoader = new FStreamableManager();
	// ִ���첽���أ������Դ��������ͼ�����ɻص�����    ��UObjectLibrary�ҵ���������Դ����
	WealthHandle = WealthLoader->RequestAsyncLoad(TexturePath, FStreamableDelegate::CreateUObject(this, &AWealthActor::StreamableManagerOperateComplete));
}

void AWealthActor::StreamableManagerOperateComplete()
{ 
	// �첽�������Ȼ�ȡ�����ص���Դ ͨ��WealthHandle��ȡ
	TArray<UObject*> OutObj;
	WealthHandle->GetLoadedAssets(OutObj);
	for (int32 i = 0;i < OutObj.Num();i++)
	{
		UTexture2D* WorkTexture = Cast<UTexture2D>(OutObj[i]);
		if (WorkTexture)
		{
			TextureGroup.Add(WorkTexture);
		}
	}
	FTimerDelegate UpdateTextureDele = FTimerDelegate::CreateUObject(this, &AWealthActor::UpdateTexture);
	GetWorld()->GetTimerManager().SetTimer(UpdateTextureHandle, UpdateTextureDele, 1.f, true);
	//GetWorld()->GetTimerManager().SetTimer(UpdateTextureHandle, this, &AWealthActor::UpdateTexture, 0.5f, true, -1.f);
}

void AWealthActor::UpdateTexture()
{
	if (!WealthWidget)  return;
	WealthWidget->AssighTexture(TextureGroup[TextureIndex]);
	TextureIndex = (TextureIndex + 1) >= TextureGroup.Num() ? 0 : TextureIndex + 1;

}

void AWealthActor::UClassUObjectUBlueprint()
{

	LoadObject<UObject>(NULL, *HandleObjPath.GetAssetPathString());
	LoadObject<AActor>(NULL, *HandleActorPath.GetAssetPathString());
	LoadObject<UUserWidget>(NULL, *HandleWidgetPath.GetAssetPathString());
	//ʹ�����������ȡUObject �����Ƚ���Դ���ص��ڴ���
	UObject* HandleObject = HandleObjPath.ResolveObject();
	UObject* HandleActor = HandleActorPath.ResolveObject();
	UObject* HandleWidget = HandleWidgetPath.ResolveObject();

	/*  ʹ��UBlueprint��Ϊ�н�Ļ�������л����  */

	UBlueprint* BPObject = Cast<UBlueprint>(HandleObject);
	UBlueprint* BPActor = Cast<UBlueprint>(HandleActor);
	UBlueprint* BPWidget = Cast<UBlueprint>(HandleWidget);

	UObject* InstObject = NewObject<UObject>(this, BPObject->GeneratedClass);
	AActor* InstActor = GetWorld()->SpawnActor<AActor>(BPActor->GeneratedClass, GetActorTransform());
	UClass* ui = Cast<UClass>(BPWidget->GeneratedClass);
	UUserWidget* InstWidget = CreateWidget<UUserWidget>(GetWorld(), ui);
	if (InstWidget) WealthWidget->AssignOverlay_0(InstWidget);

}

// Called every frame
void AWealthActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWealthActor::DebugMesg(const FString& Msg)
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, Msg);
}

