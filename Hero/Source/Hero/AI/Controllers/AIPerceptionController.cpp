// Fill out your copyright notice in the Description page of Project Settings.

#include "AIPerceptionController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionTypes.h"
#include "../Components/AITargetComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"

const FName kBBKey_Target = "Target";

AAIPerceptionController::AAIPerceptionController()
{
    m_perceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception"));
    m_targetComponent = CreateDefaultSubobject<UAITargetComponent>(TEXT("AITarget"));
}

UAITargetComponent* AAIPerceptionController::GetTargetComponent() const
{
    return m_targetComponent;
}

void AAIPerceptionController::BeginPlay()
{
    Super::BeginPlay();
    m_perceptionComponent->OnTargetPerceptionUpdated.AddUniqueDynamic(this, &AAIPerceptionController::OnTargetUpdated);
}

void AAIPerceptionController::OnTargetUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    if (Actor != nullptr && GetTargetComponent()->GetTarget() != Actor)
    {
        ACharacter* character = Cast<ACharacter>(Actor);
        if (character != nullptr && character->IsPlayerControlled())
        {
            m_targetComponent->SetTarget(Actor);
        }
    }
}
