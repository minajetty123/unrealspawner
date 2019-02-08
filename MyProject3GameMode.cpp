// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MyProject3GameMode.h"
#include "MyProject3Pawn.h"
#include "MyProject3Hud.h"

AMyProject3GameMode::AMyProject3GameMode()
{
	DefaultPawnClass = AMyProject3Pawn::StaticClass();
	HUDClass = AMyProject3Hud::StaticClass();
}
