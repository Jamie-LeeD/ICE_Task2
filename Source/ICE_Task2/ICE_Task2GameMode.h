// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ICE_Task2GameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AICE_Task2GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	AICE_Task2GameMode();
};



