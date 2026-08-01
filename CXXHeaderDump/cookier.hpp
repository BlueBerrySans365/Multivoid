#ifndef UE4SS_SDK_cookier_HPP
#define UE4SS_SDK_cookier_HPP

class Acookier_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UBillboardComponent* Drop;                                                  // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x04D0 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x04D8 (size: 0x8)
    float step;                                                                       // 0x04E0 (size: 0x4)
    FVector lastStep;                                                                 // 0x04E4 (size: 0xC)
    FVector walkTo;                                                                   // 0x04F0 (size: 0xC)
    TArray<FVector> walkPath;                                                         // 0x0500 (size: 0x10)
    int32 ind;                                                                        // 0x0510 (size: 0x4)
    float Volume;                                                                     // 0x0514 (size: 0x4)
    class USoundAttenuation* att;                                                     // 0x0518 (size: 0x8)
    FName Key;                                                                        // 0x0520 (size: 0x8)
    bool walking;                                                                     // 0x0528 (size: 0x1)
    FVector Loc;                                                                      // 0x052C (size: 0xC)
    bool canDrop;                                                                     // 0x0538 (size: 0x1)
    int32 rep;                                                                        // 0x053C (size: 0x4)

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
    void ignoreSave_trigger(bool& ignore);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void getTriggerData(Fstruct_triggerSave& Data);
    void setPoint();
    void stepOn();
    void OnFail_F2065A824C5947295CDFD3A28F161E58(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_F2065A824C5947295CDFD3A28F161E58(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
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
    void set_ignoreSave_trigger(bool NewParam);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void ReceiveTick(float DeltaSeconds);
    void runTrigger(class AActor* Owner, int32 Index);
    void Run();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_cookier(int32 EntryPoint);
}; // Size: 0x540

#endif
