#ifndef UE4SS_SDK_wallunit_tapes_HPP
#define UE4SS_SDK_wallunit_tapes_HPP

class Awallunit_tapes_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UBoxComponent* reelbox_use;                                                 // 0x0250 (size: 0x8)
    class UBoxComponent* reelbox_small;                                               // 0x0258 (size: 0x8)
    class UBoxComponent* reelbox_big;                                                 // 0x0260 (size: 0x8)
    class USkeletalMeshComponent* reelAnim;                                           // 0x0268 (size: 0x8)
    class UStaticMeshComponent* reelmesh_big;                                         // 0x0270 (size: 0x8)
    class UStaticMeshComponent* reelmesh_small;                                       // 0x0278 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0280 (size: 0x8)
    float reelBig;                                                                    // 0x0288 (size: 0x4)
    float reelSmall;                                                                  // 0x028C (size: 0x4)
    bool Active;                                                                      // 0x0290 (size: 0x1)
    bool lookat_smalltape;                                                            // 0x0291 (size: 0x1)
    bool lookat_usebox;                                                               // 0x0292 (size: 0x1)
    bool lookat_bigtape;                                                              // 0x0293 (size: 0x1)
    float Speed;                                                                      // 0x0294 (size: 0x4)
    class AActor* ac_a;                                                               // 0x0298 (size: 0x8)
    class AActor* ac_b;                                                               // 0x02A0 (size: 0x8)

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
    void setSmallReel(class UObject* Object);
    void setBigReel(class UObject* Object);
    void ignoreSave(bool& ignoreSave);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void upd();
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
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__wallunit_tapes_reelbox_big_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__wallunit_tapes_reelbox_small_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_wallunit_tapes(int32 EntryPoint);
}; // Size: 0x2A8

#endif
