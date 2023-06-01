// Fill out your copyright notice in the Description page of Project Settings.


#include "CLBGameMode.h"
#include "CLBPawn.h"
#include "CLBPlayerController.h"

ACLBGameMode::ACLBGameMode()
{
    DefaultPawnClass = ACLBPawn::StaticClass();
    PlayerControllerClass = ACLBPlayerController::StaticClass();
}

void ACLBGameMode::PostLogin(APlayerController* NewPlayer)
{
    ABLOG(Warning, TEXT("PostLogin Begin"));
    Super::PostLogin(NewPlayer);
    ABLOG(Warning, TEXT("PostLogin End"));
}
