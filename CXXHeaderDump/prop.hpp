#ifndef UE4SS_SDK_prop_HPP
#define UE4SS_SDK_prop_HPP

class Aprop_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UpropThrown_C* propThrown;                                                  // 0x0228 (size: 0x8)
    class Ucomp_physicsImpact_C* physicsImpact;                                       // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    FDataTableRowHandle propPicker;                                                   // 0x0240 (size: 0x10)
    class AmainGamemode_C* GameMode;                                                  // 0x0250 (size: 0x8)
    FName Name;                                                                       // 0x0258 (size: 0x8)
    Fstruct_prop propData;                                                            // 0x0260 (size: 0x78)
    bool Static;                                                                      // 0x02D8 (size: 0x1)
    bool removeWOrespawn;                                                             // 0x02D9 (size: 0x1)
    bool frozen;                                                                      // 0x02DA (size: 0x1)
    bool ignoreSav;                                                                   // 0x02DB (size: 0x1)
    bool ingoreFix;                                                                   // 0x02DC (size: 0x1)
    bool sleep;                                                                       // 0x02DD (size: 0x1)
    FName Key;                                                                        // 0x02E0 (size: 0x8)
    Fprop_CHit Hit;                                                                   // 0x02E8 (size: 0x10)
    void hit();
    Fprop_CUnhooked unhooked;                                                         // 0x02F8 (size: 0x10)
    void unhooked();
    class Ucomp_flammable_C* flameBase;                                               // 0x0308 (size: 0x8)
    bool customShadows;                                                               // 0x0310 (size: 0x1)
    FName nametag;                                                                    // 0x0314 (size: 0x8)
    class Ucomp_nametag_C* nametagComponent;                                          // 0x0320 (size: 0x8)
    Fprop_CTakenByPlayer takenByPlayer;                                               // 0x0328 (size: 0x10)
    void takenByPlayer(class Aprop_C* prop);
    bool returnLookAt;                                                                // 0x0338 (size: 0x1)
    bool doCastShadow;                                                                // 0x0339 (size: 0x1)
    Fprop_CAwoken awoken;                                                             // 0x0340 (size: 0x10)
    void awoken();
    Fprop_CTouched touched;                                                           // 0x0350 (size: 0x10)
    void touched();
    TEnumAsByte<ECollisionChannel> collisionType_light;                               // 0x0360 (size: 0x1)
    TEnumAsByte<ECollisionChannel> collisionType_heavy;                               // 0x0361 (size: 0x1)
    bool ResetKey;                                                                    // 0x0362 (size: 0x1)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
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
    void getOnlyKey(FName& Key);
    void processKeys(bool& return);
    void canBeUsedHold(bool& return);
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void GetKey(FName& Key);
    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void asContainer(class Aprop_container_C*& container);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void asFarmPlant(class AgrowingPlant_C*& plant);
    void asCookedFood(class Aprop_cookingFood_C*& cookedFood);
    void asFood(class Aprop_food_C*& food);
    void landedOn(class AmainPlayer_C* Player, bool& ignoreFallDamage);
    void canBePutInContainer(bool& return);
    void asProp(class Aprop_C*& return);
    void canPickup(bool& return);
    void noRespawn(bool noRespawn, bool& return);
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void skipPreDelete(bool& Skip);
    void ignoreSave(bool& ignoreSave);
    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void ignited();
    void gamemodeValid();
    void GetName(FText& DisplayName, FName& propName);
    void setNametag();
    void Shadows(bool shadows_small, bool shadows_big);
    void afterplay();
    void Init();
    void UserConstructionScript();
    void intComs_signalDeleted();
    void intComs_signalSaved();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_unfoc();
    void intComs_unfocused();
    void intComs_gamemodePreLoad();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodeMakeKeys();
    void intComs_propRenderer_finishProps();
    void intComs_applyColor(FLinearColor Color);
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_gamemodePostKeys();
    void intComs_triggerSnow(bool isSnow);
    void enteredTheWater();
    void exitTheWater();
    void impactSquishCPP(class UPrimitiveComponent* Component);
    void ImpactDamage(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void enterWater(class AwaterVolume_C* Water);
    void leaveWater(class AwaterVolume_C* Water);
    void enterWaterOrigin(class AwaterVolume_C* Water);
    void leaveWaterOrigin(class AwaterVolume_C* Water);
    void eaten(class AmainPlayer_C* Player);
    void virus(bool Activate);
    void physDestroyed();
    void physPreDestroyed();
    void digUp();
    void unhook();
    void steppedOn(class AmainPlayer_C* Player, FHitResult Hit);
    void microwave(class Aprop_microwave_C* microwave);
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
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
    void driveDetached();
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void kicked(bool kick);
    void broken();
    void broken_fire();
    void thrown(class AmainPlayer_C* Player);
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void updateStrAgl();
    void playerUnequip(class AmainPlayer_C* Player);
    void playerHoldPost(class AmainPlayer_C* Player);
    void playerHitWith(FHitResult Hit, class AmainPlayer_C* Player);
    void unequpped(class AmainPlayer_C* Player);
    void playerHoldPre(class AmainPlayer_C* Player);
    void beginHoldingObject(class AmainPlayer_C* Player, FHitResult Hit);
    void playerStepped(FHitResult Hit);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void setIgnoreSave(bool ignore);
    void setKey(FName Key);
    void hittedd123(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void fireDamage(float Damage);
    void ignite(float fuel);
    void extinguishFire();
    void impactDamageCPP(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void awakeUnfreeze();
    void createSleepingHit();
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void sendName(FName Name);
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void intComs_gamemodeBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_prop(int32 EntryPoint);
    void touched__DelegateSignature();
    void awoken__DelegateSignature();
    void takenByPlayer__DelegateSignature(class Aprop_C* prop);
    void unhooked__DelegateSignature();
    void hit__DelegateSignature();
}; // Size: 0x363

#endif
