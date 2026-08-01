#ifndef UE4SS_SDK_drone_HPP
#define UE4SS_SDK_drone_HPP

class Adrone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* blades_distant;                                            // 0x0228 (size: 0x8)
    class UAudioComponent* audio_alarm;                                               // 0x0230 (size: 0x8)
    class UParticleSystemComponent* eff_alarm4;                                       // 0x0238 (size: 0x8)
    class UPointLightComponent* light_alarm;                                          // 0x0240 (size: 0x8)
    class UBoxComponent* sackHitbox;                                                  // 0x0248 (size: 0x8)
    class USkeletalMeshComponent* sack;                                               // 0x0250 (size: 0x8)
    class UPhysicsConstraintComponent* sackConstraint;                                // 0x0258 (size: 0x8)
    class USphereComponent* sackPhys;                                                 // 0x0260 (size: 0x8)
    class UStaticMeshComponent* droneBody;                                            // 0x0268 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0270 (size: 0x8)
    class UParticleSystemComponent* eff_droneDust;                                    // 0x0278 (size: 0x8)
    class USkeletalMeshComponent* newdroneBlades_spinning;                            // 0x0280 (size: 0x8)
    class UStaticMeshComponent* ibox;                                                 // 0x0288 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0290 (size: 0x8)
    class UStaticMeshComponent* dbox;                                                 // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Box;                                                  // 0x02A0 (size: 0x8)
    class UBillboardComponent* grab;                                                  // 0x02A8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02B0 (size: 0x8)
    class UAudioComponent* blades;                                                    // 0x02B8 (size: 0x8)
    class UArrowComponent* lean;                                                      // 0x02C0 (size: 0x8)
    class UArrowComponent* Forward;                                                   // 0x02C8 (size: 0x8)
    class USphereComponent* coll;                                                     // 0x02D0 (size: 0x8)
    class UArrowComponent* look;                                                      // 0x02D8 (size: 0x8)
    TArray<FVector> Points;                                                           // 0x02E0 (size: 0x10)
    int32 ind;                                                                        // 0x02F0 (size: 0x4)
    FVector Point;                                                                    // 0x02F4 (size: 0xC)
    int32 flyingType;                                                                 // 0x0300 (size: 0x4)
    class AActor* pickup;                                                             // 0x0308 (size: 0x8)
    bool Direction;                                                                   // 0x0310 (size: 0x1)
    class Udrone_sk_Skeleton_AnimBlueprint_C* inst;                                   // 0x0318 (size: 0x8)
    FVector vecGrab;                                                                  // 0x0320 (size: 0xC)
    bool isGrabbing;                                                                  // 0x032C (size: 0x1)
    bool pickedup;                                                                    // 0x032D (size: 0x1)
    class AdroneSellLocation_C* sellLocation;                                         // 0x0330 (size: 0x8)
    float Damping;                                                                    // 0x0338 (size: 0x4)
    float Speed;                                                                      // 0x033C (size: 0x4)
    float Pitch;                                                                      // 0x0340 (size: 0x4)
    float dist;                                                                       // 0x0344 (size: 0x4)
    Fstruct_storeOrder order;                                                         // 0x0348 (size: 0x18)
    bool hasOrder;                                                                    // 0x0360 (size: 0x1)
    class AActor* orderDrop;                                                          // 0x0368 (size: 0x8)
    bool Active;                                                                      // 0x0370 (size: 0x1)
    class AdroneSpline_C* Spline;                                                     // 0x0378 (size: 0x8)
    TArray<Fstruct_signalDataDynamic> sellBox_data;                                   // 0x0380 (size: 0x10)
    FVector pickupLoc;                                                                // 0x0390 (size: 0xC)
    float pickupRot;                                                                  // 0x039C (size: 0x4)
    FString sellBox_zipInfo;                                                          // 0x03A0 (size: 0x10)
    FVector vecForce;                                                                 // 0x03B0 (size: 0xC)
    TSubclassOf<class AActor> lastSpawn;                                              // 0x03C0 (size: 0x8)
    Fstruct_save Data;                                                                // 0x03D0 (size: 0x100)
    bool hasIteembox;                                                                 // 0x04D0 (size: 0x1)
    bool calledError;                                                                 // 0x04D1 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x04D8 (size: 0x8)
    FVector lerpTorque;                                                               // 0x04E0 (size: 0xC)
    class UdronesackDraft_Skeleton_AnimBlueprint_C* droneSackAnim;                    // 0x04F0 (size: 0x8)
    class Aprop_inventoryContainer_drone_C* container;                                // 0x04F8 (size: 0x8)
    bool canTakeoff;                                                                  // 0x0500 (size: 0x1)
    bool hasSack;                                                                     // 0x0501 (size: 0x1)
    bool sackInteract;                                                                // 0x0502 (size: 0x1)
    bool leaveAfter5min;                                                              // 0x0503 (size: 0x1)
    int32 alarmCount;                                                                 // 0x0504 (size: 0x4)

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
    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void asContainer(class Aprop_container_C*& container);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void asFarmPlant(class AgrowingPlant_C*& plant);
    void asCookedFood(class Aprop_cookingFood_C*& cookedFood);
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void canBePutInContainer(bool& return);
    void landedOn(class AmainPlayer_C* Player, bool& ignoreFallDamage);
    void asFood(class Aprop_food_C*& food);
    void gatherDataFromKeyT(bool& gather);
    void ignoreSave_trigger(bool& ignore);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void getTriggerData(Fstruct_triggerSave& Data);
    void putSackOn(class AActor* sack, class USceneComponent* velocityComponent);
    void dropSack();
    void setPickupLocation();
    void compileOrder();
    void loadData(Fstruct_save Data);
    void getData(Fstruct_save& Data);
    void disChan();
    void makePoint();
    void checkOrders();
    void beginFly();
    TEnumAsByte<enum_emailChars::Type> randScien();
    void leaning();
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
    void runTrigger(class AActor* Owner, int32 Index);
    void set_ignoreSave_trigger(bool NewParam);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void ReceiveTick(float DeltaSeconds);
    void enterWater(class AwaterVolume_C* Water);
    void ImpactDamage(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void virus(bool Activate);
    void sendShop(Fstruct_storeOrder order);
    void eaten(class AmainPlayer_C* Player);
    void leaveWaterOrigin(class AwaterVolume_C* Water);
    void enterWaterOrigin(class AwaterVolume_C* Water);
    void leaveWater(class AwaterVolume_C* Water);
    void ReceiveBeginPlay();
    void triggerFly(class AdroneConsole_C* Console);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void timerAlarm();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void soundAlarm();
    void BndEvt__drone_sackPhys_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void delaySackInteraction();
    void ExecuteUbergraph_drone(int32 EntryPoint);
}; // Size: 0x508

#endif
