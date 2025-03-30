// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestBedGameMode.h"
#include "TestBedCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestBedGameMode::ATestBedGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
