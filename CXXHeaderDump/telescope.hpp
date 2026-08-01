#ifndef UE4SS_SDK_telescope_HPP
#define UE4SS_SDK_telescope_HPP

class Atelescope_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UChildActorComponent* pluto;                                                // 0x0228 (size: 0x8)
    class UChildActorComponent* neptune;                                              // 0x0230 (size: 0x8)
    class UChildActorComponent* uranus;                                               // 0x0238 (size: 0x8)
    class UChildActorComponent* saturn;                                               // 0x0240 (size: 0x8)
    class UChildActorComponent* jupiter;                                              // 0x0248 (size: 0x8)
    class UChildActorComponent* venus;                                                // 0x0250 (size: 0x8)
    class UChildActorComponent* mercury;                                              // 0x0258 (size: 0x8)
    class UStaticMeshComponent* back;                                                 // 0x0260 (size: 0x8)
    class UChildActorComponent* mars;                                                 // 0x0268 (size: 0x8)
    class UChildActorComponent* moon;                                                 // 0x0270 (size: 0x8)
    class UBillboardComponent* Objects;                                               // 0x0278 (size: 0x8)
    class USceneCaptureComponent2D* cam;                                              // 0x0280 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0288 (size: 0x8)
    class UBillboardComponent* camAxis;                                               // 0x0290 (size: 0x8)
    class UBillboardComponent* roo;                                                   // 0x0298 (size: 0x8)
    class UStaticMeshComponent* telescope;                                            // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x02B0 (size: 0x8)
    class Uui_telescope_C* Widget;                                                    // 0x02B8 (size: 0x8)
    class UmarsStruct_build_Skeleton_AnimBlueprint_C* Anim;                           // 0x02C0 (size: 0x8)
    bool looking;                                                                     // 0x02C8 (size: 0x1)
    float rot;                                                                        // 0x02CC (size: 0x4)
    float buildStatus_1;                                                              // 0x02D0 (size: 0x4)
    float buildStatus_2;                                                              // 0x02D4 (size: 0x4)
    float buildStatus_3;                                                              // 0x02D8 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat_deco;                                      // 0x02E0 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_lights_1;                                  // 0x02E8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_lights_2;                                  // 0x02F0 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_body;                                      // 0x02F8 (size: 0x8)
    bool Fast;                                                                        // 0x0300 (size: 0x1)
    bool Reset;                                                                       // 0x0301 (size: 0x1)
    float A;                                                                          // 0x0304 (size: 0x4)
    float B;                                                                          // 0x0308 (size: 0x4)
    bool move_up;                                                                     // 0x030C (size: 0x1)
    bool move_right;                                                                  // 0x030D (size: 0x1)
    bool move_zoomIn;                                                                 // 0x030E (size: 0x1)
    float rot_Z;                                                                      // 0x0310 (size: 0x4)
    float rot_Y;                                                                      // 0x0314 (size: 0x4)
    float rot_zoom;                                                                   // 0x0318 (size: 0x4)
    bool move_down;                                                                   // 0x031C (size: 0x1)
    bool move_left;                                                                   // 0x031D (size: 0x1)
    bool move_zoomOut;                                                                // 0x031E (size: 0x1)
    FVector Speed;                                                                    // 0x0320 (size: 0xC)
    class AtelescopeMars_C* o_mars;                                                   // 0x0330 (size: 0x8)
    class Atelescope_moon_C* o_moon;                                                  // 0x0338 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0340 (size: 0x8)
    TArray<class AtelescopeObject_C*> telescopeObjects;                               // 0x0348 (size: 0x10)

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
    void setInTelescope(bool Condition);
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
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_telescope(int32 EntryPoint);
}; // Size: 0x358

#endif
