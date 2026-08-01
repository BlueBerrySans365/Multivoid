#ifndef UE4SS_SDK_piramidTest_HPP
#define UE4SS_SDK_piramidTest_HPP

class ApiramidTest_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x04C8 (size: 0x8)
    class UArrowComponent* look1;                                                     // 0x04D0 (size: 0x8)
    class UBillboardComponent* p_L;                                                   // 0x04D8 (size: 0x8)
    class UBillboardComponent* p_R;                                                   // 0x04E0 (size: 0x8)
    class UParticleSystemComponent* eff_cons_L;                                       // 0x04E8 (size: 0x8)
    class UParticleSystemComponent* eff_cons_R;                                       // 0x04F0 (size: 0x8)
    class UArrowComponent* look;                                                      // 0x04F8 (size: 0x8)
    class UBillboardComponent* looking;                                               // 0x0500 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0508 (size: 0x8)
    class UArrowComponent* norm;                                                      // 0x0510 (size: 0x8)
    class UAudioComponent* step_far3;                                                 // 0x0518 (size: 0x8)
    class UAudioComponent* step_close3;                                               // 0x0520 (size: 0x8)
    class UAudioComponent* step_sfar3;                                                // 0x0528 (size: 0x8)
    class UAudioComponent* step_med3;                                                 // 0x0530 (size: 0x8)
    class UAudioComponent* step_far2;                                                 // 0x0538 (size: 0x8)
    class UAudioComponent* step_close2;                                               // 0x0540 (size: 0x8)
    class UAudioComponent* step_sfar2;                                                // 0x0548 (size: 0x8)
    class UAudioComponent* step_med2;                                                 // 0x0550 (size: 0x8)
    class UAudioComponent* step_far1;                                                 // 0x0558 (size: 0x8)
    class UAudioComponent* step_close1;                                               // 0x0560 (size: 0x8)
    class UAudioComponent* step_sfar1;                                                // 0x0568 (size: 0x8)
    class UAudioComponent* step_med1;                                                 // 0x0570 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0578 (size: 0x8)
    class UAudioComponent* piramidPing;                                               // 0x0580 (size: 0x8)
    class UCameraShakeSourceComponent* CameraShakeSource;                             // 0x0588 (size: 0x8)
    class UChildActorComponent* subPawn;                                              // 0x0590 (size: 0x8)
    class UArrowComponent* Walk;                                                      // 0x0598 (size: 0x8)
    class UBillboardComponent* s3;                                                    // 0x05A0 (size: 0x8)
    class UBillboardComponent* s2;                                                    // 0x05A8 (size: 0x8)
    class UBillboardComponent* s1;                                                    // 0x05B0 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x05B8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x05C0 (size: 0x8)
    float Timeline_0_a_5CD855F54912ED339A9E648F17BAE783;                              // 0x05C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_5CD855F54912ED339A9E648F17BAE783; // 0x05CC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x05D0 (size: 0x8)
    float suckIn_a_BE0C84274D262315A2CB12A9A932A465;                                  // 0x05D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> suckIn__Direction_BE0C84274D262315A2CB12A9A932A465; // 0x05DC (size: 0x1)
    class UTimelineComponent* suckIn;                                                 // 0x05E0 (size: 0x8)
    float beamAlpha_a_FF1C88634EB22B9FFF965FBEF2EF752C;                               // 0x05E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> beamAlpha__Direction_FF1C88634EB22B9FFF965FBEF2EF752C; // 0x05EC (size: 0x1)
    class UTimelineComponent* beamAlpha;                                              // 0x05F0 (size: 0x8)
    float spd_a_ECDF042B410EC775B61DA499366FF31C;                                     // 0x05F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> spd__Direction_ECDF042B410EC775B61DA499366FF31C; // 0x05FC (size: 0x1)
    class UTimelineComponent* spd;                                                    // 0x0600 (size: 0x8)
    FVector Loc;                                                                      // 0x0608 (size: 0xC)
    class Upiramid_sk_prot_Skeleton_AnimBlueprint_C* Anim;                            // 0x0618 (size: 0x8)
    class ApiramidSubpawn_C* piramidSubpawn;                                          // 0x0620 (size: 0x8)
    FVector walkPoint;                                                                // 0x0628 (size: 0xC)
    float turnSpeed;                                                                  // 0x0634 (size: 0x4)
    FVector walkToPoint;                                                              // 0x0638 (size: 0xC)
    int32 Point;                                                                      // 0x0644 (size: 0x4)
    bool outOfNav;                                                                    // 0x0648 (size: 0x1)
    FVector lk;                                                                       // 0x064C (size: 0xC)
    FVector lk_t;                                                                     // 0x0658 (size: 0xC)
    bool finishedPath;                                                                // 0x0664 (size: 0x1)
    FRotator velrotTarget;                                                            // 0x0668 (size: 0xC)
    class Akillerwisp_C* Target;                                                      // 0x0678 (size: 0x8)
    bool gathering;                                                                   // 0x0680 (size: 0x1)
    class Akillerwisp_C* gatherWisp;                                                  // 0x0688 (size: 0x8)
    FVectorSpringState spr;                                                           // 0x0690 (size: 0x18)
    float P;                                                                          // 0x06A8 (size: 0x4)
    float suc;                                                                        // 0x06AC (size: 0x4)
    class ApiramidSpawner_C* spawner;                                                 // 0x06B0 (size: 0x8)
    bool Left;                                                                        // 0x06B8 (size: 0x1)
    bool aboutTo;                                                                     // 0x06B9 (size: 0x1)
    FFloatSpringState spring;                                                         // 0x06BC (size: 0x8)
    bool wispGathered;                                                                // 0x06C4 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x06C8 (size: 0x8)

    bool isInside();
    bool boolDist1();
    FVector springVec1();
    void scanForWisps(class Akillerwisp_C*& AsKillerwisp);
    void notif(int32 Selection);
    void spd__FinishedFunc();
    void spd__UpdateFunc();
    void beamAlpha__FinishedFunc();
    void beamAlpha__UpdateFunc();
    void suckIn__FinishedFunc();
    void suckIn__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnFail_4F701AC8453DAFAEB7A7C7B1B96D6849(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_4F701AC8453DAFAEB7A7C7B1B96D6849(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_CDC4E739476A6D90F257518D997A9229(FName NotifyName);
    void OnNotifyBegin_CDC4E739476A6D90F257518D997A9229(FName NotifyName);
    void OnInterrupted_CDC4E739476A6D90F257518D997A9229(FName NotifyName);
    void OnBlendOut_CDC4E739476A6D90F257518D997A9229(FName NotifyName);
    void OnCompleted_CDC4E739476A6D90F257518D997A9229(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void walkRand();
    void turning();
    void ReceiveDestroyed();
    void ExecuteUbergraph_piramidTest(int32 EntryPoint);
}; // Size: 0x6D0

#endif
