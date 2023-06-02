// Fill out your copyright notice in the Description page of Project Settings.


#include "CLBPlayerController.h"

void ACLBPlayerController::BeginPlay()
{
    Super::BeginPlay();

    FInputModeGameOnly InputMode;
    SetInputMode(InputMode);
}

void ACLBPlayerController::PostInitializeComponents()
{
    Super::PostInitializeComponents();
    ABLOG_S(Warning);
}

void ACLBPlayerController::OnPossess(APawn* InPawn)
{
    ABLOG_S(Warning);
    Super::OnPossess(InPawn);
}
