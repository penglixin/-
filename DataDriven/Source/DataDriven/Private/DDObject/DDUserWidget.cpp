// Fill out your copyright notice in the Description page of Project Settings.


#include "DDUserWidget.h"

void UDDUserWidget::DDRelease()
{
	IDDOO::DDRelease();
	//�ټ��һ�δӸ����Ƴ�
	RemoveFromParent();
	//��Root�Ƴ�
	RemoveFromRoot();
	//׼��������Դ
	ConditionalBeginDestroy();
}
