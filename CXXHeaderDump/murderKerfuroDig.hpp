#ifndef UE4SS_SDK_murderKerfuroDig_HPP
#define UE4SS_SDK_murderKerfuroDig_HPP

class AmurderKerfuroDig_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x0250 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0258 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0260 (size: 0x8)
    class UStaticMeshComponent* kerfBase;                                             // 0x0268 (size: 0x8)
    class UBillboardComponent* Pivot;                                                 // 0x0270 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0278 (size: 0x8)
    TArray<FTransform> Points;                                                        // 0x0280 (size: 0x10)
    TArray<float> dirtSizes;                                                          // 0x0290 (size: 0x10)
    int32 step;                                                                       // 0x02A0 (size: 0x4)
    float Alpha;                                                                      // 0x02A4 (size: 0x4)

    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void asContainer(class Aprop_container_C*& container);
    void asFarmPlant(class AgrowingPlant_C*& plant);
    void asCookedFood(class Aprop_cookingFood_C*& cookedFood);
    void asFood(class Aprop_food_C*& food);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void landedOn(class AmainPlayer_C* Player, bool& ignoreFallDamage);
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void canBePutInContainer(bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void digOut();
    void getNextPoint(FTransform& Output);
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
    void ReceiveTick(float DeltaSeconds);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void driveDetached();
    void ReceiveBeginPlay();
    void attemptDigout();
    void ExecuteUbergraph_murderKerfuroDig(int32 EntryPoint);
}; // Size: 0x2A8

#endif
