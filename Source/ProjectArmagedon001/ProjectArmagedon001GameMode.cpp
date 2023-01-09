// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectArmagedon001GameMode.h"
#include "ProjectArmagedon001Character.h"
#include "UObject/ConstructorHelpers.h"

AProjectArmagedon001GameMode::AProjectArmagedon001GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
