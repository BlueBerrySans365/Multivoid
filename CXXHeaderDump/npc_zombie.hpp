#ifndef UE4SS_SDK_npc_zombie_HPP
#define UE4SS_SDK_npc_zombie_HPP

class Anpc_zombie_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* mesh_helmet;                                          // 0x04C8 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x04D0 (size: 0x8)
    class UAudioComponent* zombie_alert_Cue;                                          // 0x04D8 (size: 0x8)
    class UAudioComponent* zombie_call_Cue;                                           // 0x04E0 (size: 0x8)
    class UAudioComponent* audio_footstep;                                            // 0x04E8 (size: 0x8)
    class UAudioComponent* zombieAttack_hit_Cue;                                      // 0x04F0 (size: 0x8)
    class UAudioComponent* zombieAttack_miss;                                         // 0x04F8 (size: 0x8)
    class UAudioComponent* zombie_damage_Cue;                                         // 0x0500 (size: 0x8)
    class UAudioComponent* zombie_attack_Cue;                                         // 0x0508 (size: 0x8)
    class USphereComponent* attack_damage;                                            // 0x0510 (size: 0x8)
    class USphereComponent* attack_init;                                              // 0x0518 (size: 0x8)
    class USphereComponent* vision;                                                   // 0x0520 (size: 0x8)
    class UAudioComponent* zombie_idle_Cue;                                           // 0x0528 (size: 0x8)
    class USpringArmComponent* meshLag;                                               // 0x0530 (size: 0x8)
    float riseTL_a_2CA706C34B83E9B8181A22BF913EF1AD;                                  // 0x0538 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> riseTL__Direction_2CA706C34B83E9B8181A22BF913EF1AD; // 0x053C (size: 0x1)
    class UTimelineComponent* riseTL;                                                 // 0x0540 (size: 0x8)
    float focusTL_a_1D68D3564A32C0243EFF2EB15E586A2F;                                 // 0x0548 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> focusTL__Direction_1D68D3564A32C0243EFF2EB15E586A2F; // 0x054C (size: 0x1)
    class UTimelineComponent* focusTL;                                                // 0x0550 (size: 0x8)
    float sidewalkTimer;                                                              // 0x0558 (size: 0x4)
    float sidewalkSpeed;                                                              // 0x055C (size: 0x4)
    bool stunned;                                                                     // 0x0560 (size: 0x1)
    bool chasing;                                                                     // 0x0561 (size: 0x1)
    float health;                                                                     // 0x0564 (size: 0x4)
    bool attacking;                                                                   // 0x0568 (size: 0x1)
    class AActor* chaseActor;                                                         // 0x0570 (size: 0x8)
    class AActor* previousChase;                                                      // 0x0578 (size: 0x8)
    float unfocus;                                                                    // 0x0580 (size: 0x4)
    class Anpc_zombie_C* focusedOn;                                                   // 0x0588 (size: 0x8)
    bool isChaseInSight;                                                              // 0x0590 (size: 0x1)
    bool sniffOutThePlayer;                                                           // 0x0591 (size: 0x1)
    float speed_attacking;                                                            // 0x0594 (size: 0x4)
    float speed_stunned;                                                              // 0x0598 (size: 0x4)
    float speed_chasing;                                                              // 0x059C (size: 0x4)
    float speed_searching;                                                            // 0x05A0 (size: 0x4)
    float wobble;                                                                     // 0x05A4 (size: 0x4)
    float speed_walking;                                                              // 0x05A8 (size: 0x4)
    bool isExploded;                                                                  // 0x05AC (size: 0x1)
    class UkerfurOmegaV1_Skeleton_AnimBlueprint_Child_C* Anim;                        // 0x05B0 (size: 0x8)
    bool risen;                                                                       // 0x05B8 (size: 0x1)
    float Damage;                                                                     // 0x05BC (size: 0x4)
    bool spawnCorpse;                                                                 // 0x05C0 (size: 0x1)
    bool canCall;                                                                     // 0x05C1 (size: 0x1)
    float riseDelay;                                                                  // 0x05C4 (size: 0x4)
    bool randomZomb;                                                                  // 0x05C8 (size: 0x1)
    TArray<class USkeletalMesh*> randomZombieSkin;                                    // 0x05D0 (size: 0x10)
    float headArmor;                                                                  // 0x05E0 (size: 0x4)
    float attackSpeed;                                                                // 0x05E4 (size: 0x4)
    float damageTaken;                                                                // 0x05E8 (size: 0x4)
    FHitResult damageHit;                                                             // 0x05EC (size: 0x88)
    class UParticleSystem* effect_hitHeadArmor;                                       // 0x0678 (size: 0x8)
    class USoundBase* sound_hitHeadArmor;                                             // 0x0680 (size: 0x8)
    class USoundBase* sound_destroyHeadArmor;                                         // 0x0688 (size: 0x8)
    bool boney;                                                                       // 0x0690 (size: 0x1)
    int32 stuckTimes;                                                                 // 0x0694 (size: 0x4)
    FVector lastloc;                                                                  // 0x0698 (size: 0xC)
    TSubclassOf<class Aragdoll_zombie_C> corpse;                                      // 0x06A8 (size: 0x8)
    TArray<class AActor*> deathgibs;                                                  // 0x06B0 (size: 0x10)
    bool isDead;                                                                      // 0x06C0 (size: 0x1)

    void lightningInfluence(bool& influence, float& Multiplier);
    void ignoreHook(bool& ignore);
    void overlayBoyancy(bool& Overlay, float& boyancy);
    void crematorTimeMultiplier(float& mult);
    void crematorAction(bool& Action);
    void wallFixer_fix(class Aprop_wallfixer_C* wallFixer, bool& return);
    void switchToHeavyDrag(bool& isHeavy);
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
    void getUpgradesList(TArray<FName>& Items);
    void hitBoney(FVector InputPin);
    void setRandomAnimation();
    void hitHeadArmor(FVector InputPin);
    void hitFlesh(FVector InputPin);
    void headArmorDestroyed();
    void updHeadArmor();
    void setRandomSkin();
    void called();
    void died();
    void call(bool skipChecks);
    void npc_zombie_AutoGenFunc(const class AActor* A, const class AActor* B, bool& Result);
    void Sense(bool& saw);
    void getGoal(FVector& RandomLocation, class AActor*& chaseActor);
    void attackInRadius();
    void SetSpeed();
    void UserConstructionScript();
    void focusTL__FinishedFunc();
    void focusTL__UpdateFunc();
    void riseTL__FinishedFunc();
    void riseTL__UpdateFunc();
    void riseTL__stopRiseAnim__EventFunc();
    void OnMoveFinished_FCC6B3274C813E3427EF10848926D1CC(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    void OnRequestFailed_FCC6B3274C813E3427EF10848926D1CC();
    void OnNotifyEnd_7FFF70F543D4B98B76610D9C2447262E(FName NotifyName);
    void OnNotifyBegin_7FFF70F543D4B98B76610D9C2447262E(FName NotifyName);
    void OnInterrupted_7FFF70F543D4B98B76610D9C2447262E(FName NotifyName);
    void OnBlendOut_7FFF70F543D4B98B76610D9C2447262E(FName NotifyName);
    void OnCompleted_7FFF70F543D4B98B76610D9C2447262E(FName NotifyName);
    void OnNotifyEnd_150A17184FFFD000BA5E9983F73B685E(FName NotifyName);
    void OnNotifyBegin_150A17184FFFD000BA5E9983F73B685E(FName NotifyName);
    void OnInterrupted_150A17184FFFD000BA5E9983F73B685E(FName NotifyName);
    void OnBlendOut_150A17184FFFD000BA5E9983F73B685E(FName NotifyName);
    void OnCompleted_150A17184FFFD000BA5E9983F73B685E(FName NotifyName);
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
    void step(FVector Location);
    void ReceiveTick(float DeltaSeconds);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void doWalk();
    void BndEvt__npc_zombie_attack_init_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void senseTimer();
    void newPawnSense();
    void pawnDest(class AActor* DestroyedActor);
    void focus(class Anpc_zombie_C* sender);
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void OnLanded(const FHitResult& Hit);
    void timer_checkForStuck();
    void ExecuteUbergraph_npc_zombie(int32 EntryPoint);
}; // Size: 0x6C1

#endif
