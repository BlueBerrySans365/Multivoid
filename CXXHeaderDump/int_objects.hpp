#ifndef UE4SS_SDK_int_objects_HPP
#define UE4SS_SDK_int_objects_HPP

class Iint_objects_C : public IInterface
{

    void lightningInfluence(bool& influence, float& Multiplier);
    void reachedByLightning(class AlightningStrike_C* lightning);
    void crowbarOpen(class ApryingCrowbar_C* pryingCrowbar);
    void ignoreHook(bool& ignore);
    void driveBrokenNearby(class Aprop_drive_C* drive);
    void overlayBoyancy(bool& Overlay, float& boyancy);
    void crematorTimeMultiplier(float& mult);
    void crematorAction(bool& Action);
    void craftDepleted(class Aprop_workbench_C* workbench);
    void lookedAt(class AmainPlayer_C* Player, FHitResult HitResult, class UPrimitiveComponent* lookAtComponent);
    void sendTag(FName Tag);
    void wallFixer_fix(class Aprop_wallfixer_C* wallFixer, bool& return);
    void padlock_unlock(class Aprop_padlock_C* padlock);
    void padlock_lock(class Aprop_padlock_C* padlock);
    void switchToHeavyDrag(bool& isHeavy);
    void upgradeTake(FName Item);
    void getUpgradesList(TArray<FName>& Items);
    void playerUsedOn_delay(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void canHit(bool& noHit);
    void playerUnsit(class AmainPlayer_C* Player);
    void playerSit(class AmainPlayer_C* Player);
    void insertBattery(class AmainPlayer_C* Player, class Aprop_batts_C* battery);
    void toolboxFixTime(float& Time);
    void toolboxCanFix(bool& return);
    void isNotSawable(bool& return);
    void getPriceMultiplier(float& priceMult);
    void hookTension(class Ahook_C* hook);
    void cleanSponge(float clean, class AmainPlayer_C* Player, class Aprop_sponge_C* sponge, FHitResult Hit);
    void crafted();
    void skipRadial(bool& Skip);
    void hooked(class Ahook_C* hook);
    void attemptIgnite();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void gascanFuel(class Aprop_gascan_C* gascan, class AmainPlayer_C* Player, bool back, bool& fueled);
    void slice(bool clean);
    void bitten(class AmainPlayer_C* Player);
    void reachedByExplosion(FVector Location, float Damage, class Aexplosion_C* explosion);
    void playerLookAway(class AmainPlayer_C* Player);
    void stepped(float Volume, FVector Location);
    void ActionName(class AmainPlayer_C* Player, FHitResult Hit, FString Name);
    void accumulateTemperature(float Temperature, float Speed, float DeltaTime);
    void addTemperature(float Temperature);
    void microwaveElec();
    void playerHandAnyKey(class AmainPlayer_C* Player, FKey Key, bool Pressed);
    void playerHandMouse(class AmainPlayer_C* Player, FVector2D Mouse);
    void playerHandMouseWheel(class AmainPlayer_C* Player, float wheelDelta);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void extinguishFire();
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
    void microwave(class Aprop_microwave_C* microwave);
    void ignite(float fuel);
    void fireDamage(float Damage);
    void steppedOn(class AmainPlayer_C* Player, FHitResult Hit);
    void setPath(const TArray<FVector>& Path, bool& return);
    void unhook();
    void digUp();
    void physPreDestroyed();
    void physDestroyed();
    void getOnlyKey(FName& Key);
    void processKeys(bool& return);
    void setKey(FName Key);
    void canBeUsedHold(bool& return);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
    void virus(bool Activate);
    void eaten(class AmainPlayer_C* Player);
    void leaveWaterOrigin(class AwaterVolume_C* Water);
    void enterWaterOrigin(class AwaterVolume_C* Water);
    void leaveWater(class AwaterVolume_C* Water);
    void enterWater(class AwaterVolume_C* Water);
    void GetKey(FName& Key);
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void ImpactDamage(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
}; // Size: 0x28

#endif
