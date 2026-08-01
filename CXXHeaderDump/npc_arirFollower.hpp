#ifndef UE4SS_SDK_npc_arirFollower_HPP
#define UE4SS_SDK_npc_arirFollower_HPP

class Anpc_arirFollower_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class USphereComponent* openTreehouseDoor;                                        // 0x04C8 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x04D0 (size: 0x8)
    class USkeletalMeshComponent* throwHands;                                         // 0x04D8 (size: 0x8)
    class USpringArmComponent* arms_lag;                                              // 0x04E0 (size: 0x8)
    class UBillboardComponent* Start;                                                 // 0x04E8 (size: 0x8)
    class UBillboardComponent* eyes;                                                  // 0x04F0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x04F8 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0500 (size: 0x8)
    float pickupanim_a_B369E0A8455FD4AD89AFEDB368A07C09;                              // 0x0508 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> pickupanim__Direction_B369E0A8455FD4AD89AFEDB368A07C09; // 0x050C (size: 0x1)
    class UTimelineComponent* pickupanim;                                             // 0x0510 (size: 0x8)
    bool canMove;                                                                     // 0x0518 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x0520 (size: 0x10)
    float step_0;                                                                     // 0x0530 (size: 0x4)
    FVector lastStep;                                                                 // 0x0534 (size: 0xC)
    bool slapped;                                                                     // 0x0540 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> objD;                                       // 0x0548 (size: 0x10)
    bool Done;                                                                        // 0x0558 (size: 0x1)
    bool isInRad;                                                                     // 0x0559 (size: 0x1)
    bool throwing;                                                                    // 0x055A (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> objPhys;                                    // 0x0560 (size: 0x10)
    class Aprop_C* throwingProp;                                                      // 0x0570 (size: 0x8)
    class UPrimitiveComponent* throwingComp;                                          // 0x0578 (size: 0x8)
    FTransform A;                                                                     // 0x0580 (size: 0x30)
    FVector hit_projectile;                                                           // 0x05B0 (size: 0xC)
    float max_h;                                                                      // 0x05BC (size: 0x4)
    float H;                                                                          // 0x05C0 (size: 0x4)
    bool eat;                                                                         // 0x05C4 (size: 0x1)
    float animTimer;                                                                  // 0x05C8 (size: 0x4)
    bool eat_s;                                                                       // 0x05CC (size: 0x1)
    bool ignoreRender;                                                                // 0x05CD (size: 0x1)
    FName Key;                                                                        // 0x05D0 (size: 0x8)
    bool movingToADoor;                                                               // 0x05D8 (size: 0x1)
    bool findingProp;                                                                 // 0x05D9 (size: 0x1)
    class AsubPawn_C* subPawn;                                                        // 0x05E0 (size: 0x8)
    TEnumAsByte<ECollisionChannel> throwCollType;                                     // 0x05E8 (size: 0x1)
    FVector spawnPos;                                                                 // 0x05EC (size: 0xC)
    bool kerfusRun;                                                                   // 0x05F8 (size: 0x1)
    FVector kerfTp;                                                                   // 0x05FC (size: 0xC)
    int32 rep;                                                                        // 0x0608 (size: 0x4)
    int32 fed;                                                                        // 0x060C (size: 0x4)
    class AActor* specificTarget;                                                     // 0x0610 (size: 0x8)
    TSubclassOf<class Aprop_C> throwingPropClass;                                     // 0x0618 (size: 0x8)
    bool buster;                                                                      // 0x0620 (size: 0x1)
    int32 safeErrors;                                                                 // 0x0624 (size: 0x4)

    void lightningInfluence(bool& influence, float& Multiplier);
    void ignoreHook(bool& ignore);
    void overlayBoyancy(bool& Overlay, float& boyancy);
    void crematorTimeMultiplier(float& mult);
    void crematorAction(bool& Action);
    void wallFixer_fix(class Aprop_wallfixer_C* wallFixer, bool& return);
    void switchToHeavyDrag(bool& isHeavy);
    void getUpgradesList(TArray<FName>& Items);
    void canHit(bool& noHit);
    void toolboxFixTime(float& Time);
    void toolboxCanFix(bool& return);
    void isNotSawable(bool& return);
    void getPriceMultiplier(float& priceMult);
    void skipRadial(bool& Skip);
    void gascanFuel(class Aprop_gascan_C* gascan, class AmainPlayer_C* Player, bool back, bool& fueled);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void setPath(const TArray<FVector>& Path, bool& return);
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void GetKey(FName& Key);
    void canBeUsedHold(bool& return);
    void processKeys(bool& return);
    void getOnlyKey(FName& Key);
    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void targetDestroyed();
    class AActor* getTarget();
    float playerspd();
    void pickup(class AActor* InputPin, bool& NewParam);
    bool NewFunction_0();
    void Finished();
    void pickupanim__FinishedFunc();
    void pickupanim__UpdateFunc();
    void OnFail_D6F99D254F83F262175FDAA81DB9B4B7(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_D6F99D254F83F262175FDAA81DB9B4B7(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_9AE5F3E94E2595A39F40C3B19AF23EF3(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_9AE5F3E94E2595A39F40C3B19AF23EF3(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_011CF1F24B50078D8129F696D14922C7(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_011CF1F24B50078D8129F696D14922C7(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_50E9225F403AA133CB9EBE956BBA0E2C(FName NotifyName);
    void OnNotifyBegin_50E9225F403AA133CB9EBE956BBA0E2C(FName NotifyName);
    void OnInterrupted_50E9225F403AA133CB9EBE956BBA0E2C(FName NotifyName);
    void OnBlendOut_50E9225F403AA133CB9EBE956BBA0E2C(FName NotifyName);
    void OnCompleted_50E9225F403AA133CB9EBE956BBA0E2C(FName NotifyName);
    void OnNotifyEnd_4D222B0148B5E1A6AB16399AD2C5A26B(FName NotifyName);
    void OnNotifyBegin_4D222B0148B5E1A6AB16399AD2C5A26B(FName NotifyName);
    void OnInterrupted_4D222B0148B5E1A6AB16399AD2C5A26B(FName NotifyName);
    void OnBlendOut_4D222B0148B5E1A6AB16399AD2C5A26B(FName NotifyName);
    void OnCompleted_4D222B0148B5E1A6AB16399AD2C5A26B(FName NotifyName);
    void OnNotifyEnd_7B6260C2429F183F7233C2A0C9EED0F6(FName NotifyName);
    void OnNotifyBegin_7B6260C2429F183F7233C2A0C9EED0F6(FName NotifyName);
    void OnInterrupted_7B6260C2429F183F7233C2A0C9EED0F6(FName NotifyName);
    void OnBlendOut_7B6260C2429F183F7233C2A0C9EED0F6(FName NotifyName);
    void OnCompleted_7B6260C2429F183F7233C2A0C9EED0F6(FName NotifyName);
    void OnFail_47E80F0B401DAB8F523B1C9101382928(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_47E80F0B401DAB8F523B1C9101382928(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_0CD089F440FE3CB51F441380C80F7156(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_0CD089F440FE3CB51F441380C80F7156(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_50D265774A17BBF8058050ABE213300F(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_50D265774A17BBF8058050ABE213300F(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_F50A3D4A439CFC0A3B43EE825D097431(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_F50A3D4A439CFC0A3B43EE825D097431(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_9B330CEF4ABB52A80F03DA8D7251842E(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_9B330CEF4ABB52A80F03DA8D7251842E(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ImpactDamage(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void enterWater(class AwaterVolume_C* Water);
    void leaveWater(class AwaterVolume_C* Water);
    void enterWaterOrigin(class AwaterVolume_C* Water);
    void leaveWaterOrigin(class AwaterVolume_C* Water);
    void eaten(class AmainPlayer_C* Player);
    void virus(bool Activate);
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void setKey(FName Key);
    void physDestroyed();
    void physPreDestroyed();
    void digUp();
    void unhook();
    void steppedOn(class AmainPlayer_C* Player, FHitResult Hit);
    void fireDamage(float Damage);
    void ignite(float fuel);
    void microwave(class Aprop_microwave_C* microwave);
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void extinguishFire();
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void playerHandMouseWheel(class AmainPlayer_C* Player, float wheelDelta);
    void playerHandMouse(class AmainPlayer_C* Player, FVector2D Mouse);
    void playerHandAnyKey(class AmainPlayer_C* Player, FKey Key, bool Pressed);
    void microwaveElec();
    void addTemperature(float Temperature);
    void accumulateTemperature(float Temperature, float Speed, float DeltaTime);
    void ActionName(class AmainPlayer_C* Player, FHitResult Hit, FString Name);
    void stepped(float Volume, FVector Location);
    void playerLookAway(class AmainPlayer_C* Player);
    void reachedByExplosion(FVector Location, float Damage, class Aexplosion_C* explosion);
    void bitten(class AmainPlayer_C* Player);
    void slice(bool clean);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void attemptIgnite();
    void hooked(class Ahook_C* hook);
    void crafted();
    void cleanSponge(float clean, class AmainPlayer_C* Player, class Aprop_sponge_C* sponge, FHitResult Hit);
    void hookTension(class Ahook_C* hook);
    void insertBattery(class AmainPlayer_C* Player, class Aprop_batts_C* battery);
    void playerSit(class AmainPlayer_C* Player);
    void playerUnsit(class AmainPlayer_C* Player);
    void playerUsedOn_delay(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void upgradeTake(FName Item);
    void padlock_lock(class Aprop_padlock_C* padlock);
    void padlock_unlock(class Aprop_padlock_C* padlock);
    void sendTag(FName Tag);
    void lookedAt(class AmainPlayer_C* Player, FHitResult HitResult, class UPrimitiveComponent* lookAtComponent);
    void craftDepleted(class Aprop_workbench_C* workbench);
    void driveBrokenNearby(class Aprop_drive_C* drive);
    void crowbarOpen(class ApryingCrowbar_C* pryingCrowbar);
    void reachedByLightning(class AlightningStrike_C* lightning);
    void runTrigger(class AActor* Owner, int32 Index);
    void set_ignoreSave_trigger(bool NewParam);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveDestroyed();
    void moveToPlayer();
    void pickupAnimm();
    void throw();
    void runAway();
    void reputationChanged(int32 rep);
    void playerSwing();
    void re_throw();
    void targetDestroyed_d(class AActor* DestroyedActor);
    void step(FVector Location);
    void BndEvt__arirFollower_openTreehouseDoor_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_npc_arirFollower(int32 EntryPoint);
}; // Size: 0x628

#endif
