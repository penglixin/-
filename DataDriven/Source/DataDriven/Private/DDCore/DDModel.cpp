// Fill out your copyright notice in the Description page of Project Settings.


#include "DDModel.h"
#include "DDOO.h"


void UDDModel::RegisterObject(IDDOO* ObjectInst)
{
	//������ظ�����ӵ�ģ�����
	if (!ObjectGroup.Contains(ObjectInst->GetObjectName()))
	{
		//��ӵ�������
		ObjectGroup.Add(ObjectInst->GetObjectName(), ObjectInst);
		//��ӵ���������
		FName ObjectClassName = ObjectInst->GetClassName();
		if (ObjectClassGroup.Contains(ObjectClassName))
			ObjectClassGroup.Find(ObjectClassName)->Push(ObjectInst);
		else
		{
			TArray<IDDOO*> ObjectArray;
			ObjectClassGroup.Add(ObjectClassName, ObjectArray);
			ObjectClassGroup.Find(ObjectClassName)->Push(ObjectInst);
		}
		//��Ӷ��󵽼�������������
		ObjectActiveGroup.Push(ObjectInst);
	}
	else
		//���ظ�ע�����Debug
		DDH::Debug() << "Object Repeated --> " << ObjectInst->GetObjectName() << DDH::Endl();
}




void UDDModel::ModelTick(float DeltaSeconds)
{
	//����Tick���Tick����
	for (int i = 0; i < ObjectTickGroup.Num(); ++i)
		ObjectTickGroup[i]->DDTick(DeltaSeconds);

	//��ʱ�������ĳ�����ڵĶ���
	TArray<IDDOO*> TempObjectGroup;
	//ѭ�����м����������ں���
	for (int i = 0; i < ObjectActiveGroup.Num(); ++i)
	{
		//�������ɹ�
		if (ObjectActiveGroup[i]->ActiveLife())
			TempObjectGroup.Push(ObjectActiveGroup[i]);
	}
	//���������������ڵĶ����Ƴ�����������,���ҽ�����Tick���еĶ�����ӵ�Tick��
	for (int i = 0; i < TempObjectGroup.Num(); ++i)
	{
		ObjectActiveGroup.Remove(TempObjectGroup[i]);
		if (TempObjectGroup[i]->IsAllowTickEvent)
			ObjectTickGroup.Push(TempObjectGroup[i]);
	}


	//ִ���ͷŶ�����, ����ͷ���
	for (int i = 0; i < ObjectReleaseGroup.Num(); ++i)
		ObjectReleaseGroup[i]->DDRelease();
	ObjectReleaseGroup.Empty();

	//�����ʱ������
	TempObjectGroup.Empty();
	//�������ٶ�����������������ں���
	for (int i = 0; i < ObjectDestroyGroup.Num(); ++i)
	{
		//���������������ִ�����
		if (ObjectDestroyGroup[i]->DestroyLife())
		{
			//��Ӷ����ͷŶ�����
			ObjectReleaseGroup.Push(ObjectDestroyGroup[i]);
			//��Ӷ�����ʱ��
			TempObjectGroup.Push(ObjectDestroyGroup[i]);
			//����������ٵĶ���
			ObjectGroup.Remove(ObjectDestroyGroup[i]->GetObjectName());
			ObjectClassGroup.Find(ObjectDestroyGroup[i]->GetClassName())->Remove(ObjectDestroyGroup[i]);
			//������������Ϊ��
			if (ObjectClassGroup.Find(ObjectDestroyGroup[i]->GetClassName())->Num() == 0)
				ObjectClassGroup.Remove(ObjectDestroyGroup[i]->GetClassName());
		}
	}

	//�����ٵĶ�������ٶ������Ƴ�
	for (int i = 0; i < TempObjectGroup.Num(); ++i)
		ObjectDestroyGroup.Remove(TempObjectGroup[i]);


	//�����ʱ������
	TempObjectGroup.Empty();
	//����Ԥ���ٶ�����, �����������ȶ�״̬, ��ת����ʱ������
	for (int i = 0; i < PreObjectDestroyGroup.Num(); ++i)
	{
		if (PreObjectDestroyGroup[i]->RunState == EBaseObjectState::Stable)
		{
			//����ȶ�����״̬�Ķ�����ʱ������
			TempObjectGroup.Push(PreObjectDestroyGroup[i]);
		}
	}
	//��Ԥ���ٶ�����������ȶ�״̬����
	for (int i = 0; i < TempObjectGroup.Num(); ++i)
	{
		PreObjectDestroyGroup.Remove(TempObjectGroup[i]);
		//��ӵ����ٶ�����
		ObjectDestroyGroup.Push(TempObjectGroup[i]);
		//�Ƴ���֡������
		ObjectTickGroup.Remove(TempObjectGroup[i]);
	}
}


void UDDModel::DestroyObject(FName ObjectName)
{
	//��ȡ��Ҫ���ٵĶ���
	if (ObjectGroup.Contains(ObjectName))
	{
		IDDOO* TargetObject = *ObjectGroup.Find(ObjectName);
		//������ٶ������Լ�Ԥ���ٶ����鶼û�иö���
		if (!ObjectDestroyGroup.Contains(TargetObject) && !PreObjectDestroyGroup.Contains(TargetObject))
		{
			//������ȶ�״̬����ӵ�ObjectDestroyGroup,����Ǽ���״̬����ӵ�PreObjectDestroyGroup
			switch (TargetObject->RunState)
			{
			case EBaseObjectState::Active:
				PreObjectDestroyGroup.Push(TargetObject);
				break;
			case EBaseObjectState::Stable:
				ObjectDestroyGroup.Push(TargetObject);
				ObjectTickGroup.Remove(TargetObject);
				break;
			}
		}
	}
}

