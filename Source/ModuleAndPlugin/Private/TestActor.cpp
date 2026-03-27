// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"
#include "MySpartaLog.h"

// Sets default values
ATestActor::ATestActor()
{
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogMySpartaModule, Display, TEXT("Actor call MySpartaLog Module!"));
}


