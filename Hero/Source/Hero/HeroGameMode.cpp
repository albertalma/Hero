// Copyright Epic Games, Inc. All Rights Reserved.

#include "HeroGameMode.h"
#include "HeroCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHeroGameMode::AHeroGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
