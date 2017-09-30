// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ReplayTestGameMode.h"
#include "ReplayTestPawn.h"
#include "ReplayTestHud.h"

AReplayTestGameMode::AReplayTestGameMode()
{
	DefaultPawnClass = AReplayTestPawn::StaticClass();
	HUDClass = AReplayTestHud::StaticClass();
}
