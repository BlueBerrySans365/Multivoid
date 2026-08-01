#ifndef UE4SS_SDK_cord_HPP
#define UE4SS_SDK_cord_HPP

class Acord_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0250 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0258 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0260 (size: 0x8)
    class UCableComponent* Cable;                                                     // 0x0268 (size: 0x8)
    class UStaticMeshComponent* head;                                                 // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Root;                                                 // 0x0278 (size: 0x8)
    class AcordSocket_C* Socket;                                                      // 0x0280 (size: 0x8)
    class Aprop_C* Parent;                                                            // 0x0288 (size: 0x8)
    bool isDetached;                                                                  // 0x0290 (size: 0x1)
    float cordMaxLength;                                                              // 0x0294 (size: 0x4)
    bool Length;                                                                      // 0x0298 (size: 0x1)
    FVector Offset;                                                                   // 0x029C (size: 0xC)
    bool Drag;                                                                        // 0x02A8 (size: 0x1)
    class AmainPlayer_C* Player;                                                      // 0x02B0 (size: 0x8)

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
    void setParent();
    void tryToConnect(bool load, float testRadius, bool move, FVector NewLocation, FRotator NewRotation, class AcordSocket_C*& AsCord Socket);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void setLen();
    void getAttachComponents(class UStaticMeshComponent*& C1, class UStaticMeshComponent*& C2, FTransform& Frame);
    void skipPreDelete(bool& Skip);
    void ignoreSave(bool& ignoreSave);
    void setTr(const FTransform& NewTransform);
    void disconnect();
    void Connect(class AcordSocket_C* Socket, bool load);
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
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void beginHoldingObject(class AmainPlayer_C* Player, FHitResult Hit);
    void playerStepped(FHitResult Hit);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void reattach();
    void ReceiveDestroyed();
    void used(bool Pressed);
    void breakInput();
    void ExecuteUbergraph_cord(int32 EntryPoint);
}; // Size: 0x2B8

#endif
