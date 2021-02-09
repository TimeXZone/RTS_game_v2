// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RTS_gameGameMode.h"
#include "RTS_gamePlayerController.h"
#include "RTS_gameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARTS_gameGameMode::ARTS_gameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARTS_gamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}