// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "GameFramework/GameModeBase.h"
#include "layercake_v1GameMode.generated.h"

// The GameMode defines the game being played. It governs the game rules, scoring, what actors
// are allowed to exist in this game type, and who may enter the game.
//
// This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of layercake_v1Character

UCLASS(minimalapi)
class Alayercake_v1GameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	Alayercake_v1GameMode();
};
