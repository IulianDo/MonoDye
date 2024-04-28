// Copyright Epic Games, Inc. All Rights Reserved.

#include "MonoDyeGameMode.h"
#include "MonoDyeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMonoDyeGameMode::AMonoDyeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
