// Copyright Epic Games, Inc. All Rights Reserved.

#include "Soulslike_RPGGameMode.h"
#include "Soulslike_RPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASoulslike_RPGGameMode::ASoulslike_RPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
