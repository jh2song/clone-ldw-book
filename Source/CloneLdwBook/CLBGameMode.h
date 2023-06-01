// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CloneLdwBook.h"
#include "GameFramework/GameModeBase.h"
#include "CLBGameMode.generated.h"

/**
 * 
 */
UCLASS()
class CLONELDWBOOK_API ACLBGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ACLBGameMode();

	virtual void PostLogin(APlayerController* NewPlayer) override;
};
