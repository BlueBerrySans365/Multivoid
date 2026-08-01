#ifndef UE4SS_SDK_DynamicGravityCharacter_HPP
#define UE4SS_SDK_DynamicGravityCharacter_HPP

#include "DynamicGravityCharacter_enums.hpp"

struct FHorizontalAndVerticalVelocities
{
    FVector HorizontalVelocity;                                                       // 0x0000 (size: 0xC)
    FVector VerticalVelocity;                                                         // 0x000C (size: 0xC)

}; // Size: 0x18

class ADGCharacter : public ACharacter
{
    EViewRotationBaseMode ViewRotationBaseMode;                                       // 0x04C4 (size: 0x1)
    FRotator CustomViewRotationBase;                                                  // 0x04C8 (size: 0xC)
    FRotator ViewRotationBase;                                                        // 0x04D8 (size: 0xC)
    float ViewRotationAdjustIntensity;                                                // 0x04E4 (size: 0x4)
    float ControlRotationAdjustRate;                                                  // 0x04E8 (size: 0x4)
    float ResetControlRotationAdjustRate;                                             // 0x04EC (size: 0x4)

    FVector VerticalVelocity();
    float VerticalSpeed();
    float Speed();
    void SetViewRotationBaseMode(EViewRotationBaseMode NewViewRotationBaseMode);
    void ResetYawControlRotation();
    void ResetRollControlRotation();
    void ResetPitchControlRotation();
    void ResetControlRotationVertically();
    void ResetControlRotationHorizontally();
    void ResetControlRotation();
    FVector HorizontalVelocity();
    float HorizontalSpeed();
    FHorizontalAndVerticalVelocities HorizontalAndVerticalVelocities();
    EViewRotationBaseMode GetViewRotationBaseMode();
    FRotator GetViewRotation();
    void AddRightRadialMovementInputWithViewRotationAsWorldRotation(float ScaleValue, bool bForce);
    void AddRightRadialMovementInput(FRotator WorldRotation, float ScaleValue, bool bForce);
    void AddRightPlanarMovementInputWithViewRotationAsWorldRotation(float ScaleValue, bool bForce);
    void AddRightPlanarMovementInput(FRotator WorldRotation, float ScaleValue, bool bForce);
    void AddForwardRadialMovementInputWithViewRotationAsWorldRotation(float ScaleValue, bool bForce);
    void AddForwardRadialMovementInput(FRotator WorldRotation, float ScaleValue, bool bForce);
    void AddForwardPlanarMovementInputWithViewRotationAsWorldRotation(float ScaleValue, bool bForce);
    void AddForwardPlanarMovementInput(FRotator WorldRotation, float ScaleValue, bool bForce);
}; // Size: 0x4F0

class UDGCharacterMovementComponent : public UCharacterMovementComponent
{
    EWalkableFloorNormalMode WalkableFloorNormalMode;                                 // 0x0AF0 (size: 0x1)
    FVector CustomWalkableFloorNormal;                                                // 0x0AF4 (size: 0xC)
    EJumpDirectionMode JumpDirectionMode;                                             // 0x0B00 (size: 0x1)
    FVector CustomJumpDirection;                                                      // 0x0B04 (size: 0xC)
    float RotationAdjustIntensity;                                                    // 0x0B60 (size: 0x4)
    EPhysicsRotationVerticalDirectionMode PhysicsRotationVerticalDirectionMode;       // 0x0B64 (size: 0x1)
    FVector VerticalDirection;                                                        // 0x0B68 (size: 0xC)
    bool bIgnoreWorldGravityIfDynamicGravityIsNotZero;                                // 0x0B74 (size: 0x1)
    FVector DynamicGravity;                                                           // 0x0B78 (size: 0xC)

    FVector WorldGravityNormal();
    FVector WorldGravity();
    FVector WalkableFloorNormal();
    void SetCustomWalkableFloorNormal(FVector NewFloorDirection);
    void SetCustomJumpDirection(FVector NewJumpDirection);
    FVector JumpDirection();
    FVector GravityNormal();
    FVector Gravity();
    FVector GetCustomWalkableFloorNormal();
    FVector GetCustomJumpDirection();
    void FindFloor(const FVector WalkableNormal, const FRotator CapsuleRotation, FVector CapsuleLocation, FFindFloorResult& FloorResult);
    FVector DynamicGravityNormal();
    void ComputeFloorDist(const FVector WalkableNormal, const FRotator CapsuleRotation, FVector CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, FFindFloorResult& FloorResult);
}; // Size: 0xB90

#endif
