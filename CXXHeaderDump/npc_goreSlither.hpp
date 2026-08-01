#ifndef UE4SS_SDK_npc_goreSlither_HPP
#define UE4SS_SDK_npc_goreSlither_HPP

class Anpc_goreSlither_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class USphereComponent* coll;                                                     // 0x04C8 (size: 0x8)
    class UAudioComponent* goreslitherIdle_Cue;                                       // 0x04D0 (size: 0x8)
    class UAudioComponent* goreslitherHurt_Cue;                                       // 0x04D8 (size: 0x8)
    class UAudioComponent* goreslitherAlert_Cue;                                      // 0x04E0 (size: 0x8)
    class USphereComponent* senseRadius;                                              // 0x04E8 (size: 0x8)
    class USphereComponent* jumpradius;                                               // 0x04F0 (size: 0x8)
    class UAudioComponent* audio_landed;                                              // 0x04F8 (size: 0x8)
    class UAudioComponent* audio_jump;                                                // 0x0500 (size: 0x8)
    class USphereComponent* Damage;                                                   // 0x0508 (size: 0x8)
    class UAudioComponent* audio_idle;                                                // 0x0510 (size: 0x8)
    class UParticleSystemComponent* eff_landed;                                       // 0x0518 (size: 0x8)
    class UParticleSystemComponent* eff_jump;                                         // 0x0520 (size: 0x8)
    class UArrowComponent* pawnForward;                                               // 0x0528 (size: 0x8)
    class USpringArmComponent* SpringArm1;                                            // 0x0530 (size: 0x8)
    class UArrowComponent* meshForward;                                               // 0x0538 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0540 (size: 0x8)
    float defaultSpeed;                                                               // 0x0548 (size: 0x4)
    FVector Center;                                                                   // 0x054C (size: 0xC)
    TArray<class Anpc_goreSlither_C*> pack;                                           // 0x0558 (size: 0x10)
    class AActor* TargetActor;                                                        // 0x0568 (size: 0x8)
    float timeAnim;                                                                   // 0x0570 (size: 0x4)
    float speedLerp;                                                                  // 0x0574 (size: 0x4)
    bool jumping;                                                                     // 0x0578 (size: 0x1)
    class AActor* jumpActor;                                                          // 0x0580 (size: 0x8)
    TArray<FName> Drop;                                                               // 0x0588 (size: 0x10)
    class UAITask_MoveTo* asyncTask;                                                  // 0x0598 (size: 0x8)
    float health;                                                                     // 0x05A0 (size: 0x4)
    FTimerHandle Timer;                                                               // 0x05A8 (size: 0x8)
    bool underwater;                                                                  // 0x05B0 (size: 0x1)
    float Max;                                                                        // 0x05B4 (size: 0x4)
    class UParticleSystem* effect_damage;                                             // 0x05B8 (size: 0x8)
    bool bloody;                                                                      // 0x05C0 (size: 0x1)
    float dropSize;                                                                   // 0x05C4 (size: 0x4)
    int32 dropAmount;                                                                 // 0x05C8 (size: 0x4)
    bool waterImmune;                                                                 // 0x05CC (size: 0x1)
    float nearRadius;                                                                 // 0x05D0 (size: 0x4)
    FName Key;                                                                        // 0x05D4 (size: 0x8)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ignoreSave(bool& ignoreSave);
    void skipPreDelete(bool& Skip);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void lightningInfluence(bool& influence, float& Multiplier);
    void ignoreHook(bool& ignore);
    void overlayBoyancy(bool& Overlay, float& boyancy);
    void crematorTimeMultiplier(float& mult);
    void crematorAction(bool& Action);
    void wallFixer_fix(class Aprop_wallfixer_C* wallFixer, bool& return);
    void switchToHeavyDrag(bool& isHeavy);
    void getUpgradesList(TArray<FName>& Items);
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void GetKey(FName& Key);
    void canBeUsedHold(bool& return);
    void processKeys(bool& return);
    void getOnlyKey(FName& Key);
    void setPath(const TArray<FVector>& Path, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void gascanFuel(class Aprop_gascan_C* gascan, class AmainPlayer_C* Player, bool back, bool& fueled);
    void skipRadial(bool& Skip);
    void getPriceMultiplier(float& priceMult);
    void isNotSawable(bool& return);
    void toolboxCanFix(bool& return);
    void toolboxFixTime(float& Time);
    void canHit(bool& noHit);
    FVector makeLoc(class AActor*& ReturnValue2);
    void preDied();
    void died();
    void SetMesh();
    bool isNear();
    void turnTo(class AActor* Target);
    void checkJump(bool& Jump, class AActor*& jumpAtActor);
    void npc_goreSlither_AutoGenFunc(const class AActor* A, const class AActor* B, bool& Result);
    void sensing();
    void UserConstructionScript();
    void OnMoveFinished_A62258A4484823CCFC165A942B3CE862(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    void OnRequestFailed_A62258A4484823CCFC165A942B3CE862();
    void OnNotifyEnd_D04125F74D18C74A7DAAA885BFF024C1(FName NotifyName);
    void OnNotifyBegin_D04125F74D18C74A7DAAA885BFF024C1(FName NotifyName);
    void OnInterrupted_D04125F74D18C74A7DAAA885BFF024C1(FName NotifyName);
    void OnBlendOut_D04125F74D18C74A7DAAA885BFF024C1(FName NotifyName);
    void OnCompleted_D04125F74D18C74A7DAAA885BFF024C1(FName NotifyName);
    void OnNotifyEnd_03958BD141F8A1F0504EA6B790E13798(FName NotifyName);
    void OnNotifyBegin_03958BD141F8A1F0504EA6B790E13798(FName NotifyName);
    void OnInterrupted_03958BD141F8A1F0504EA6B790E13798(FName NotifyName);
    void OnBlendOut_03958BD141F8A1F0504EA6B790E13798(FName NotifyName);
    void OnCompleted_03958BD141F8A1F0504EA6B790E13798(FName NotifyName);
    void setIgnoreSave(bool ignore);
    void impactDamageCPP(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void impactSquishCPP(class UPrimitiveComponent* Component);
    void ImpactDamage(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void enterWater(class AwaterVolume_C* Water);
    void leaveWater(class AwaterVolume_C* Water);
    void enterWaterOrigin(class AwaterVolume_C* Water);
    void leaveWaterOrigin(class AwaterVolume_C* Water);
    void eaten(class AmainPlayer_C* Player);
    void virus(bool Activate);
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
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
    void ReceiveBeginPlay();
    void doMove();
    void getPack();
    void ReceiveTick(float DeltaSeconds);
    void Sense();
    void sensedLose();
    void doJump();
    void OnLanded(const FHitResult& Hit);
    void BndEvt__npc_goreSlither_damage_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void didBite();
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void enteredTheWater();
    void exitTheWater();
    void waterDamage();
    void ExecuteUbergraph_npc_goreSlither(int32 EntryPoint);
}; // Size: 0x5DC

#endif
