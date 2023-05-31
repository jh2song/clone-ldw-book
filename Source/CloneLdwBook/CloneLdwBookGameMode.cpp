// Copyright Epic Games, Inc. All Rights Reserved.

#include "CloneLdwBookGameMode.h"
#include "CloneLdwBookCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACloneLdwBookGameMode::ACloneLdwBookGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
