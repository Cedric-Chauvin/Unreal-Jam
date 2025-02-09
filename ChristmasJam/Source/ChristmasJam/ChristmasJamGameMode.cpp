// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChristmasJamGameMode.h"
#include "ChristmasJamHUD.h"
#include "ChristmasJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChristmasJamGameMode::AChristmasJamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FPCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AChristmasJamHUD::StaticClass();
}
