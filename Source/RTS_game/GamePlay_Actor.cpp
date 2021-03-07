// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlay_Actor.h"

// Sets default values
AGamePlay_Actor::AGamePlay_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

bool AGamePlay_Actor::general_policy_func(bool active, int increase_rate_inc)
{
	if (active)
	{
		increase_rate += increase_rate_inc;
		return true;
	}
	return false;
}

// Called when the game starts or when spawned
void AGamePlay_Actor::BeginPlay()
{
	Super::BeginPlay();
	//policy_point = 100;
	increase_rate = 60;
	count = 0;	
}

// Called every frame
void AGamePlay_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

