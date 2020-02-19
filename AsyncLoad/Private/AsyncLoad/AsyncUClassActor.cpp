// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/AsyncLoad/AsyncUClassActor.h"


// Sets default values
AAsyncUClassActor::AAsyncUClassActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAsyncUClassActor::BeginPlay()
{
	Super::BeginPlay();
	
	FLatentActionInfo latentActionInfo(123, 321, *FString("EchoLoadInfo"), (UObject*)this);
	FDDLoadAction* loadAction = new FDDLoadAction(UseForLatentSpawn.ToSoftObjectPath(), FDDLoadCallBack::CreateUObject(this, &AAsyncUClassActor::LoadClassComplete), latentActionInfo);

	FLatentActionManager& LatentManager = GetWorld()->GetLatentActionManager();
	if (LatentManager.FindExistingAction<FDDLoadAction>(latentActionInfo.CallbackTarget,latentActionInfo.UUID) == NULL)
	{
		LatentManager.AddNewAction(latentActionInfo.CallbackTarget, latentActionInfo.UUID, loadAction);
	}

	return;

	//��ȡ������Դ��FSoftObjectPath
	for (int32 i=0;i<ClassWealthPaths.Num();i++)
	{
		//��ȡ��Դ·��
		ObjectWealthPaths.Push(ClassWealthPaths[i].ToSoftObjectPath());
	}
	//��ȡ��������Դ·����ʹ��FStreamableManager�첽���ط�������
	CreateStreamableManager();
}

void AAsyncUClassActor::CreateStreamableManager()
{
	ClassWealthLoader = new FStreamableManager();
	// ִ���첽���أ������Դ��������ͼ�����ɻص���������������Դ����
	ClassWealthHandle = ClassWealthLoader->RequestAsyncLoad(ObjectWealthPaths, FStreamableDelegate::CreateUObject(this, &AAsyncUClassActor::OnLoadClassesComplete));

}

//�ص�����
void AAsyncUClassActor::OnLoadClassesComplete()
{
	// �첽�������Ȼ�ȡ�����ص���Դ ͨ��ClassWealthHandle��ȡ
	TArray<UObject*> WealthObjects;
	ClassWealthHandle->GetLoadedAssets(WealthObjects);
	for (int32 i = 0;i < WealthObjects.Num();i++)
	{
		UClass* WealthClass = Cast<UClass>(WealthObjects[i]);
		UUserWidget* WealthWidget = CreateWidget<UUserWidget>(GetWorld(),WealthClass);
		WealthWidgets.AddUnique(WealthWidget);
	}
	WidgetIndex = 0;
	TimeCount = 0.f;
}

// Called every frame
void AAsyncUClassActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	return;
	if (ClassWealthHandle->HasLoadCompleted() && WealthWidgets.Num() > 0)
	{
		if (TimeCount >= 2.f)
		{
			TimeCount = 0.f;
			WealthWidgets[WidgetIndex]->RemoveFromParent();
			WidgetIndex = (WidgetIndex + 1) >= WealthWidgets.Num() ? 0 : WidgetIndex + 1;
			WealthWidgets[WidgetIndex]->AddToViewport();
		}
		else
		{
			TimeCount += DeltaTime;
		}
	}
}

void AAsyncUClassActor::EchoLoadInfo()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, TEXT("EchoLoadInfo"));
}

void AAsyncUClassActor::LoadClassComplete(UClass * InClass)
{
	GetWorld()->SpawnActor<AActor>(InClass, GetActorTransform());
}
