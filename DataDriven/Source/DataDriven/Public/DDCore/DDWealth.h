// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DDMM.h"
#include "Engine/StreamableManager.h"
#include "DDWealth.generated.h"



//����Object�ڵ�
struct ObjectSingleLoadNode;
struct ObjectKindLoadNode;

//���ص���Class
struct ClassSingleLoadNode;
struct ClassKindLoadNode;
struct ClassMultiLoadNode;

/**
 * 
 */
UCLASS()
class DATADRIVEN_API UDDWealth : public UObject, public IDDMM
{
	GENERATED_BODY()

public:

	virtual void WealthInit() {}

	virtual void WealthBeginPlay();

	//��Դ��Tick����
	virtual void WealthTick(float DeltaSeconds);

	//ָ����Դ��
	void AssignData(TArray<UWealthData*>& InWealthData);

	//�ⲿ����������ȡ��Դ����
	FWealthURL* GainWealthURL(FName WealthName);
	void GainWealthURL(FName WealthKind, TArray<FWealthURL*>& OutURL);

	//����Object������Դ�ӿ�
	void LoadObjectWealth(FName WealthName, FName ObjectName, FName FunName);
	void LoadObjectWealthKind(FName WealthKind, FName ObjectName, FName FunName);

	//����Class������Դ�ӿ�
	void LoadClassWealth(FName WealthName, FName ObjectName, FName FunName);
	void LoadClassWealthKind(FName WealthKind, FName ObjectName, FName FunName);

	//����һ������ʵ��
	void BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName ObjectName, FName FunName, FTransform SpawnTransform);

	//����ͬ��Դ�������Ķ���ʵ��, ͬ�������µ�ÿ����Դ���Ӵ���һ������ʵ��
	void BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName ObjectName, FName FunName, TArray<FTransform> SpawnTransforms);

	//�������ͬ��Դ���Ķ���ʵ��
	void BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName ObjectName, FName FunName, TArray<FTransform> SpawnTransforms);


protected:

	//��ȡObject��Դ�ṹ��
	FObjectWealthEntry* GetObjectSingleEntry(FName WealthName);
	TArray<FObjectWealthEntry*> GetObjectKindEntry(FName WealthKind);

	//��ȡClass��Դ�ṹ��
	FClassWealthEntry* GetClassSingleEntry(FName WealthName);
	TArray<FClassWealthEntry*> GetClassKindEntry(FName WealthKind);

	//������ص���Object�ڵ�ķ���
	void DealObjectSingleLoadStack();
	//������������Object�ڵ�ķ���
	void DealObjectKindLoadStack();
	//������ص���Class�ڵ�ķ���
	void DealClassSingleLoadStack();
	//������������Class�ڵ�ķ���
	void DealClassKindLoadStack();
	//�������������ķ���
	void DealClassMultiLoadStack();

protected:

	//������
	FStreamableManager WealthLoader;

	//��Դ��
	TArray<UWealthData*> WealthData;

	UPROPERTY()
		TArray<UUserWidget*> GCWidgetGroup;

	//���ؽڵ����
	TArray<ObjectSingleLoadNode*> ObjectSingleLoadStack;
	TArray<ObjectKindLoadNode*> ObjectKindLoadStack;
	TArray<ClassSingleLoadNode*> ClassSingleLoadStack;
	TArray<ClassKindLoadNode*> ClassKindLoadStack;
	TArray<ClassMultiLoadNode*> ClassMultiLoadStack;


protected:

	//����UObject����ص�����
	DDOBJFUNC_TWO(BackObjectWealth, FName, BackName, UObject*, BackWealth);
	DDOBJFUNC_TWO(BackObjectWealthKind, TArray<FName>, BackNames, TArray<UObject*>, BackWealths);

	//����UClass����ص�����
	DDOBJFUNC_TWO(BackClassWealth, FName, BackName, UClass*, BackWealth);
	DDOBJFUNC_TWO(BackClassWealthKind, TArray<FName>, BackNames, TArray<UClass*>, BackWealths);

	//���ɶ�����ص�����
	DDOBJFUNC_TWO(BackObjectSingle, FName, BackName, UObject*, BackObject);
	DDOBJFUNC_TWO(BackObjectKind, TArray<FName>, BackNames, TArray<UObject*>, BackObjects);
	DDOBJFUNC_TWO(BackObjectMulti, FName, BackName, TArray<UObject*>, BackObjects);

	DDOBJFUNC_TWO(BackActorSingle, FName, BackName, AActor*, BackActor);
	DDOBJFUNC_TWO(BackActorKind, TArray<FName>, BackNames, TArray<AActor*>, BackActors);
	DDOBJFUNC_TWO(BackActorMulti, FName, BackName, TArray<AActor*>, BackActors);

	DDOBJFUNC_TWO(BackWidgetSingle, FName, BackName, UUserWidget*, BackWidget);
	DDOBJFUNC_TWO(BackWidgetKind, TArray<FName>, BackNames, TArray<UUserWidget*>, BackWidgets);
	DDOBJFUNC_TWO(BackWidgetMulti, FName, BackName, TArray<UUserWidget*>, BackWidgets);
	
};
