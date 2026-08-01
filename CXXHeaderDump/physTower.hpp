#ifndef UE4SS_SDK_physTower_HPP
#define UE4SS_SDK_physTower_HPP

class AphysTower_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* cableAttach4;                                          // 0x0228 (size: 0x8)
    class UBillboardComponent* cableAttach3;                                          // 0x0230 (size: 0x8)
    class UBillboardComponent* cableAttach2;                                          // 0x0238 (size: 0x8)
    class UBillboardComponent* cableAttach1;                                          // 0x0240 (size: 0x8)
    class UBillboardComponent* cableAttachRoot;                                       // 0x0248 (size: 0x8)
    class UCableComponent* cable4;                                                    // 0x0250 (size: 0x8)
    class UCableComponent* cable3;                                                    // 0x0258 (size: 0x8)
    class UCableComponent* cable2;                                                    // 0x0260 (size: 0x8)
    class UCableComponent* cable1;                                                    // 0x0268 (size: 0x8)
    class UAudioComponent* audio_strain3;                                             // 0x0270 (size: 0x8)
    class UAudioComponent* audio_strain2;                                             // 0x0278 (size: 0x8)
    class UAudioComponent* audio_strain4;                                             // 0x0280 (size: 0x8)
    class UAudioComponent* audio_strain1;                                             // 0x0288 (size: 0x8)
    class UPhysicsConstraintComponent* c10;                                           // 0x0290 (size: 0x8)
    class UPhysicsConstraintComponent* c9;                                            // 0x0298 (size: 0x8)
    class UPhysicsConstraintComponent* c8;                                            // 0x02A0 (size: 0x8)
    class UPhysicsConstraintComponent* c7;                                            // 0x02A8 (size: 0x8)
    class UPhysicsConstraintComponent* c6;                                            // 0x02B0 (size: 0x8)
    class UPhysicsConstraintComponent* c5;                                            // 0x02B8 (size: 0x8)
    class UPhysicsConstraintComponent* c4;                                            // 0x02C0 (size: 0x8)
    class UPhysicsConstraintComponent* C3;                                            // 0x02C8 (size: 0x8)
    class UPhysicsConstraintComponent* C2;                                            // 0x02D0 (size: 0x8)
    class UChildActorComponent* ladder;                                               // 0x02D8 (size: 0x8)
    class UArrowComponent* wind;                                                      // 0x02E0 (size: 0x8)
    class UPhysicsConstraintComponent* C1;                                            // 0x02E8 (size: 0x8)
    class UChildActorComponent* s10;                                                  // 0x02F0 (size: 0x8)
    class UChildActorComponent* s9;                                                   // 0x02F8 (size: 0x8)
    class UChildActorComponent* s8;                                                   // 0x0300 (size: 0x8)
    class UChildActorComponent* s7;                                                   // 0x0308 (size: 0x8)
    class UChildActorComponent* s6;                                                   // 0x0310 (size: 0x8)
    class UChildActorComponent* s5;                                                   // 0x0318 (size: 0x8)
    class UChildActorComponent* s4;                                                   // 0x0320 (size: 0x8)
    class UChildActorComponent* s3;                                                   // 0x0328 (size: 0x8)
    class UChildActorComponent* s2;                                                   // 0x0330 (size: 0x8)
    class UChildActorComponent* s1;                                                   // 0x0338 (size: 0x8)
    class UStaticMeshComponent* s0;                                                   // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0348 (size: 0x8)
    class Aprop_C* Top;                                                               // 0x0350 (size: 0x8)
    class Aladder_curved_C* ladderSpline;                                             // 0x0358 (size: 0x8)
    TArray<class UChildActorComponent*> Segments;                                     // 0x0360 (size: 0x10)
    float windForce;                                                                  // 0x0370 (size: 0x4)
    TArray<class UChildActorComponent*> creakSegments;                                // 0x0378 (size: 0x10)
    TArray<FVector> creakLocations;                                                   // 0x0388 (size: 0x10)
    float creakTolerance;                                                             // 0x0398 (size: 0x4)
    TArray<class UAudioComponent*> creakAudio;                                        // 0x03A0 (size: 0x10)
    bool canActive;                                                                   // 0x03B0 (size: 0x1)

    void upd();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void checkSPeedTimer();
    void ExecuteUbergraph_physTower(int32 EntryPoint);
}; // Size: 0x3B1

#endif
