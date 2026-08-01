#ifndef UE4SS_SDK_comp_physicsImpact_HPP
#define UE4SS_SDK_comp_physicsImpact_HPP

class Ucomp_physicsImpact_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class AActor* Owner;                                                              // 0x00B8 (size: 0x8)
    class UPrimitiveComponent* HitComponent;                                          // 0x00C0 (size: 0x8)
    Fstruct_physSound physSoundData;                                                  // 0x00C8 (size: 0x98)
    FHitResult HitResult;                                                             // 0x0160 (size: 0x88)
    bool canHit_0;                                                                    // 0x01E8 (size: 0x1)
    float impactForce;                                                                // 0x01EC (size: 0x4)
    float Mass;                                                                       // 0x01F0 (size: 0x4)
    float ImpactThreshold;                                                            // 0x01F4 (size: 0x4)
    float imp_val;                                                                    // 0x01F8 (size: 0x4)
    float impact;                                                                     // 0x01FC (size: 0x4)
    bool Damage;                                                                      // 0x0200 (size: 0x1)
    Fstruct_breakableProp damageData;                                                 // 0x0208 (size: 0x30)
    float health;                                                                     // 0x0238 (size: 0x4)
    class UStaticMeshComponent* A;                                                    // 0x0240 (size: 0x8)
    bool isScraping;                                                                  // 0x0248 (size: 0x1)
    class UAudioComponent* scraping;                                                  // 0x0250 (size: 0x8)
    float vol;                                                                        // 0x0258 (size: 0x4)
    bool customBreak;                                                                 // 0x025C (size: 0x1)
    bool noSounds;                                                                    // 0x025D (size: 0x1)
    bool debug;                                                                       // 0x025E (size: 0x1)
    class Aprop_C* asProp;                                                            // 0x0260 (size: 0x8)
    class UPrimitiveComponent* boundsComponent;                                       // 0x0268 (size: 0x8)
    bool makeHit;                                                                     // 0x0270 (size: 0x1)
    Fcomp_physicsImpact_CHitEvent hitEvent;                                           // 0x0278 (size: 0x10)
    void hitEvent(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    bool customPhysmat;                                                               // 0x0288 (size: 0x1)
    class UPhysicalMaterial* PhysMat;                                                 // 0x0290 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> dyn;                                        // 0x0298 (size: 0x10)
    float impRe;                                                                      // 0x02A8 (size: 0x4)
    bool isFireDamage;                                                                // 0x02AC (size: 0x1)
    Fcomp_physicsImpact_CHitOverThreshold hitOverThreshold;                           // 0x02B0 (size: 0x10)
    void hitOverThreshold(FHitResult Hit, FVector impact);
    class UPhysicalMaterial* physmat_override;                                        // 0x02C0 (size: 0x8)
    FTimerHandle scrapeTimer;                                                         // 0x02C8 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x02D0 (size: 0x8)
    bool ownerIsPlayer;                                                               // 0x02D8 (size: 0x1)
    bool onGround;                                                                    // 0x02D9 (size: 0x1)
    FVector lastHitNormal;                                                            // 0x02DC (size: 0xC)
    class UParticleSystemComponent* dustEffect;                                       // 0x02E8 (size: 0x8)
    FVector HitLocation;                                                              // 0x02F0 (size: 0xC)
    bool disable;                                                                     // 0x02FC (size: 0x1)
    bool scrapeDust;                                                                  // 0x02FD (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x0300 (size: 0x8)
    class UParticleSystem* custom_effectBreak;                                        // 0x0308 (size: 0x8)
    class UParticleSystem* custom_effectDamage;                                       // 0x0310 (size: 0x8)
    int32 physType;                                                                   // 0x0318 (size: 0x4)
    bool dist;                                                                        // 0x031C (size: 0x1)
    FVector impactDmg;                                                                // 0x0320 (size: 0xC)
    FHitResult hitImpact;                                                             // 0x032C (size: 0x88)
    FVector NormalImpulse;                                                            // 0x03B4 (size: 0xC)
    bool unbreakable;                                                                 // 0x03C0 (size: 0x1)

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
    void GetKey(FName& Key);
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void boundsLocationRotation(FRotator& Rotation, FVector& Location, FVector& Extent, bool& Global);
    void setPhysSoundData();
    class UPhysicalMaterial* getComponentPhysmat();
    void makePhysSound();
    void geLens(class UPrimitiveComponent* InputPin, float& lin, float& ang);
    void digUp();
    void physPreDestroyed();
    void physDestroyed();
    void setKey(FName Key);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
    void virus(bool Activate);
    void eaten(class AmainPlayer_C* Player);
    void leaveWaterOrigin(class AwaterVolume_C* Water);
    void enterWaterOrigin(class AwaterVolume_C* Water);
    void leaveWater(class AwaterVolume_C* Water);
    void enterWater(class AwaterVolume_C* Water);
    void unhook();
    void steppedOn(class AmainPlayer_C* Player, FHitResult Hit);
    void ignite(float fuel);
    void microwave(class Aprop_microwave_C* microwave);
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
    void startScraping();
    void retargetHit(class UPrimitiveComponent* HitComponent);
    void updateMaterial();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void fireDamage(float Damage);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void resetOnGround();
    void setHit();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void extinguishFire();
    void ImpactDamage(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
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
    void Init();
    void Hit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void reachedByLightning(class AlightningStrike_C* lightning);
    void crowbarOpen(class ApryingCrowbar_C* pryingCrowbar);
    void driveBrokenNearby(class Aprop_drive_C* drive);
    void craftDepleted(class Aprop_workbench_C* workbench);
    void lookedAt(class AmainPlayer_C* Player, FHitResult HitResult, class UPrimitiveComponent* lookAtComponent);
    void sendTag(FName Tag);
    void padlock_unlock(class Aprop_padlock_C* padlock);
    void padlock_lock(class Aprop_padlock_C* padlock);
    void upgradeTake(FName Item);
    void playerUsedOn_delay(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void playerUnsit(class AmainPlayer_C* Player);
    void playerSit(class AmainPlayer_C* Player);
    void insertBattery(class AmainPlayer_C* Player, class Aprop_batts_C* battery);
    void hookTension(class Ahook_C* hook);
    void cleanSponge(float clean, class AmainPlayer_C* Player, class Aprop_sponge_C* sponge, FHitResult Hit);
    void crafted();
    void hooked(class Ahook_C* hook);
    void attemptIgnite();
    void hitCpp(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void restoreHit();
    void stopScraping();
    void resetGround();
    void destroyed(class AActor* DestroyedActor);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ExecuteUbergraph_comp_physicsImpact(int32 EntryPoint);
    void hitOverThreshold__DelegateSignature(FHitResult Hit, FVector impact);
    void hitEvent__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
}; // Size: 0x3C1

#endif
