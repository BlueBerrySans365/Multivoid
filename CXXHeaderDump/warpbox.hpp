#ifndef UE4SS_SDK_warpbox_HPP
#define UE4SS_SDK_warpbox_HPP

class Awarpbox_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UBoxComponent* coll_block;                                                  // 0x0250 (size: 0x8)
    class UBoxComponent* coll1;                                                       // 0x0258 (size: 0x8)
    class UAudioComponent* warpbox_open;                                              // 0x0260 (size: 0x8)
    class UAudioComponent* warpbox_impact;                                            // 0x0268 (size: 0x8)
    class UAudioComponent* warpbox_tile;                                              // 0x0270 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0278 (size: 0x8)
    class UBoxComponent* tilebox;                                                     // 0x0280 (size: 0x8)
    class UStaticMeshComponent* 432_tiles_tile_009;                                   // 0x0288 (size: 0x8)
    class UStaticMeshComponent* 432_tiles_tile_008;                                   // 0x0290 (size: 0x8)
    class UStaticMeshComponent* 432_tiles_tile_007;                                   // 0x0298 (size: 0x8)
    class UStaticMeshComponent* 432_tiles_tile_006;                                   // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* 432_tiles_tile_005;                                   // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* 432_tiles_tile_004;                                   // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* 432_tiles_tile_003;                                   // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* 432_tiles_tile_002;                                   // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* 432_tiles_tile_001;                                   // 0x02C8 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02D0 (size: 0x8)
    class UChildActorComponent* portal;                                               // 0x02D8 (size: 0x8)
    class UBoxComponent* coll;                                                        // 0x02E0 (size: 0x8)
    class USkeletalMeshComponent* 432low;                                             // 0x02E8 (size: 0x8)
    class Aportal_C* portal_obj;                                                      // 0x02F0 (size: 0x8)
    class Awarpbox_C* Out;                                                            // 0x02F8 (size: 0x8)
    TArray<bool> tiles;                                                               // 0x0300 (size: 0x10)
    TArray<class UStaticMeshComponent*> tiles_mesh;                                   // 0x0310 (size: 0x10)
    bool opened;                                                                      // 0x0320 (size: 0x1)
    bool Anim;                                                                        // 0x0321 (size: 0x1)
    bool Render;                                                                      // 0x0322 (size: 0x1)
    bool renderPortal;                                                                // 0x0323 (size: 0x1)
    FString Name;                                                                     // 0x0328 (size: 0x10)
    FString nameTo;                                                                   // 0x0338 (size: 0x10)
    class Aportal_phys_C* physPortal;                                                 // 0x0348 (size: 0x8)

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
    void canBePutInContainer(bool& return);
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void form();
    void getData(Fstruct_save& Data);
    void PlaySound(class USoundBase* NewSound);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void getPortal(class Aportal_C*& portal_obj);
    void UserConstructionScript();
    void OnNotifyEnd_7D39BA3C4D76CB4B48378FA14DE88C03(FName NotifyName);
    void OnNotifyBegin_7D39BA3C4D76CB4B48378FA14DE88C03(FName NotifyName);
    void OnInterrupted_7D39BA3C4D76CB4B48378FA14DE88C03(FName NotifyName);
    void OnBlendOut_7D39BA3C4D76CB4B48378FA14DE88C03(FName NotifyName);
    void OnCompleted_7D39BA3C4D76CB4B48378FA14DE88C03(FName NotifyName);
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
    void ReceiveBeginPlay();
    void Open(bool opened);
    void BndEvt__tilebox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void intComs_gamemodeBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_warpbox(int32 EntryPoint);
}; // Size: 0x350

#endif
