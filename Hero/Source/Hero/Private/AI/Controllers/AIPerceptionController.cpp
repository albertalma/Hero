// Copyright Albert Alma Ltd.

#include "AI/Controllers/AIPerceptionController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionTypes.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "AI/Components/AITargetComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

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

void AAIPerceptionController::UpdateControlRotation(float DeltaTime, bool bUpdatePawn /*= true*/)
{
    const AActor* target = m_targetComponent->GetTarget();

    if (target != nullptr && target->IsValidLowLevel())
    {
        const AActor* owner = Cast<AActor>(GetPawn());
        const FVector direction = (target->GetActorLocation() - owner->GetActorLocation()).GetSafeNormal2D();
        SetControlRotation(direction.ToOrientationRotator());
    }
    else
    {
        if (UCharacterMovementComponent* movement = Cast<ACharacter>(GetPawn())->GetCharacterMovement())
        {
            const FVector Direction = movement->GetLastUpdateVelocity().GetSafeNormal2D();

            if (Direction.IsNearlyZero() == false)
            {
                SetControlRotation(Direction.ToOrientationRotator());
            }
        }
    }
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
            const ACharacter* owner = Cast<ACharacter>(GetPawn());
            owner->GetCharacterMovement()->MaxWalkSpeed = 120.f;
            owner->GetCharacterMovement()->bOrientRotationToMovement = false;
        }
    }
    else if (Actor == nullptr)
    {
        const ACharacter* owner = Cast<ACharacter>(GetPawn());
        owner->GetCharacterMovement()->MaxWalkSpeed = 600.f;
        owner->GetCharacterMovement()->bOrientRotationToMovement = true;
    }
}
