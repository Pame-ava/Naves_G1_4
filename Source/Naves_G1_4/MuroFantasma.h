// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroFantasma.generated.h"

/**
 * 
 */
UCLASS()
class NAVES_G1_4_API AMuroFantasma : public AMuro
{
	GENERATED_BODY()

public:
    AMuroFantasma();

protected:
    virtual void Tick(float DeltaTime) override;

private:
    float TiempoAcumulado = 0.0f;
    float Intervalo = 5.0f;
    bool bInvisible = false;
	
};
