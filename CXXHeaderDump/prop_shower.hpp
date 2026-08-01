#ifndef UE4SS_SDK_prop_shower_HPP
#define UE4SS_SDK_prop_shower_HPP

class Aprop_shower_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UChildActorComponent* navblock2;                                            // 0x0250 (size: 0x8)
    class UChildActorComponent* navblock1;                                            // 0x0258 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0260 (size: 0x8)
    class UBoxComponent* switch_cold;                                                 // 0x0268 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0270 (size: 0x8)
    class UParticleSystemComponent* eff_water;                                        // 0x0278 (size: 0x8)
    class UStaticMeshComponent* cube;                                                 // 0x0280 (size: 0x8)
    float clean;                                                                      // 0x0288 (size: 0x4)
    FVector cleanVec;                                                                 // 0x028C (size: 0xC)
    bool running_cold;                                                                // 0x0298 (size: 0x1)
    uint8 useType;                                                                    // 0x0299 (size: 0x1)

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
    void updWater();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void upd();
    void UserConstructionScript();
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
    void cleanSponge(float clean, class AmainPlayer_C* Player, class Aprop_sponge_C* sponge, FHitResult Hit);
    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveTick(float DeltaSeconds);
    void driveDetached();
    void ExecuteUbergraph_prop_shower(int32 EntryPoint);
}; // Size: 0x29A

#endif
