// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Save/UserInfoSaveGame.h"



UUserInfoSaveGame::UUserInfoSaveGame()
{

}

void UUserInfoSaveGame::SaveToUserInfo(FUserInfoStruct Info)
{
	UserInfos.Add(Info);
}

FUserInfoStruct UUserInfoSaveGame::GetInfoFromIndex(int32 index)
{
	return UserInfos[index];
}

TArray<FUserInfoStruct> UUserInfoSaveGame::GetUserInfos()
{
	return UserInfos;
}

bool UUserInfoSaveGame::IsExist(FString NickName)
{
	for (int32 i=0;i<UserInfos.Num();i++)
	{
		if(NickName.Equals(UserInfos[i].NickName))
		{
			return true;
		}
	}
	return false;
}

bool UUserInfoSaveGame::CheckNameAndPassword(FString NickName, FString PassWord)
{
	for (int32 i = 0;i < UserInfos.Num();i++)
	{
		if (NickName.Equals(UserInfos[i].NickName))
		{
			if (UserInfos[i].PassWord.Equals(PassWord))
			{
				return true;
			}
		}
	}
	return false;
}
