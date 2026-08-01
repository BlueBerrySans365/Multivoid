#ifndef UE4SS_SDK_panel_SATconsole_HPP
#define UE4SS_SDK_panel_SATconsole_HPP

class Apanel_SATconsole_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class URectLightComponent* screenLight;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* radarBody;                                            // 0x0258 (size: 0x8)
    class UStaticMeshComponent* radarScreenMesh;                                      // 0x0260 (size: 0x8)
    class UBillboardComponent* cen;                                                   // 0x0268 (size: 0x8)
    class UAudioComponent* serverDown;                                                // 0x0270 (size: 0x8)
    class USphereComponent* updName;                                                  // 0x0278 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0280 (size: 0x8)
    class UBillboardComponent* buttonsRoot;                                           // 0x0288 (size: 0x8)
    class UBillboardComponent* stand;                                                 // 0x0290 (size: 0x8)
    class Uui_console_C* Widget;                                                      // 0x0298 (size: 0x8)
    class AActor* controlObject;                                                      // 0x02A0 (size: 0x8)
    class Adish_C* control_asDish;                                                    // 0x02A8 (size: 0x8)
    bool Root;                                                                        // 0x02B0 (size: 0x1)
    bool isLlamable;                                                                  // 0x02B1 (size: 0x1)

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
    void skipPreDelete(bool& Skip);
    void ignoreSave(bool& ignoreSave);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void con();
    void Server Alert(class AserverBox_C* server);
    void cal_100();
    void setAsDish(class AActor* controlObject);
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
    void BndEvt__updName_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void begin();
    void BndEvt__panel_SATconsole_updName_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_panel_SATconsole(int32 EntryPoint);
}; // Size: 0x2B2

#endif
