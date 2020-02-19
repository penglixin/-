// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/MultiThread/MyTaskClass.h"
#include "Public/MultiThread/MultiThreadFunctionLibrary.h"

MyTaskClass::MyTaskClass()
{
}

MyTaskClass::~MyTaskClass()
{
}

void MyTaskClass::DoWork()
{
	UMultiThreadFunctionLibrary::Do(MaxPrime);
}

MyTaskClass::MyTaskClass(int32 MaxPrime)
{
	this->MaxPrime = MaxPrime;
}
