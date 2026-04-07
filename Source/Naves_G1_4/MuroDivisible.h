// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroDivisible.generated.h"

/**
 * 
 */
UCLASS()
class NAVES_G1_4_API AMuroDivisible : public AMuro
{
	GENERATED_BODY()
public:
    AMuroDivisible();

protected:
    virtual void Tick(float DeltaTime) override;

private:
    bool bDividido = false;
};
