#ifndef UE4SS_SDK_antibreather_HPP
#define UE4SS_SDK_antibreather_HPP

class Aantibreather_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class Ucomp_photographic_C* comp_photographic;                                    // 0x04C8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x04D0 (size: 0x8)
    class USphereComponent* hogger;                                                   // 0x04D8 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x04E0 (size: 0x8)
    class UBillboardComponent* shroomLoc;                                             // 0x04E8 (size: 0x8)
    class UStaticMeshComponent* mouthsroom;                                           // 0x04F0 (size: 0x8)
    class UStaticMeshComponent* pup;                                                  // 0x04F8 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0500 (size: 0x8)
    class USpotLightComponent* eyes;                                                  // 0x0508 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0510 (size: 0x8)
    class UBillboardComponent* feet;                                                  // 0x0518 (size: 0x8)
    class UBillboardComponent* Hit;                                                   // 0x0520 (size: 0x8)
    class UStaticMeshComponent* renderCheck;                                          // 0x0528 (size: 0x8)
    class UAudioComponent* loop;                                                      // 0x0530 (size: 0x8)
    class UAudioComponent* gr;                                                        // 0x0538 (size: 0x8)
    class UPawnSensingComponent* PawnSensing;                                         // 0x0540 (size: 0x8)
    bool dash;                                                                        // 0x0548 (size: 0x1)
    class AActor* Player;                                                             // 0x0550 (size: 0x8)
    FVector mov;                                                                      // 0x0558 (size: 0xC)
    float step;                                                                       // 0x0564 (size: 0x4)
    FVector lastStep;                                                                 // 0x0568 (size: 0xC)
    bool aggressive;                                                                  // 0x0574 (size: 0x1)
    bool punched;                                                                     // 0x0575 (size: 0x1)
    float runSpeed;                                                                   // 0x0578 (size: 0x4)
    float walkSpeed;                                                                  // 0x057C (size: 0x4)
    class Uantibreather_LOW_test_Skeleton_AnimBlueprint_C* Anim;                      // 0x0580 (size: 0x8)
    bool wandering;                                                                   // 0x0588 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> A;                                          // 0x0590 (size: 0x10)
    class AActor* eat;                                                                // 0x05A0 (size: 0x8)
    bool runRandom;                                                                   // 0x05A8 (size: 0x1)
    int32 is;                                                                         // 0x05AC (size: 0x4)
    TArray<class AActor*> foods;                                                      // 0x05B0 (size: 0x10)
    bool lookingFood;                                                                 // 0x05C0 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x05C8 (size: 0x10)
    bool brainless;                                                                   // 0x05D8 (size: 0x1)
    float reload;                                                                     // 0x05DC (size: 0x4)
    bool rendered;                                                                    // 0x05E0 (size: 0x1)
    float dmg;                                                                        // 0x05E4 (size: 0x4)
    int32 mouthshroomType;                                                            // 0x05E8 (size: 0x4)
    bool despawnOnFinish;                                                             // 0x05EC (size: 0x1)
    bool D;                                                                           // 0x05ED (size: 0x1)
    bool agressiveSee;                                                                // 0x05EE (size: 0x1)

    void updShroom();
    void dropShroom();
    void stepOn();
    void UserConstructionScript();
    void OnFail_B5B9C816420BEE6F48FECD9C3EC363CB(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_B5B9C816420BEE6F48FECD9C3EC363CB(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_9D90C5B0435B6AE0CB9E6F92D644EB72(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_9D90C5B0435B6AE0CB9E6F92D644EB72(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_B482AA864E2BBD66D1AD528FA5FFE590(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_B482AA864E2BBD66D1AD528FA5FFE590(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveTick(float DeltaSeconds);
    void PlaySound(class USoundBase* NewSound);
    void BndEvt__gr_K2Node_ComponentBoundEvent_1_OnAudioFinished__DelegateSignature();
    void findBlindSpot();
    void punch();
    void dashing();
    void ReceiveBeginPlay();
    void wander();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void ReceiveDestroyed();
    void acquireMushroom();
    void openDoor();
    void checkVisible();
    void BndEvt__antibreather_hogger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_antibreather(int32 EntryPoint);
}; // Size: 0x5EF

#endif
