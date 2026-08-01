#ifndef UE4SS_SDK_tentacleBall_HPP
#define UE4SS_SDK_tentacleBall_HPP

class AtentacleBall_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UAudioComponent* tentacleBallTalk_Cue;                                      // 0x04C8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x04D0 (size: 0x8)
    class UAudioComponent* charging;                                                  // 0x04D8 (size: 0x8)
    class UParticleSystemComponent* eff_tentacleBallShootWindup;                      // 0x04E0 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x04E8 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x04F0 (size: 0x8)
    class UAudioComponent* loop;                                                      // 0x04F8 (size: 0x8)
    class UPointLightComponent* PointLight3;                                          // 0x0500 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x0508 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0510 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0518 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0520 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0528 (size: 0x8)
    float talkLight_a_38C5231C4C139F7F4E6A59A6325E0599;                               // 0x0530 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> talkLight__Direction_38C5231C4C139F7F4E6A59A6325E0599; // 0x0534 (size: 0x1)
    class UTimelineComponent* talkLight;                                              // 0x0538 (size: 0x8)
    float Timeline_0_a_6E24E7B94934EAA7D765E79C57A60264;                              // 0x0540 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_6E24E7B94934EAA7D765E79C57A60264; // 0x0544 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0548 (size: 0x8)
    float lookAtPlayer_a_CFB7EB1F4493740202865FB80020199F;                            // 0x0550 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> lookAtPlayer__Direction_CFB7EB1F4493740202865FB80020199F; // 0x0554 (size: 0x1)
    class UTimelineComponent* lookAtPlayer;                                           // 0x0558 (size: 0x8)
    class AtentacleBallsFollower_C* follower;                                         // 0x0560 (size: 0x8)
    bool isHostile;                                                                   // 0x0568 (size: 0x1)
    TArray<class AtentacleBall_C*> buddies;                                           // 0x0570 (size: 0x10)
    bool chasing;                                                                     // 0x0580 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x0588 (size: 0x10)
    bool isAnim;                                                                      // 0x0598 (size: 0x1)
    class UtentacleBall_prot_Skeleton_AnimBlueprint1_C* Anim;                         // 0x05A0 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj2;                                       // 0x05A8 (size: 0x10)
    bool canTalk;                                                                     // 0x05B8 (size: 0x1)
    int32 iTalk;                                                                      // 0x05BC (size: 0x4)
    TArray<class AActor*> ignores;                                                    // 0x05C0 (size: 0x10)
    float Size;                                                                       // 0x05D0 (size: 0x4)

    void talk(int32 iTalk);
    void setBuddies(TArray<class AtentacleBall_C*>& buddies);
    void unhostile();
    void step(FVector Location, bool step);
    void lookAtPlayer__FinishedFunc();
    void lookAtPlayer__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void talkLight__FinishedFunc();
    void talkLight__UpdateFunc();
    void OnFail_35AFE7064B8EDBCC44410888DB27517C(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_35AFE7064B8EDBCC44410888DB27517C(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_9784EC7B418509789CF5309C539A20EB(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_9784EC7B418509789CF5309C539A20EB(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_D541AF89420637D9FCDCE080F2CB30FD(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_D541AF89420637D9FCDCE080F2CB30FD(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_115D36164FA4B85E4BD8FE90B855628C(FName NotifyName);
    void OnNotifyBegin_115D36164FA4B85E4BD8FE90B855628C(FName NotifyName);
    void OnInterrupted_115D36164FA4B85E4BD8FE90B855628C(FName NotifyName);
    void OnBlendOut_115D36164FA4B85E4BD8FE90B855628C(FName NotifyName);
    void OnCompleted_115D36164FA4B85E4BD8FE90B855628C(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void move();
    void lookAt(bool Forward);
    void chargeSound();
    void BndEvt__tentacleBall_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void goTalk();
    void repeat();
    void lightTalk();
    void ExecuteUbergraph_tentacleBall(int32 EntryPoint);
}; // Size: 0x5D4

#endif
