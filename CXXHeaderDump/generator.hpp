#ifndef UE4SS_SDK_generator_HPP
#define UE4SS_SDK_generator_HPP

class Agenerator_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UParticleSystemComponent* eff_glow_blue;                                    // 0x0250 (size: 0x8)
    class UAudioComponent* audio_door;                                                // 0x0258 (size: 0x8)
    class UBoxComponent* button_door;                                                 // 0x0260 (size: 0x8)
    class UStaticMeshComponent* doorMover;                                            // 0x0268 (size: 0x8)
    class UChildActorComponent* panel;                                                // 0x0270 (size: 0x8)
    class USceneComponent* panelRoot;                                                 // 0x0278 (size: 0x8)
    class UAudioComponent* denied;                                                    // 0x0280 (size: 0x8)
    class UAudioComponent* audio_slotIn;                                              // 0x0288 (size: 0x8)
    class UBillboardComponent* upgradeRoot;                                           // 0x0290 (size: 0x8)
    class UChildActorComponent* door;                                                 // 0x0298 (size: 0x8)
    class UBillboardComponent* kerfSpot;                                              // 0x02A0 (size: 0x8)
    class Usvtarget_C* svtarget;                                                      // 0x02A8 (size: 0x8)
    class UBoxComponent* button_activate;                                             // 0x02B0 (size: 0x8)
    class UAudioComponent* Reset;                                                     // 0x02B8 (size: 0x8)
    class UAudioComponent* turnon;                                                    // 0x02C0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02D0 (size: 0x8)
    float doorAnim_TL_move_panel_6010EE2B45BFC345A335F886CC880448;                    // 0x02D8 (size: 0x4)
    float doorAnim_TL_move_door_6010EE2B45BFC345A335F886CC880448;                     // 0x02DC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> doorAnim_TL__Direction_6010EE2B45BFC345A335F886CC880448; // 0x02E0 (size: 0x1)
    class UTimelineComponent* doorAnim_TL;                                            // 0x02E8 (size: 0x8)
    bool IsBroken;                                                                    // 0x02F0 (size: 0x1)
    int32 Index;                                                                      // 0x02F4 (size: 0x4)
    int32 cycle;                                                                      // 0x02F8 (size: 0x4)
    Fgenerator_CTurnedOn turnedOn;                                                    // 0x0300 (size: 0x10)
    void turnedOn();
    Fgenerator_CUpdated updated;                                                      // 0x0310 (size: 0x10)
    void updated();
    int32 upgradeLevel;                                                               // 0x0320 (size: 0x4)
    TArray<class UPrimitiveComponent*> upgradeButtons;                                // 0x0328 (size: 0x10)
    TArray<class UStaticMeshComponent*> upgradeMeshes;                                // 0x0338 (size: 0x10)
    FString lookatText;                                                               // 0x0348 (size: 0x10)
    bool lookAtButton;                                                                // 0x0358 (size: 0x1)
    bool lookAtUpgrade;                                                               // 0x0359 (size: 0x1)
    int32 lookAtButtonIndex;                                                          // 0x035C (size: 0x4)
    class AtransformerMGPanel_C* panelObj;                                            // 0x0360 (size: 0x8)
    bool moving;                                                                      // 0x0368 (size: 0x1)
    bool opened;                                                                      // 0x0369 (size: 0x1)
    bool lookAtDoor;                                                                  // 0x036A (size: 0x1)
    bool cyc;                                                                         // 0x036B (size: 0x1)
    class AActor* triggerWhenCompleted;                                               // 0x0370 (size: 0x8)

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
    void fullFix();
    void getUpgrades();
    void updUpgrades();
    void Damage();
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void Update();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void break();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void UserConstructionScript();
    void doorAnim_TL__FinishedFunc();
    void doorAnim_TL__UpdateFunc();
    void enteredTheWater();
    void exitTheWater();
    void impactDamageCPP(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void impactSquishCPP(class UPrimitiveComponent* Component);
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
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void openDoor(bool Open);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_generator(int32 EntryPoint);
    void updated__DelegateSignature();
    void turnedOn__DelegateSignature();
}; // Size: 0x378

#endif
