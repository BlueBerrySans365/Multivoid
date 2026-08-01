#ifndef UE4SS_SDK_atm_HPP
#define UE4SS_SDK_atm_HPP

class Aatm_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0250 (size: 0x8)
    class USphereComponent* giveMoney;                                                // 0x0258 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0260 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0268 (size: 0x8)
    class UBoxComponent* keypad;                                                      // 0x0270 (size: 0x8)
    class UBillboardComponent* soundCore;                                             // 0x0278 (size: 0x8)
    class UArrowComponent* withdraw_loc;                                              // 0x0280 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0288 (size: 0x8)
    bool lookingAt;                                                                   // 0x0290 (size: 0x1)
    bool isBusy;                                                                      // 0x0291 (size: 0x1)
    FName billType;                                                                   // 0x0294 (size: 0x8)
    int32 billAmount;                                                                 // 0x029C (size: 0x4)
    TMap<FName, int32> withdrawList;                                                  // 0x02A0 (size: 0x50)
    class Uui_atm_C* Interface;                                                       // 0x02F0 (size: 0x8)

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
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
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
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void withdraw(TMap<FName, int32> List);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_atm(int32 EntryPoint);
}; // Size: 0x2F8

#endif
