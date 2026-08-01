#ifndef UE4SS_SDK_pryingCrowbar_HPP
#define UE4SS_SDK_pryingCrowbar_HPP

class ApryingCrowbar_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* gib_top;                                              // 0x0228 (size: 0x8)
    class UStaticMeshComponent* gib_bottom;                                           // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class UAudioComponent* audio_strain1;                                             // 0x0240 (size: 0x8)
    class UAudioComponent* audio_strain2;                                             // 0x0248 (size: 0x8)
    class UBillboardComponent* collisionCheck_B;                                      // 0x0250 (size: 0x8)
    class UBillboardComponent* collisionCheck_A;                                      // 0x0258 (size: 0x8)
    class UParticleSystemComponent* eff_spark;                                        // 0x0260 (size: 0x8)
    class USkeletalMeshComponent* sk_crowbar;                                         // 0x0268 (size: 0x8)
    class UBillboardComponent* sk_pivot;                                              // 0x0270 (size: 0x8)
    class UBillboardComponent* point_A;                                               // 0x0278 (size: 0x8)
    class UBillboardComponent* Pivot;                                                 // 0x0280 (size: 0x8)
    class UBillboardComponent* point_B;                                               // 0x0288 (size: 0x8)
    class UBillboardComponent* pivot_to;                                              // 0x0290 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    float requiredAngle;                                                              // 0x02A8 (size: 0x4)
    float Strength;                                                                   // 0x02AC (size: 0x4)
    float resistance;                                                                 // 0x02B0 (size: 0x4)
    float retractSpeed;                                                               // 0x02B4 (size: 0x4)
    float Alpha;                                                                      // 0x02B8 (size: 0x4)
    float slideDistance_A;                                                            // 0x02BC (size: 0x4)
    float slideDistance_B;                                                            // 0x02C0 (size: 0x4)
    class AmainPlayer_C* lastPlayer;                                                  // 0x02C8 (size: 0x8)
    bool onlyEdges;                                                                   // 0x02D0 (size: 0x1)
    bool strainSound;                                                                 // 0x02D1 (size: 0x1)
    class UAnimBP_bendingCrowbar_C* Anim;                                             // 0x02D8 (size: 0x8)
    float snapStress;                                                                 // 0x02E0 (size: 0x4)
    bool sparked;                                                                     // 0x02E4 (size: 0x1)
    bool straining;                                                                   // 0x02E5 (size: 0x1)
    FVector pivot_collisionCheck_A;                                                   // 0x02E8 (size: 0xC)
    FVector pivot_collisionCheck_B;                                                   // 0x02F4 (size: 0xC)
    FTransform pivot_gibTop;                                                          // 0x0300 (size: 0x30)
    FTransform pivot_gibBottom;                                                       // 0x0330 (size: 0x30)
    FVector pivot_pointA;                                                             // 0x0360 (size: 0xC)
    FVector pivot_pointB;                                                             // 0x036C (size: 0xC)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ignoreSave(bool& ignoreSave);
    void skipPreDelete(bool& Skip);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void lightningInfluence(bool& influence, float& Multiplier);
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
    void switchToHeavyDrag(bool& isHeavy);
    void wallFixer_fix(class Aprop_wallfixer_C* wallFixer, bool& return);
    void crematorAction(bool& Action);
    void crematorTimeMultiplier(float& mult);
    void overlayBoyancy(bool& Overlay, float& boyancy);
    void ignoreHook(bool& ignore);
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void asProp(class Aprop_C*& return);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void landedOn(class AmainPlayer_C* Player, bool& ignoreFallDamage);
    void asFood(class Aprop_food_C*& food);
    void asCookedFood(class Aprop_cookingFood_C*& cookedFood);
    void asFarmPlant(class AgrowingPlant_C*& plant);
    void asContainer(class Aprop_container_C*& container);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void canBeCollected(bool& ignore);
    void canBePickedUp(bool& ignore);
    void destroyUnnecessary();
    void snap();
    FVector GetPosition(FVector Point);
    void End(bool pryOpen, bool dropSelf, bool destroyed);
    void begin(class AmainPlayer_C* mainPlayer, bool& failed);
    void updPivot();
    void upd_preview();
    void UserConstructionScript();
    void setIgnoreSave(bool ignore);
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
    void sendName(FName Name);
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
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void beginHoldingObject(class AmainPlayer_C* Player, FHitResult Hit);
    void playerStepped(FHitResult Hit);
    void ReceiveTick(float DeltaSeconds);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_pryingCrowbar(int32 EntryPoint);
}; // Size: 0x378

#endif
