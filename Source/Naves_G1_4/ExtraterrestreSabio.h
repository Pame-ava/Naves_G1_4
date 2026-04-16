// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoExtraterrestre.h"
#include "ExtraterrestreSabio.generated.h"

/**
 * 
 */
UCLASS()
class NAVES_G1_4_API AExtraterrestreSabio : public AEnemigoExtraterrestre
{
	GENERATED_BODY()
	
public:
	AExtraterrestreSabio();

	virtual void MoverExtraterrestre(float DeltaTime) override;
	virtual void Disparar();
};
