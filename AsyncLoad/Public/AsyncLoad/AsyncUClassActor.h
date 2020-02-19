// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Public/Blueprint/UserWidget.h"
#include "Engine/StreamableManager.h"
#include "LatentActions.h"
#include "Engine/LatentActionManager.h"
#include "AsyncUClassActor.generated.h"


struct FStreamableManager;
struct FStreamableHandle;


DECLARE_DELEGATE_OneParam(FDDLoadCallBack,UClass*)

class FDDLoadAction : public FPendingLatentAction
{
	
public:

	FSoftObjectPath SoftObjectPath;
	FStreamableManager StreamableManager;
	TSharedPtr<FStreamableHandle> LoadHandle;
	FName ExecutionFunName;
	int32 OutputLink;
	FWeakObjectPtr callBackTarget;
	FDDLoadCallBack LoadCallBack;

	FDDLoadAction(const FSoftObjectPath& InSoftObjectPath, FDDLoadCallBack InLoadCallBack, const FLatentActionInfo& InLatentActionInfo)
		:SoftObjectPath(InSoftObjectPath),LoadCallBack(InLoadCallBack),ExecutionFunName(InLatentActionInfo.ExecutionFunction),
		OutputLink(InLatentActionInfo.Linkage),callBackTarget(InLatentActionInfo.CallbackTarget)
	{
		LoadHandle = StreamableManager.RequestAsyncLoad(SoftObjectPath);
	}
	virtual ~FDDLoadAction()
	{
		if (LoadHandle.IsValid())
		{
			LoadHandle->ReleaseHandle();
		}
	}

	virtual void UpdateOperation(FLatentResponse& Response) override
	{
		const bool bLoaded = !LoadHandle.IsValid() || LoadHandle->HasLoadCompleted() || LoadHandle->WasCanceled();
		if (bLoaded)
		{
			UClass* LoadedClass = Cast<UClass>(LoadHandle->GetLoadedAsset());
			LoadCallBack.ExecuteIfBound(LoadedClass);
		}
		//通知是否需要关闭动作
		Response.FinishAndTriggerIf(bLoaded, ExecutionFunName, OutputLink, callBackTarget);
	}

#if WITH_EDITOR
	virtual FString GetDescription() const override
	{	
		return FString::Printf(TEXT("Load Asset Action Base : %s"), *SoftObjectPath.ToString());
	}
#endif

};


UCLASS()
class ASYNCASSETLOAD_API AAsyncUClassActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAsyncUClassActor();

public:

	UPROPERTY(EditAnywhere)
		TArray<TSoftClassPtr<UUserWidget>> ClassWealthPaths;
	UPROPERTY(EditAnywhere)
		TSoftClassPtr<AActor> UseForLatentSpawn;

	TArray<FSoftObjectPath> ObjectWealthPaths;
	//异步加载
	FStreamableManager* ClassWealthLoader;
	//共享指针
	TSharedPtr<FStreamableHandle> ClassWealthHandle;

	TArray<UUserWidget*> WealthWidgets;  //存放根据UClass生成的Actor、Widget   

	float TimeCount;
	int32 WidgetIndex;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void CreateStreamableManager();
	void OnLoadClassesComplete();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void EchoLoadInfo();
	void LoadClassComplete(UClass* InClass);

};
