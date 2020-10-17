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

    /* When true the character should be able to attack */
    UFUNCTION(BlueprintCallable)
    bool CanAttack() const;

    /* Starts the attack logic */
    UFUNCTION(BlueprintCallable)
    void Attack();

protected:

	virtual void BeginPlay() override;

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    /* Set the timer to start the cooldown for the next attack*/
    void StartCooldown();

    /* Function called when the attack cooldown has been finished */
    UFUNCTION()
    void OnCooldownFinished();

private:

    /* Timer handle to handle the attack cooldown */
    UPROPERTY()
    FTimerHandle AttackCooldownTimerHandle;
};
