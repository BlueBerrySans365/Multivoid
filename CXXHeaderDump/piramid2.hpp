#ifndef UE4SS_SDK_piramid2_HPP
#define UE4SS_SDK_piramid2_HPP

class Apiramid2_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* piramidPing_spooky;                                        // 0x0228 (size: 0x8)
    class UStaticMeshComponent* pumpkin;                                              // 0x0230 (size: 0x8)
    class UParticleSystemComponent* effPing;                                          // 0x0238 (size: 0x8)
    class UParticleSystemComponent* effStomp_2;                                       // 0x0240 (size: 0x8)
    class UParticleSystemComponent* effStomp_1;                                       // 0x0248 (size: 0x8)
    class UParticleSystemComponent* effStomp_3;                                       // 0x0250 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0258 (size: 0x8)
    class UBillboardComponent* lookAt;                                                // 0x0260 (size: 0x8)
    class UArrowComponent* lookDir;                                                   // 0x0268 (size: 0x8)
    class UBillboardComponent* s2;                                                    // 0x0270 (size: 0x8)
    class UBillboardComponent* p_L;                                                   // 0x0278 (size: 0x8)
    class UBillboardComponent* p_R;                                                   // 0x0280 (size: 0x8)
    class UParticleSystemComponent* eff_cons_L;                                       // 0x0288 (size: 0x8)
    class UParticleSystemComponent* eff_cons_R;                                       // 0x0290 (size: 0x8)
    class UCameraShakeSourceComponent* CameraShakeSource;                             // 0x0298 (size: 0x8)
    class UBillboardComponent* s1;                                                    // 0x02A0 (size: 0x8)
    class UBillboardComponent* s3;                                                    // 0x02A8 (size: 0x8)
    class UAudioComponent* piramidPing;                                               // 0x02B0 (size: 0x8)
    class UAudioComponent* step_far3;                                                 // 0x02B8 (size: 0x8)
    class UAudioComponent* step_close3;                                               // 0x02C0 (size: 0x8)
    class UAudioComponent* step_sfar3;                                                // 0x02C8 (size: 0x8)
    class UAudioComponent* step_med3;                                                 // 0x02D0 (size: 0x8)
    class UAudioComponent* step_med2;                                                 // 0x02D8 (size: 0x8)
    class UAudioComponent* step_far2;                                                 // 0x02E0 (size: 0x8)
    class UAudioComponent* step_close2;                                               // 0x02E8 (size: 0x8)
    class UAudioComponent* step_sfar2;                                                // 0x02F0 (size: 0x8)
    class UAudioComponent* step_far1;                                                 // 0x02F8 (size: 0x8)
    class UAudioComponent* step_close1;                                               // 0x0300 (size: 0x8)
    class UAudioComponent* step_sfar1;                                                // 0x0308 (size: 0x8)
    class UAudioComponent* step_med1;                                                 // 0x0310 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0318 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0320 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0328 (size: 0x8)
    class UArrowComponent* movementVector;                                            // 0x0330 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0338 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0348 (size: 0x8)
    float Timeline_2_a_6EB357EC4165A0F1446A689D73F99FAF;                              // 0x0350 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_6EB357EC4165A0F1446A689D73F99FAF; // 0x0354 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0358 (size: 0x8)
    float Timeline_1_a_3D36FA1C440809EE47C216BBA1FDB55F;                              // 0x0360 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_3D36FA1C440809EE47C216BBA1FDB55F; // 0x0364 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0368 (size: 0x8)
    float Timeline_0_a_3924903B40A2EBE05EF8A4B26BDDD7D8;                              // 0x0370 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3924903B40A2EBE05EF8A4B26BDDD7D8; // 0x0374 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0378 (size: 0x8)
    float mov_a_E610030647E148C24D167D943C31B122;                                     // 0x0380 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> mov__Direction_E610030647E148C24D167D943C31B122; // 0x0384 (size: 0x1)
    class UTimelineComponent* mov;                                                    // 0x0388 (size: 0x8)
    class Upiramid_sk_prot_Skeleton_AnimBlueprint_C* Anim;                            // 0x0390 (size: 0x8)
    float Speed;                                                                      // 0x0398 (size: 0x4)
    bool IsWalking;                                                                   // 0x039C (size: 0x1)
    FVector walkSpot;                                                                 // 0x03A0 (size: 0xC)
    float multiplyWalk;                                                               // 0x03AC (size: 0x4)
    class AActor* walkActor;                                                          // 0x03B0 (size: 0x8)
    class Akillerwisp_C* wispTarget;                                                  // 0x03B8 (size: 0x8)
    FVector relLook;                                                                  // 0x03C0 (size: 0xC)
    bool wispGathered;                                                                // 0x03CC (size: 0x1)
    bool gathering;                                                                   // 0x03CD (size: 0x1)
    float P;                                                                          // 0x03D0 (size: 0x4)
    float suc;                                                                        // 0x03D4 (size: 0x4)
    class ApiramidSpawner_C* spawner;                                                 // 0x03D8 (size: 0x8)
    class AInstancedFoliageActor* Foliage;                                            // 0x03E0 (size: 0x8)
    TArray<class AActor*> ignore;                                                     // 0x03E8 (size: 0x10)
    float speed_modify;                                                               // 0x03F8 (size: 0x4)
    class AmainGamemode_C* GameMode;                                                  // 0x0400 (size: 0x8)

    bool isInside();
    void scanWisps(class Akillerwisp_C*& AsKillerwisp);
    FVector walkSpotFunc();
    void walkTo(FVector walkSpot, class AActor* walkActor, bool skipProjection);
    void step(int32 Selection);
    void mov__FinishedFunc();
    void mov__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void OnNotifyEnd_A01F082C4E4A49A74A14309C32B9B944(FName NotifyName);
    void OnNotifyBegin_A01F082C4E4A49A74A14309C32B9B944(FName NotifyName);
    void OnInterrupted_A01F082C4E4A49A74A14309C32B9B944(FName NotifyName);
    void OnBlendOut_A01F082C4E4A49A74A14309C32B9B944(FName NotifyName);
    void OnCompleted_A01F082C4E4A49A74A14309C32B9B944(FName NotifyName);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void moveAnim(bool Forward);
    void checkIfReached();
    void randLoc();
    void seeWisps();
    void changeLook();
    void ReceiveDestroyed();
    void CustomEvent();
    void ExecuteUbergraph_piramid2(int32 EntryPoint);
}; // Size: 0x408

#endif
