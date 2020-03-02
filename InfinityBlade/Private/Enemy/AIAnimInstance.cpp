// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Enemy/AIAnimInstance.h"
#include "Public/Enemy/AICharacter.h"


void UAIAnimInstance::UpdateSpeed()
{
	if (TryGetPawnOwner() != nullptr)
	{
		Monster = Cast<AAICharacter>(TryGetPawnOwner());
		Anim_isDead = Monster->bIsDead;
		if(!Anim_isDead)
			Speed = TryGetPawnOwner()->GetVelocity().Size();
	}
}

void UAIAnimInstance::AnimNotify_AIPlayStart(UAnimNotify* Notify)
{
	bIsPlaying = true;
}

void UAIAnimInstance::AnimNotify_AIPlayEnd(UAnimNotify* Notify)
{
	bIsPlaying = false;
}

void UAIAnimInstance::AnimNotify_AIAttackStart(UAnimNotify* Notify)
{
	bIsAttack = true;
}

void UAIAnimInstance::AnimNotify_AIAttackEnd(UAnimNotify* Notify)
{
	bIsAttack = false;
}
