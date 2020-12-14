// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ChristmasJamHUD.generated.h"

UCLASS()
class AChristmasJamHUD : public AHUD
{
	GENERATED_BODY()

public:
	AChristmasJamHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

