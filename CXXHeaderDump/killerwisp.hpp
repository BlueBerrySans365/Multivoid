#ifndef UE4SS_SDK_killerwisp_HPP
#define UE4SS_SDK_killerwisp_HPP

class Akillerwisp_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UParticleSystemComponent* eff_L;                                            // 0x04C8 (size: 0x8)
    class UParticleSystemComponent* eff_R;                                            // 0x04D0 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x04D8 (size: 0x8)
    class UParticleSystemComponent* gl1;                                              // 0x04E0 (size: 0x8)
    class UParticleSystemComponent* gl2;                                              // 0x04E8 (size: 0x8)
    class UParticleSystemComponent* gl3;                                              // 0x04F0 (size: 0x8)
    class UAudioComponent* dd;                                                        // 0x04F8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0500 (size: 0x8)
    class UParticleSystemComponent* beam2_L;                                          // 0x0508 (size: 0x8)
    class UParticleSystemComponent* beam1_R;                                          // 0x0510 (size: 0x8)
    class UParticleSystemComponent* beam3_B;                                          // 0x0518 (size: 0x8)
    class UAudioComponent* l2;                                                        // 0x0520 (size: 0x8)
    class UAudioComponent* l5;                                                        // 0x0528 (size: 0x8)
    class UAudioComponent* l4;                                                        // 0x0530 (size: 0x8)
    class UAudioComponent* l3;                                                        // 0x0538 (size: 0x8)
    class UAudioComponent* l1;                                                        // 0x0540 (size: 0x8)
    class UAIPerceptionComponent* AIPerception;                                       // 0x0548 (size: 0x8)
    class UStaticMeshComponent* LEG_L;                                                // 0x0550 (size: 0x8)
    class UStaticMeshComponent* arm_L;                                                // 0x0558 (size: 0x8)
    class UStaticMeshComponent* leg_R;                                                // 0x0560 (size: 0x8)
    class UStaticMeshComponent* arm_R;                                                // 0x0568 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0570 (size: 0x8)
    class USpringArmComponent* sb_1;                                                  // 0x0578 (size: 0x8)
    class USpringArmComponent* sb_2;                                                  // 0x0580 (size: 0x8)
    class USpringArmComponent* sb_3;                                                  // 0x0588 (size: 0x8)
    class UBillboardComponent* beamend_3_D;                                           // 0x0590 (size: 0x8)
    class UBillboardComponent* beamend_2_L;                                           // 0x0598 (size: 0x8)
    class UBillboardComponent* beamend_1_R;                                           // 0x05A0 (size: 0x8)
    class UParticleSystemComponent* Center;                                           // 0x05A8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x05B0 (size: 0x8)
    float ssens_a_A2D6199444429C39EE561C840501680B;                                   // 0x05B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ssens__Direction_A2D6199444429C39EE561C840501680B; // 0x05BC (size: 0x1)
    class UTimelineComponent* ssens;                                                  // 0x05C0 (size: 0x8)
    float a_a_8D1677464B505243AE98468269142831;                                       // 0x05C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_8D1677464B505243AE98468269142831; // 0x05CC (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x05D0 (size: 0x8)
    bool tryGrab;                                                                     // 0x05D8 (size: 0x1)
    class Aprop_bloodGib_C* g1;                                                       // 0x05E0 (size: 0x8)
    class Aprop_bloodGib_C* g2;                                                       // 0x05E8 (size: 0x8)
    class Aprop_bloodGib_C* g3;                                                       // 0x05F0 (size: 0x8)
    class Aprop_bloodGib_C* g4;                                                       // 0x05F8 (size: 0x8)
    bool grab;                                                                        // 0x0600 (size: 0x1)
    class UkillerWispAnim1_Skeleton_AnimBlueprint_C* Anim;                            // 0x0608 (size: 0x8)
    class APawn* Target;                                                              // 0x0610 (size: 0x8)
    bool killed;                                                                      // 0x0618 (size: 0x1)
    bool gathered;                                                                    // 0x0619 (size: 0x1)
    class ApiramidTest_C* piram;                                                      // 0x0620 (size: 0x8)
    FVector 1323123122131321322;                                                      // 0x0628 (size: 0xC)
    bool rendered;                                                                    // 0x0634 (size: 0x1)
    bool playerDamaged;                                                               // 0x0635 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x0638 (size: 0x10)
    class Apiramid2_C* piram2;                                                        // 0x0648 (size: 0x8)
    class AmainGamemode_C* GameMode;                                                  // 0x0650 (size: 0x8)
    bool harmless;                                                                    // 0x0658 (size: 0x1)
    bool avoidPlayer;                                                                 // 0x0659 (size: 0x1)

    void randomWalkPoint(FVector& RandomLocation);
    void scanForActors();
    void gather(class ApiramidTest_C* piram, class Apiramid2_C* piram2);
    bool canReach();
    void lookAt();
    void beamsEnds();
    void UserConstructionScript();
    void a__FinishedFunc();
    void a__UpdateFunc();
    void ssens__FinishedFunc();
    void ssens__UpdateFunc();
    void OnFail_8F96843848D18C8955C1FE8DF9577D6D(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_8F96843848D18C8955C1FE8DF9577D6D(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_3621BC3D4D928A7F549D9B84E8756B55(FName NotifyName);
    void OnNotifyBegin_3621BC3D4D928A7F549D9B84E8756B55(FName NotifyName);
    void OnInterrupted_3621BC3D4D928A7F549D9B84E8756B55(FName NotifyName);
    void OnBlendOut_3621BC3D4D928A7F549D9B84E8756B55(FName NotifyName);
    void OnCompleted_3621BC3D4D928A7F549D9B84E8756B55(FName NotifyName);
    void OnFail_F9173B124B99F8965CCE0BAD5D6E6488(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_F9173B124B99F8965CCE0BAD5D6E6488(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_ED6C8D0A480A590842070B8D5FED324F(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_ED6C8D0A480A590842070B8D5FED324F(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_2BC8533948B40C45CCA30A8A1AA29791(FName NotifyName);
    void OnNotifyBegin_2BC8533948B40C45CCA30A8A1AA29791(FName NotifyName);
    void OnInterrupted_2BC8533948B40C45CCA30A8A1AA29791(FName NotifyName);
    void OnBlendOut_2BC8533948B40C45CCA30A8A1AA29791(FName NotifyName);
    void OnCompleted_2BC8533948B40C45CCA30A8A1AA29791(FName NotifyName);
    void OnNotifyEnd_D920F109479EA9C2B43293A8547D1BCE(FName NotifyName);
    void OnNotifyBegin_D920F109479EA9C2B43293A8547D1BCE(FName NotifyName);
    void OnInterrupted_D920F109479EA9C2B43293A8547D1BCE(FName NotifyName);
    void OnBlendOut_D920F109479EA9C2B43293A8547D1BCE(FName NotifyName);
    void OnCompleted_D920F109479EA9C2B43293A8547D1BCE(FName NotifyName);
    void Stretch(bool Forward);
    void Walk();
    void BndEvt__killerwisp_AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, FAIStimulus Stimulus);
    void BndEvt__killerwisp_AIPerception_K2Node_ComponentBoundEvent_6_PerceptionUpdatedDelegate__DelegateSignature(const TArray<class AActor*>& UpdatedActors);
    void ReceiveDestroyed();
    void Capture();
    void wqeeqeww();
    void releasePlayer();
    void BndEvt__killerwisp_AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionInfoUpdatedDelegate__DelegateSignature(const FActorPerceptionUpdateInfo& UpdateInfo);
    void ReceiveTick(float DeltaSeconds);
    void updateSense();
    void moveToTarg();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_killerwisp(int32 EntryPoint);
}; // Size: 0x65A

#endif
