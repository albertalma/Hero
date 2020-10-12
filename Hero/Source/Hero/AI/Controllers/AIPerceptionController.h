// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "AIPerceptionController.generated.h"

class UAIPerceptionComponent;
class UAITargetComponent;

/**
 * AIController with PerceptionComponent and TargetComponent
 */
UCLASS()
class HERO_API AAIPerceptionController : public AAIController
{
    GENERATED_BODY()

    AAIPerceptionController();

    UFUNCTION(BlueprintCallable)
    UAITargetComponent* GetTargetComponent() const;

protected:

    void BeginPlay() override;

    /* Called when the target is updated using the perception component */
    UFUNCTION()
    void OnTargetUpdated(AActor* Actor, FAIStimulus Stimulus);

private:

    UPROPERTY(EditDefaultsOnly)
    UAIPerceptionComponent* m_perceptionComponent;

    UAITargetComponent* m_targetComponent;
	
};