void UDDModel::DestroyObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	//�����ȡ���Ķ�������
	TArray<IDDOO*> TargetObjectGroup;

	//����Э���ȡ����
	GetAgreementObject(Agreement, TargetNameGroup, TargetObjectGroup);

	//�������ٶ���
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//������ٶ������Լ�Ԥ���ٶ����鶼û�иö���
		if (!ObjectDestroyGroup.Contains(TargetObjectGroup[i]) && !PreObjectDestroyGroup.Contains(TargetObjectGroup[i]))
		{
			//������ȶ�״̬����ӵ�ObjectDestroyGroup,����Ǽ���״̬����ӵ�PreObjectDestroyGroup
			switch (TargetObjectGroup[i]->RunState)
			{
			case EBaseObjectState::Active:
				PreObjectDestroyGroup.Push(TargetObjectGroup[i]);
				break;
			case EBaseObjectState::Stable:
				ObjectDestroyGroup.Push(TargetObjectGroup[i]);
				ObjectTickGroup.Remove(TargetObjectGroup[i]);
				break;
			}
		}
	}
}

void UDDModel::EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	//�����ȡ���Ķ�������
	TArray<IDDOO*> TargetObjectGroup;

	//����Э���ȡ����
	GetAgreementObject(Agreement, TargetNameGroup, TargetObjectGroup);

	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//�������������ȶ���ʧ��״̬���������ļ���״̬����
		if (TargetObjectGroup[i]->RunState == EBaseObjectState::Stable && TargetObjectGroup[i]->LifeState == EBaseObjectLife::Disable)
			TargetObjectGroup[i]->OnEnable();
	}
}

void UDDModel::DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	//�����ȡ���Ķ�������
	TArray<IDDOO*> TargetObjectGroup;

	//����Э���ȡ����
	GetAgreementObject(Agreement, TargetNameGroup, TargetObjectGroup);

	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//�������������ȶ���ʧ��״̬���������ļ���״̬����
		if (TargetObjectGroup[i]->RunState == EBaseObjectState::Stable && TargetObjectGroup[i]->LifeState == EBaseObjectLife::Enable)
			TargetObjectGroup[i]->OnDisable();
	}
}

void UDDModel::GetSelfObject(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup)
{
	for (int i = 0; i < TargetNameGroup.Num(); ++i)
		if (ObjectGroup.Contains(TargetNameGroup[i]))
			TargetObjectGroup.Push(*ObjectGroup.Find(TargetNameGroup[i]));
}

int32 UDDModel::GetOtherObject(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup)
{
	for (TMap<FName, IDDOO*>::TIterator It(ObjectGroup); It; ++It)
	{
		bool IsSame = false;
		for (int i = 0; i < TargetNameGroup.Num(); ++i)
		{
			//��������Ƿ���ͬ, ��ͬ������
			if (TargetNameGroup[i].IsEqual(It->Key))
			{
				IsSame = true;
				break;
			}
		}
		if (!IsSame)
			TargetObjectGroup.Push(It->Value);
	}
	//����ȫ�����������
	return ObjectGroup.Num();
}

int32 UDDModel::GetClassOtherObject(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup)
{
	if (!ObjectGroup.Contains(TargetNameGroup[0]))
		return 0;
	//�ֻ�ȡ��������
	FName ObjectClassName = (*ObjectGroup.Find(TargetNameGroup[0]))->GetClassName();
	//����������ʵ������
	for (TArray<IDDOO*>::TIterator It(*ObjectClassGroup.Find(ObjectClassName)); It; ++It)
	{
		bool IsSame = false;
		for (int i = 0; i < TargetNameGroup.Num(); ++i)
		{
			if ((*It)->GetObjectName().IsEqual(TargetNameGroup[i]))
			{
				IsSame = true;
				break;
			}
		}
		if (!IsSame)
			TargetObjectGroup.Push(*It);
	}
	//���ض���������Ӧ�Ķ����������
	return (*ObjectClassGroup.Find(ObjectClassName)).Num();
}

void UDDModel::GetSelfClass(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup)
{
	for (int i = 0; i < TargetNameGroup.Num(); ++i)
	{
		//��������������, ������һ��ѭ��
		if(!ObjectClassGroup.Contains(TargetNameGroup[i]))
			continue;
		TargetObjectGroup.Append(*ObjectClassGroup.Find(TargetNameGroup[i]));
	}
}

void UDDModel::GetOtherClass(TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup)
{
	for (TMap<FName, TArray<IDDOO*>>::TIterator It(ObjectClassGroup); It; ++It)
		if (!TargetNameGroup.Contains(It->Key))
			TargetObjectGroup.Append(It->Value);
}

void UDDModel::GetAll(TArray<IDDOO*>& TargetObjectGroup)
{
	ObjectGroup.GenerateValueArray(TargetObjectGroup);
}

void UDDModel::GetAgreementObject(EAgreementType Agreement, TArray<FName> TargetNameGroup, TArray<IDDOO*>& TargetObjectGroup)
{
	switch (Agreement)
	{
	case EAgreementType::SelfObject:
		GetSelfObject(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::OtherObject:
		GetOtherObject(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::ClassOtherObject:
		GetClassOtherObject(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::SelfClass:
		GetSelfClass(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::OtherClass:
		GetOtherClass(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::All:
		GetAll(TargetObjectGroup);
		break;
	}
}

