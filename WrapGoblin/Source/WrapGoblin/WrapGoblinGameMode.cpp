// Copyright Epic Games, Inc. All Rights Reserved.

#include "WrapGoblinGameMode.h"
#include "WrapGoblinCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWrapGoblinGameMode::AWrapGoblinGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
