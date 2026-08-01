#ifndef UE4SS_SDK_kitchen_HPP
#define UE4SS_SDK_kitchen_HPP

class Akitchen_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UChildActorComponent* counterdoor2;                                         // 0x0250 (size: 0x8)
    class UChildActorComponent* counterdoor0;                                         // 0x0258 (size: 0x8)
    class UChildActorComponent* counterdoor1;                                         // 0x0260 (size: 0x8)
    class UChildActorComponent* shelvesdoor0;                                         // 0x0268 (size: 0x8)
    class UChildActorComponent* shelvesdoor2;                                         // 0x0270 (size: 0x8)
    class UChildActorComponent* shelvesdoor1;                                         // 0x0278 (size: 0x8)
    class UParticleSystemComponent* eff_ovenLight;                                    // 0x0280 (size: 0x8)
    class UBoxComponent* cookbox;                                                     // 0x0288 (size: 0x8)
    class UBoxComponent* switch_oven;                                                 // 0x0290 (size: 0x8)
    class UBoxComponent* switch_cold;                                                 // 0x0298 (size: 0x8)
    class UBoxComponent* switch_hot;                                                  // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* kitchenCounter;                                       // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* kitchenFlooring;                                      // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* kitchenShelves;                                       // 0x02B8 (size: 0x8)
    TArray<class Aprop_food_C*> foods;                                                // 0x02C0 (size: 0x10)
    float power;                                                                      // 0x02D0 (size: 0x4)
    class UUI_oven_C* Widget;                                                         // 0x02D8 (size: 0x8)
    bool fixed;                                                                       // 0x02E0 (size: 0x1)
    bool Active;                                                                      // 0x02E1 (size: 0x1)
    bool powered;                                                                     // 0x02E2 (size: 0x1)

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
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void gatherDataFromKey(bool& gather, bool& loadTransform);
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
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__kitchen_cookbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__kitchen_cookbox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void fix();
    void powerChanged(bool active_calc, bool active_downl, bool active_coords, bool active_play, bool active_light);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_kitchen(int32 EntryPoint);
}; // Size: 0x2E3

#endif
