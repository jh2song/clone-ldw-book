// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CloneLdwBook.h"
#include "GameFramework/PlayerController.h"
#include "CLBPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CLONELDWBOOK_API ACLBPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	virtual void PostInitializeComponents() override;
	virtual void OnPossess(APawn* InPawn) override;

};
