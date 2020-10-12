// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIAttackComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HERO_API UAIAttackComponent : public UActorComponent
{
	GENERATED_BODY()

public:

    /* Cooldown between any type of attack character based */
    UPROPERTY(EditAnyWhere, Category = "Attack Settings")
    float AttackCooldown = 5.f;

    /* Deviation for the cooldown between attacks */
    UPROPERTY(EditAnyWhere, Category = "Attack Settings")
    float AttackCooldownDeviation = 0.5f;

public:	
	// Sets default values for this component's properties
	UAIAttackComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

};
