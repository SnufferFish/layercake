// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "layercake_v1.h"
#include "layercake_v1GameMode.h"
#include "layercake_v1Character.h"

Alayercake_v1GameMode::Alayercake_v1GameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = Alayercake_v1Character::StaticClass();	
}
