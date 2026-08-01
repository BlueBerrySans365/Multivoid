#ifndef UE4SS_SDK_tutorialHint_HPP
#define UE4SS_SDK_tutorialHint_HPP

class AtutorialHint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* spatialRadius;                                            // 0x0228 (size: 0x8)
    class UParticleSystemComponent* eff_disableTrigger;                               // 0x0230 (size: 0x8)
    class UParticleSystemComponent* eff_nextTrigger;                                  // 0x0238 (size: 0x8)
    class UAudioComponent* audio_line;                                                // 0x0240 (size: 0x8)
    class UBoxComponent* Bound;                                                       // 0x0248 (size: 0x8)
    class UAudioComponent* audio_doneTyping;                                          // 0x0250 (size: 0x8)
    class UAudioComponent* audio_typing3;                                             // 0x0258 (size: 0x8)
    class UAudioComponent* audio_typing2;                                             // 0x0260 (size: 0x8)
    class UAudioComponent* audio_typing1;                                             // 0x0268 (size: 0x8)
    class USphereComponent* useTrigger;                                               // 0x0270 (size: 0x8)
    class USphereComponent* inactiveRadius;                                           // 0x0278 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0280 (size: 0x8)
    float showPointLine_TL_a_4E330D244F2174ADD97CC9B595121838;                        // 0x0288 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> showPointLine_TL__Direction_4E330D244F2174ADD97CC9B595121838; // 0x028C (size: 0x1)
    class UTimelineComponent* showPointLine_TL;                                       // 0x0290 (size: 0x8)
    TEnumAsByte<enum_questionIconType::Type> iconType;                                // 0x0298 (size: 0x1)
    bool SnapToGround;                                                                // 0x0299 (size: 0x1)
    FText text_spatial;                                                               // 0x02A0 (size: 0x18)
    bool isSpatial;                                                                   // 0x02B8 (size: 0x1)
    bool useTypingAndSpatial;                                                         // 0x02B9 (size: 0x1)
    class Uui_hovertext_typing_C* widget_subtitles;                                   // 0x02C0 (size: 0x8)
    bool Active;                                                                      // 0x02C8 (size: 0x1)
    bool proximity;                                                                   // 0x02C9 (size: 0x1)
    bool stepGuide;                                                                   // 0x02CA (size: 0x1)
    TArray<Fstruct_tutorialHelpText> stack;                                           // 0x02D0 (size: 0x10)
    int32 text_index;                                                                 // 0x02E0 (size: 0x4)
    bool Finished;                                                                    // 0x02E4 (size: 0x1)
    bool Done;                                                                        // 0x02E5 (size: 0x1)
    class AtutorialHint_C* nextHint;                                                  // 0x02E8 (size: 0x8)
    class AtutorialHint_C* disableHint;                                               // 0x02F0 (size: 0x8)
    TArray<FName> usedTags;                                                           // 0x02F8 (size: 0x10)
    FName Key;                                                                        // 0x0308 (size: 0x8)
    class AActor* activateTriggerOnFinish;                                            // 0x0310 (size: 0x8)
    float spatialTextRadius;                                                          // 0x0318 (size: 0x4)
    class Uui_hovertext_spatial_C* widget_spatial;                                    // 0x0320 (size: 0x8)
    float deactivationRadius;                                                         // 0x0328 (size: 0x4)
    bool autoDeactivateOnFinish;                                                      // 0x032C (size: 0x1)
    FtutorialHint_CFinishedSpeaking finishedSpeaking;                                 // 0x0330 (size: 0x10)
    void finishedSpeaking();
    class USoundBase* audio_type;                                                     // 0x0340 (size: 0x8)
    class USoundBase* audio_finish;                                                   // 0x0348 (size: 0x8)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void gatherDataFromKeyT(bool& gather);
    void lightningInfluence(bool& influence, float& Multiplier);
    void ignoreHook(bool& ignore);
    void overlayBoyancy(bool& Overlay, float& boyancy);
    void crematorTimeMultiplier(float& mult);
    void crematorAction(bool& Action);
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
    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void canBePutInContainer(bool& return);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void landedOn(class AmainPlayer_C* Player, bool& ignoreFallDamage);
    void asFood(class Aprop_food_C*& food);
    void asCookedFood(class Aprop_cookingFood_C*& cookedFood);
    void asFarmPlant(class AgrowingPlant_C*& plant);
    void asContainer(class Aprop_container_C*& container);
    void placeOverGround();
    void playTextByTag(FName accessTag);
    void SetActive(bool Active);
    void upd();
    void UserConstructionScript();
    void showPointLine_TL__FinishedFunc();
    void showPointLine_TL__UpdateFunc();
    void set_ignoreSave_trigger(bool NewParam);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
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
    void BndEvt__tutorialHint_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void pointLine();
    void textStarted();
    void startTalking(bool Skip);
    void textFinished(bool skipped, bool forceFinish);
    void sendTag(FName Tag);
    void runTrigger(class AActor* Owner, int32 Index);
    void BndEvt__tutorialHint_spatialRadius_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__tutorialHint_spatialRadius_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_tutorialHint(int32 EntryPoint);
    void finishedSpeaking__DelegateSignature();
}; // Size: 0x350

#endif
