#ifndef UE4SS_SDK_kavotia_HPP
#define UE4SS_SDK_kavotia_HPP

class Akavotia_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UParticleSystemComponent* Light;                                            // 0x04C8 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x04D0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x04D8 (size: 0x8)
    class UBillboardComponent* head;                                                  // 0x04E0 (size: 0x8)
    class UAudioComponent* tentacleBallTalk_Cue;                                      // 0x04E8 (size: 0x8)
    class UArrowComponent* shootVector;                                               // 0x04F0 (size: 0x8)
    class UAudioComponent* charging;                                                  // 0x04F8 (size: 0x8)
    class UParticleSystemComponent* eff_tentacleBallShootWindup;                      // 0x0500 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0508 (size: 0x8)
    float Timeline_0_a_8DAF4579458C75F47C22D5B63FCE7468;                              // 0x0510 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_8DAF4579458C75F47C22D5B63FCE7468; // 0x0514 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0518 (size: 0x8)
    class Ukavotia_Skeleton_AnimBlueprint_C* Anim;                                    // 0x0520 (size: 0x8)
    class APawn* lookingAt;                                                           // 0x0528 (size: 0x8)
    bool shooting;                                                                    // 0x0530 (size: 0x1)
    int32 iTalk;                                                                      // 0x0534 (size: 0x4)
    class AkavotiaPatrolController_C* patrolController;                               // 0x0538 (size: 0x8)
    float neg;                                                                        // 0x0540 (size: 0x4)
    float patrolRadius;                                                               // 0x0544 (size: 0x4)

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
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void GetKey(FName& Key);
    void canBeUsedHold(bool& return);
    void processKeys(bool& return);
    void getOnlyKey(FName& Key);
    void setPath(const TArray<FVector>& Path, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void alert(class APawn* lookingAt);
    void calm();
    void walkLoc(FVector& RandomLocation);
    void sensePawns(class APawn*& OutputPin);
    void updateTarget(class APawn* lookingAt);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnFail_09A2354C485D4386CB2E13BC61C68416(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_09A2354C485D4386CB2E13BC61C68416(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_8A6E6C9B4584D995E2F1F99BEB392865(FName NotifyName);
    void OnNotifyBegin_8A6E6C9B4584D995E2F1F99BEB392865(FName NotifyName);
    void OnInterrupted_8A6E6C9B4584D995E2F1F99BEB392865(FName NotifyName);
    void OnBlendOut_8A6E6C9B4584D995E2F1F99BEB392865(FName NotifyName);
    void OnCompleted_8A6E6C9B4584D995E2F1F99BEB392865(FName NotifyName);
    void OnNotifyEnd_7446BBA34E6333FAAF6EF2BEF3744423(FName NotifyName);
    void OnNotifyBegin_7446BBA34E6333FAAF6EF2BEF3744423(FName NotifyName);
    void OnInterrupted_7446BBA34E6333FAAF6EF2BEF3744423(FName NotifyName);
    void OnBlendOut_7446BBA34E6333FAAF6EF2BEF3744423(FName NotifyName);
    void OnCompleted_7446BBA34E6333FAAF6EF2BEF3744423(FName NotifyName);
    void OnFail_D3BAAC524A6477CC38D5F8B2F4C4058D(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_D3BAAC524A6477CC38D5F8B2F4C4058D(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
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
    void laydown();
    void ReceiveTick(float DeltaSeconds);
    void Sense();
    void chargeSound();
    void laydownAnim();
    void repeatTalk();
    void talk();
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void randCharge();
    void openDoors();
    void ExecuteUbergraph_kavotia(int32 EntryPoint);
}; // Size: 0x548

#endif
