// Fill out your copyright notice in the Description page of Project Settings.

#include "GreenMustDie.h"
#include "GreenPeas.h"

AGreenPeas::AGreenPeas(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	MyNumber = 12;
}

void AGreenPeas::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Kill all the green peas!"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::FromInt(MyNumber));
	}
}