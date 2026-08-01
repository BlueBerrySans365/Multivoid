#ifndef UE4SS_SDK_grayboar_HPP
#define UE4SS_SDK_grayboar_HPP

class Agrayboar_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* veh;                                                      // 0x0370 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x0378 (size: 0x8)
    class UArrowComponent* moveForce;                                                 // 0x0380 (size: 0x8)
    class USceneComponent* eyes;                                                      // 0x0388 (size: 0x8)
    class UAudioComponent* audio_loop_turn;                                           // 0x0390 (size: 0x8)
    class UAudioComponent* audio_loop_velocity;                                       // 0x0398 (size: 0x8)
    class UAudioComponent* audio_attack;                                              // 0x03A0 (size: 0x8)
    class UAudioComponent* audio_roar;                                                // 0x03A8 (size: 0x8)
    class UAudioComponent* audio_idle;                                                // 0x03B0 (size: 0x8)
    class USphereComponent* biteZone;                                                 // 0x03B8 (size: 0x8)
    class USphereComponent* biteInitZone;                                             // 0x03C0 (size: 0x8)
    class USphereComponent* seeZone;                                                  // 0x03C8 (size: 0x8)
    class UArrowComponent* Forward;                                                   // 0x03D0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x03D8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x03E0 (size: 0x8)
    class UParticleSystemComponent* hover4;                                           // 0x03E8 (size: 0x8)
    class UParticleSystemComponent* hover3;                                           // 0x03F0 (size: 0x8)
    class UParticleSystemComponent* hover2;                                           // 0x03F8 (size: 0x8)
    class UParticleSystemComponent* hover1;                                           // 0x0400 (size: 0x8)
    class AgrayboarPawn_C* Pawn;                                                      // 0x0408 (size: 0x8)
    FVector movementVector;                                                           // 0x0410 (size: 0xC)
    class Ugrayboar_Skeleton_AnimBlueprint_C* Anim;                                   // 0x0420 (size: 0x8)
    float Speed;                                                                      // 0x0428 (size: 0x4)
    float speedMultDir;                                                               // 0x042C (size: 0x4)
    class AActor* Target;                                                             // 0x0430 (size: 0x8)
    float speedMultiplier;                                                            // 0x0438 (size: 0x4)
    int32 ind;                                                                        // 0x043C (size: 0x4)
    FVector currPoint;                                                                // 0x0440 (size: 0xC)
    FVector nextPoint;                                                                // 0x044C (size: 0xC)
    FVector movementForce;                                                            // 0x0458 (size: 0xC)
    bool isMoving;                                                                    // 0x0464 (size: 0x1)
    bool canForget;                                                                   // 0x0465 (size: 0x1)
    bool biting;                                                                      // 0x0466 (size: 0x1)
    class AActor* biteActor;                                                          // 0x0468 (size: 0x8)
    bool fuckedUp;                                                                    // 0x0470 (size: 0x1)
    bool roaring;                                                                     // 0x0471 (size: 0x1)
    float health;                                                                     // 0x0474 (size: 0x4)
    bool dying;                                                                       // 0x0478 (size: 0x1)
    FVector movementForceVector;                                                      // 0x047C (size: 0xC)
    bool isEvent;                                                                     // 0x0488 (size: 0x1)
    bool damagedAnim;                                                                 // 0x0489 (size: 0x1)
    float lootDistance;                                                               // 0x048C (size: 0x4)
    class AActor* wanderAroundObject;                                                 // 0x0490 (size: 0x8)
    class AActor* lastDamagedActor;                                                   // 0x0498 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> objHover;                                   // 0x04A0 (size: 0x10)
    bool isOnPath;                                                                    // 0x04B0 (size: 0x1)
    bool skipDeathAnimation;                                                          // 0x04B1 (size: 0x1)
    FHitResult hoverHitResult;                                                        // 0x04B4 (size: 0x88)
    float animationSpeed;                                                             // 0x053C (size: 0x4)
    float uprightForce;                                                               // 0x0540 (size: 0x4)
    float turnForce;                                                                  // 0x0544 (size: 0x4)
    float Damage;                                                                     // 0x0548 (size: 0x4)

    void objectDamaged(class AActor* Player);
    void lightningInfluence(bool& influence, float& Multiplier);
    void killed();
    void explosion();
    void SetDamping();
    FVector makeWanderLoc();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void sensePawn();
    FVector makeMovementVector();
    void UserConstructionScript();
    void OnNotifyEnd_81CD6F744AFBDCC27F8D8E9F469E3058(FName NotifyName);
    void OnNotifyBegin_81CD6F744AFBDCC27F8D8E9F469E3058(FName NotifyName);
    void OnInterrupted_81CD6F744AFBDCC27F8D8E9F469E3058(FName NotifyName);
    void OnBlendOut_81CD6F744AFBDCC27F8D8E9F469E3058(FName NotifyName);
    void OnCompleted_81CD6F744AFBDCC27F8D8E9F469E3058(FName NotifyName);
    void OnNotifyEnd_FEF3E3834EA127D483B3218D367A2A58(FName NotifyName);
    void OnNotifyBegin_FEF3E3834EA127D483B3218D367A2A58(FName NotifyName);
    void OnInterrupted_FEF3E3834EA127D483B3218D367A2A58(FName NotifyName);
    void OnBlendOut_FEF3E3834EA127D483B3218D367A2A58(FName NotifyName);
    void OnCompleted_FEF3E3834EA127D483B3218D367A2A58(FName NotifyName);
    void OnNotifyEnd_090C71314C99233380DE7DB1B5D207C6(FName NotifyName);
    void OnNotifyBegin_090C71314C99233380DE7DB1B5D207C6(FName NotifyName);
    void OnInterrupted_090C71314C99233380DE7DB1B5D207C6(FName NotifyName);
    void OnBlendOut_090C71314C99233380DE7DB1B5D207C6(FName NotifyName);
    void OnCompleted_090C71314C99233380DE7DB1B5D207C6(FName NotifyName);
    void OnNotifyEnd_F2D44BFA4340ED84016CA19643B74736(FName NotifyName);
    void OnNotifyBegin_F2D44BFA4340ED84016CA19643B74736(FName NotifyName);
    void OnInterrupted_F2D44BFA4340ED84016CA19643B74736(FName NotifyName);
    void OnBlendOut_F2D44BFA4340ED84016CA19643B74736(FName NotifyName);
    void OnCompleted_F2D44BFA4340ED84016CA19643B74736(FName NotifyName);
    void OnMoveFinished_EAF218CB4B42F6CCCF73E9B452B5AF9D(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    void OnRequestFailed_EAF218CB4B42F6CCCF73E9B452B5AF9D();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void move();
    void ReceiveDestroyed();
    void updMov(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);
    void senseUpdate();
    void saw();
    void BndEvt__grayboar_biteZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void detected();
    void BndEvt__grayboar_audio_idle_K2Node_ComponentBoundEvent_2_OnAudioFinished__DelegateSignature();
    void Dest(class AActor* DestroyedActor);
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void damaged(float Sub, bool skipAnim);
    void ImpactDamage(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void fireDamage(float Damage);
    void BndEvt__grayboar_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__grayboar_seeZone_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__grayboar_seeZone_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
    void setWalking();
    void setDamageActor(class AActor* lastDamagedActor);
    void nomoveMove();
    void checkIfOnPath();
    void intComs_gamemodeBeginPlay();
    void exitTheWater();
    void leaveWater(class AwaterVolume_C* Water);
    void enterWater(class AwaterVolume_C* Water);
    void enteredTheWater();
    void reachedByLightning(class AlightningStrike_C* lightning);
    void ExecuteUbergraph_grayboar(int32 EntryPoint);
}; // Size: 0x54C

#endif
