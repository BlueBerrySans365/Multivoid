#ifndef UE4SS_SDK_wire_HPP
#define UE4SS_SDK_wire_HPP

class Awire_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UCableComponent* Cable;                                                     // 0x0250 (size: 0x8)
    class USphereComponent* coll_B;                                                   // 0x0258 (size: 0x8)
    class USphereComponent* coll_a;                                                   // 0x0260 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0268 (size: 0x8)
    class AActor* actor_a;                                                            // 0x0270 (size: 0x8)
    class AActor* actor_b;                                                            // 0x0278 (size: 0x8)
    FString key_A;                                                                    // 0x0280 (size: 0x10)
    FString key_B;                                                                    // 0x0290 (size: 0x10)
    class UPrimitiveComponent* component_A;                                           // 0x02A0 (size: 0x8)
    class UPrimitiveComponent* component_B;                                           // 0x02A8 (size: 0x8)
    class Awire_C* passToWire;                                                        // 0x02B0 (size: 0x8)
    FString passTo_key;                                                               // 0x02B8 (size: 0x10)
    bool passed;                                                                      // 0x02C8 (size: 0x1)

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
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void GetKey(FName& Key);
    void canBeUsedHold(bool& return);
    void processKeys(bool& return);
    void getOnlyKey(FName& Key);
    void setPath(const TArray<FVector>& Path, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void gascanFuel(class Aprop_gascan_C* gascan, class AmainPlayer_C* Player, bool back, bool& fueled);
    void attach_b(FHitResult Hit, class AmainPlayer_C* Player);
    void attach_a(FHitResult Hit, class AmainPlayer_C* Player);
    void ignoreSave(bool& ignoreSave);
    void skipPreDelete(bool& Skip);
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
    void pass();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void Init();
    void destPass(class AActor* DestroyedActor);
    void destA(class AActor* DestroyedActor);
    void destB(class AActor* DestroyedActor);
    void kicked(bool kick);
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void resetPass();
    void ReceiveDestroyed();
    void driveDetached();
    void ExecuteUbergraph_wire(int32 EntryPoint);
}; // Size: 0x2C9

#endif
