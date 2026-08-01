#ifndef UE4SS_SDK_eriePlushLive_HPP
#define UE4SS_SDK_eriePlushLive_HPP

class AeriePlushLive_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* flower;                                               // 0x04C8 (size: 0x8)
    class UBillboardComponent* spawnEmote;                                            // 0x04D0 (size: 0x8)
    class UBillboardComponent* spawnEmoteRoot;                                        // 0x04D8 (size: 0x8)
    class UParticleSystemComponent* matchEffect;                                      // 0x04E0 (size: 0x8)
    class UStaticMeshComponent* cheesecube;                                           // 0x04E8 (size: 0x8)
    class UBillboardComponent* safeSpawn;                                             // 0x04F0 (size: 0x8)
    class UBillboardComponent* RayStart;                                              // 0x04F8 (size: 0x8)
    class UBillboardComponent* attachSteal;                                           // 0x0500 (size: 0x8)
    class UArrowComponent* runningAway;                                               // 0x0508 (size: 0x8)
    class UStaticMeshComponent* stealMesh;                                            // 0x0510 (size: 0x8)
    class UBillboardComponent* spawnSplat;                                            // 0x0518 (size: 0x8)
    float stealTimeline_a_60FFC5FB430B1C7250BA3AB38FCAC71B;                           // 0x0520 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> stealTimeline__Direction_60FFC5FB430B1C7250BA3AB38FCAC71B; // 0x0524 (size: 0x1)
    class UTimelineComponent* stealTimeline;                                          // 0x0528 (size: 0x8)
    bool splatted;                                                                    // 0x0530 (size: 0x1)
    class UerieLive_Skeleton_AnimBlueprint_C* Anim;                                   // 0x0538 (size: 0x8)
    FName splatAnim;                                                                  // 0x0540 (size: 0x8)
    class AActor* steal;                                                              // 0x0548 (size: 0x8)
    bool canAction;                                                                   // 0x0550 (size: 0x1)
    Fstruct_save stolenData;                                                          // 0x0560 (size: 0x100)
    bool isCarrying;                                                                  // 0x0660 (size: 0x1)
    FTransform T1;                                                                    // 0x0670 (size: 0x30)
    bool standup;                                                                     // 0x06A0 (size: 0x1)
    FTimerHandle Timer;                                                               // 0x06A8 (size: 0x8)
    TEnumAsByte<enum_erieAnimState::Type> State;                                      // 0x06B0 (size: 0x1)
    float rep;                                                                        // 0x06B4 (size: 0x4)
    class Aprop_C* stealProp;                                                         // 0x06B8 (size: 0x8)
    bool superEater;                                                                  // 0x06C0 (size: 0x1)
    FName foodEating;                                                                 // 0x06C4 (size: 0x8)
    TSubclassOf<class AerieDrag_C> erieDrag;                                          // 0x06D0 (size: 0x8)
    TSubclassOf<class AeriePlushLive_C> erieLiving;                                   // 0x06D8 (size: 0x8)
    bool isEvil;                                                                      // 0x06E0 (size: 0x1)
    bool IsGood;                                                                      // 0x06E1 (size: 0x1)
    bool skipGetUp;                                                                   // 0x06E2 (size: 0x1)
    bool Skip;                                                                        // 0x06E3 (size: 0x1)
    class Ucomp_flammable_C* flameBase;                                               // 0x06E8 (size: 0x8)
    float life;                                                                       // 0x06F0 (size: 0x4)

    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ignoreSave(bool& ignoreSave);
    void skipPreDelete(bool& Skip);
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
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void canBePutInContainer(bool& return);
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
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void GetKey(FName& Key);
    void canBeUsedHold(bool& return);
    void processKeys(bool& return);
    void getOnlyKey(FName& Key);
    void setPath(const TArray<FVector>& Path, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void gascanFuel(class Aprop_gascan_C* gascan, class AmainPlayer_C* Player, bool back, bool& fueled);
    void getStealProp(const TArray<class AActor*>& TargetArray, class AActor*& OutItem);
    void addRep();
    void StopAnim();
    void bonked();
    FVector makeLoc();
    void stealTimeline__FinishedFunc();
    void stealTimeline__UpdateFunc();
    void OnFail_B60F5EF14CE1F1CFFF7ED8BE49287491(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_B60F5EF14CE1F1CFFF7ED8BE49287491(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_195090EF4000A393F5449F9306C12A66(FName NotifyName);
    void OnNotifyBegin_195090EF4000A393F5449F9306C12A66(FName NotifyName);
    void OnInterrupted_195090EF4000A393F5449F9306C12A66(FName NotifyName);
    void OnBlendOut_195090EF4000A393F5449F9306C12A66(FName NotifyName);
    void OnCompleted_195090EF4000A393F5449F9306C12A66(FName NotifyName);
    void OnNotifyEnd_36897E73449BC0A26943C6A561C5DD0C(FName NotifyName);
    void OnNotifyBegin_36897E73449BC0A26943C6A561C5DD0C(FName NotifyName);
    void OnInterrupted_36897E73449BC0A26943C6A561C5DD0C(FName NotifyName);
    void OnBlendOut_36897E73449BC0A26943C6A561C5DD0C(FName NotifyName);
    void OnCompleted_36897E73449BC0A26943C6A561C5DD0C(FName NotifyName);
    void OnFail_15DF79E44ECE9E4CBB370AAB1AD42EEA(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_15DF79E44ECE9E4CBB370AAB1AD42EEA(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_8117E4BA4F1165AA82AF6196BD65F3FA(FName NotifyName);
    void OnNotifyBegin_8117E4BA4F1165AA82AF6196BD65F3FA(FName NotifyName);
    void OnInterrupted_8117E4BA4F1165AA82AF6196BD65F3FA(FName NotifyName);
    void OnBlendOut_8117E4BA4F1165AA82AF6196BD65F3FA(FName NotifyName);
    void OnCompleted_8117E4BA4F1165AA82AF6196BD65F3FA(FName NotifyName);
    void OnNotifyEnd_6962D7E443CE20D1E06FFDBE70479F4C(FName NotifyName);
    void OnNotifyBegin_6962D7E443CE20D1E06FFDBE70479F4C(FName NotifyName);
    void OnInterrupted_6962D7E443CE20D1E06FFDBE70479F4C(FName NotifyName);
    void OnBlendOut_6962D7E443CE20D1E06FFDBE70479F4C(FName NotifyName);
    void OnCompleted_6962D7E443CE20D1E06FFDBE70479F4C(FName NotifyName);
    void OnNotifyEnd_6C8828B34AC3A0F799F1F79CB729EFE7(FName NotifyName);
    void OnNotifyBegin_6C8828B34AC3A0F799F1F79CB729EFE7(FName NotifyName);
    void OnInterrupted_6C8828B34AC3A0F799F1F79CB729EFE7(FName NotifyName);
    void OnBlendOut_6C8828B34AC3A0F799F1F79CB729EFE7(FName NotifyName);
    void OnCompleted_6C8828B34AC3A0F799F1F79CB729EFE7(FName NotifyName);
    void OnNotifyEnd_1AB22B384D90439DB9097998C64CBFCB(FName NotifyName);
    void OnNotifyBegin_1AB22B384D90439DB9097998C64CBFCB(FName NotifyName);
    void OnInterrupted_1AB22B384D90439DB9097998C64CBFCB(FName NotifyName);
    void OnBlendOut_1AB22B384D90439DB9097998C64CBFCB(FName NotifyName);
    void OnCompleted_1AB22B384D90439DB9097998C64CBFCB(FName NotifyName);
    void OnFail_DCE7784940FB5975BAAAE7AF85ACC838(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_DCE7784940FB5975BAAAE7AF85ACC838(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void setIgnoreSave(bool ignore);
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
    void microwave(class Aprop_microwave_C* microwave);
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
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
    void ReceiveTick(float DeltaSeconds);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void startMoving();
    void ReceiveBeginPlay();
    void splat(FHitResult Hit);
    void stealing();
    void stealAnim(bool Condition);
    void ReceiveDestroyed();
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void BndEvt__eriePlushLive_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void getStolen();
    void checkClip();
    void throw();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void reduceRep();
    void descend();
    void slice(bool clean);
    void ignite(float fuel);
    void fireDamage(float Damage);
    void ex();
    void extinguishFire();
    void regen();
    void ExecuteUbergraph_eriePlushLive(int32 EntryPoint);
}; // Size: 0x6F4

#endif
