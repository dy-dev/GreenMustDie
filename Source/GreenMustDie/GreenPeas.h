// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "GreenPeas.generated.h"

/**
 * 
 */
UCLASS()
class GREENMUSTDIE_API AGreenPeas : public AActor
{
	GENERATED_UCLASS_BODY()
		int32 MyNumber;

	virtual void BeginPlay() override;
	
};
