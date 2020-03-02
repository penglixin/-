// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Skill/IceStone.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
AIceStone::AIceStone()
{
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	RootComponent = CapsuleComp;
	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AIceStone::OnOverlap);
	CapsuleComp->SetCapsuleHalfHeight(22.f);
	CapsuleComp->SetEnableGravity(false);

	ParticleSystemComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComp"));
	ParticleSystemComp->SetupAttachment(CapsuleComp);

	ProjectileComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileComp->SetUpdatedComponent(CapsuleComp);
	ProjectileComp->InitialSpeed = 700.f;
	ProjectileComp->ProjectileGravityScale = 0.f;

	static ConstructorHelpers::FObjectFinder<UParticleSystem>particle(TEXT("ParticleSystem'/Game/InfinityBladeEffects/Effects/FX_Monsters/FX_Monster_Elemental/ICE/P_IceElementalSplit_Small.P_IceElementalSplit_Small'"));
	if (particle.Succeeded())
	{
		ExploreParticle = particle.Object;
	}
	static ConstructorHelpers::FObjectFinder<USoundBase>sound(TEXT("SoundWave'/Game/UE4InfinityBlade/Sound/Sound_Heavy_Hit.Sound_Heavy_Hit'"));
	if (sound.Succeeded())
	{
		ExploreSound = sound.Object;
	}
	InitialLifeSpan = 4.f;
}

// Called when the game starts or when spawned
void AIceStone::BeginPlay()
{
	Super::BeginPlay();
	
}

void AIceStone::Shoot(FVector Direction)
{
	ProjectileComp->Velocity = Direction * ProjectileComp->InitialSpeed;
}

void AIceStone::OnOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor) 
	{
		//AI扣血
		UGameplayStatics::ApplyPointDamage(OtherActor, 20.f, SweepResult.ImpactPoint, SweepResult, nullptr, this, nullptr);
		//产生爆炸特效
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExploreParticle, SweepResult.ImpactPoint);
		if (ExploreSound)
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExploreSound, OtherActor->GetActorLocation());
		this->Destroy();
	}
}


