// Fill out your copyright notice in the Description page of Project Settings.


#include "CLBPawn.h"

// Sets default values
ACLBPawn::ACLBPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACLBPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACLBPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACLBPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

