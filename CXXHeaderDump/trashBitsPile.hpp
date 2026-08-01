#ifndef UE4SS_SDK_trashBitsPile_HPP
#define UE4SS_SDK_trashBitsPile_HPP

class AtrashBitsPile_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0250 (size: 0x8)
    int32 Shape;                                                                      // 0x0258 (size: 0x4)
    TEnumAsByte<enum_trashType::Type> typeA;                                          // 0x025C (size: 0x1)
    TEnumAsByte<enum_trashType::Type> typeB;                                          // 0x025D (size: 0x1)
    bool randomTypeA;                                                                 // 0x025E (size: 0x1)
    bool randomTypeB;                                                                 // 0x025F (size: 0x1)
    int32 amountA;                                                                    // 0x0260 (size: 0x4)
    int32 amountB;                                                                    // 0x0264 (size: 0x4)
    bool doDebug;                                                                     // 0x0268 (size: 0x1)
    bool snapToSurface;                                                               // 0x0269 (size: 0x1)
    bool AlignToNormal;                                                               // 0x026A (size: 0x1)
    bool randomYRoll;                                                                 // 0x026B (size: 0x1)
    bool tt_plastic;                                                                  // 0x026C (size: 0x1)
    bool tt_paper;                                                                    // 0x026D (size: 0x1)
    bool tt_metal;                                                                    // 0x026E (size: 0x1)
    bool tt_rubber;                                                                   // 0x026F (size: 0x1)
    bool tt_elec;                                                                     // 0x0270 (size: 0x1)
    bool tt_glass;                                                                    // 0x0271 (size: 0x1)
    bool tt_wood;                                                                     // 0x0272 (size: 0x1)
    bool tt_organic;                                                                  // 0x0273 (size: 0x1)

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
    TEnumAsByte<enum_trashType::Type> getRandomTrashType();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void D(FName InputPin);
    void DebugName();
    void getTrashProp(bool& last, FName& prop);
    void trashToProp(TEnumAsByte<enum_trashType::Type> Type, FName& prop);
    void Init();
    void UserConstructionScript();
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
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void beginHoldingObject(class AmainPlayer_C* Player, FHitResult Hit);
    void playerStepped(FHitResult Hit);
    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void broomed(FVector Location);
    void vacuumed(FVector Location);
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void ExecuteUbergraph_trashBitsPile(int32 EntryPoint);
}; // Size: 0x274

#endif
