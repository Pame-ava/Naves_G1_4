// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Naves_G1_4GameMode.generated.h"

//class APawn;
class AMuro;

UCLASS(MinimalAPI)
class ANaves_G1_4GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ANaves_G1_4GameMode();

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
    // Contenedor de muros
    UPROPERTY()
    TArray<AMuro*> Muros;

    // Número de muros a generar
    int32 NumeroMuros = 10;

    // Área de spawn
    float LimiteSpawn = 1000.0f;

    void GenerarMuros();

};



