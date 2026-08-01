#ifndef UE4SS_SDK_panel_radar_HPP
#define UE4SS_SDK_panel_radar_HPP

class Apanel_radar_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* meshmodule4;                                          // 0x0250 (size: 0x8)
    class UStaticMeshComponent* meshmodule3;                                          // 0x0258 (size: 0x8)
    class UStaticMeshComponent* meshmodule2;                                          // 0x0260 (size: 0x8)
    class UStaticMeshComponent* meshmodule1;                                          // 0x0268 (size: 0x8)
    class UStaticMeshComponent* meshslot4;                                            // 0x0270 (size: 0x8)
    class UStaticMeshComponent* meshslot3;                                            // 0x0278 (size: 0x8)
    class UStaticMeshComponent* meshslot2;                                            // 0x0280 (size: 0x8)
    class UStaticMeshComponent* meshslot1;                                            // 0x0288 (size: 0x8)
    class UBillboardComponent* Slots;                                                 // 0x0290 (size: 0x8)
    class UBoxComponent* lever;                                                       // 0x0298 (size: 0x8)
    class URectLightComponent* screenLight;                                           // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* radarScreenMesh;                                      // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* radarBody;                                            // 0x02B0 (size: 0x8)
    class UAudioComponent* radarBeep;                                                 // 0x02B8 (size: 0x8)
    class UBillboardComponent* Center;                                                // 0x02C0 (size: 0x8)
    class UBoxComponent* panel;                                                       // 0x02C8 (size: 0x8)
    class UBillboardComponent* buttonsRoot;                                           // 0x02D0 (size: 0x8)
    class UBillboardComponent* stand;                                                 // 0x02D8 (size: 0x8)
    class Uui_console_C* Widget;                                                      // 0x02E0 (size: 0x8)
    class Atrigger_alarm_C* alarmTrigger;                                             // 0x02E8 (size: 0x8)
    class AanalogDScreenTest_C* screens;                                              // 0x02F0 (size: 0x8)
    class Uui_radar_C* radarElement;                                                  // 0x02F8 (size: 0x8)
    class AmoabMortar_C* moabMortar;                                                  // 0x0300 (size: 0x8)
    TArray<TEnumAsByte<enum_physicalModules::Type>> upgrades;                         // 0x0308 (size: 0x10)
    TArray<class UPrimitiveComponent*> moduleMeshes;                                  // 0x0318 (size: 0x10)
    bool lookAtSlot;                                                                  // 0x0328 (size: 0x1)
    TEnumAsByte<enum_physicalModules::Type> lookatModule;                             // 0x0329 (size: 0x1)
    bool lookingAtButtons;                                                            // 0x032A (size: 0x1)
    bool lookingAtSlots;                                                              // 0x032B (size: 0x1)
    int32 lookingAtSlotIndex;                                                         // 0x032C (size: 0x4)

    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void asContainer(class Aprop_container_C*& container);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void asFarmPlant(class AgrowingPlant_C*& plant);
    void asCookedFood(class Aprop_cookingFood_C*& cookedFood);
    void asFood(class Aprop_food_C*& food);
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void canBePutInContainer(bool& return);
    void landedOn(class AmainPlayer_C* Player, bool& ignoreFallDamage);
    void setUpgSlot(class AActor* upgrade, class UPrimitiveComponent* slotComponent);
    void soundPlugModule(FVector Location, bool In);
    void allowedModules(TEnumAsByte<enum_physicalModules::Type> Module, bool& isAllowed);
    void slotToIndex(const class UPrimitiveComponent*& ItemToFind, int32& NewParam);
    void updModules();
    void skipPreDelete(bool& Skip);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void UserConstructionScript();
    void broken_fire();
    void thrown(class AmainPlayer_C* Player);
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void broken();
    void updateStrAgl();
    void playerUnequip(class AmainPlayer_C* Player);
    void sendName(FName Name);
    void playerHoldPost(class AmainPlayer_C* Player);
    void playerStepped(FHitResult Hit);
    void kicked(bool kick);
    void beginHoldingObject(class AmainPlayer_C* Player, FHitResult Hit);
    void begin(class AanalogDScreenTest_C* screens);
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerHoldPre(class AmainPlayer_C* Player);
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void driveDetached();
    void ReceiveBeginPlay();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void unequpped(class AmainPlayer_C* Player);
    void playerHitWith(FHitResult Hit, class AmainPlayer_C* Player);
    void BndEvt__panel_radar_meshmodule1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__panel_radar_meshmodule2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__panel_radar_meshmodule3_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__panel_radar_meshmodule4_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_panel_radar(int32 EntryPoint);
}; // Size: 0x330

#endif
