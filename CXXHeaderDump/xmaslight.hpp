#ifndef UE4SS_SDK_xmaslight_HPP
#define UE4SS_SDK_xmaslight_HPP

class Axmaslight_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UInstancedStaticMeshComponent* lights_r;                                    // 0x0250 (size: 0x8)
    TArray<FVector> Positions;                                                        // 0x0258 (size: 0x10)
    TArray<class Aprop_C*> Actors;                                                    // 0x0268 (size: 0x10)
    TArray<FString> Keys;                                                             // 0x0278 (size: 0x10)
    TArray<class USphereComponent*> Spheres;                                          // 0x0288 (size: 0x10)
    TArray<class UCableComponent*> cables;                                            // 0x0298 (size: 0x10)
    FRandomStream Seed;                                                               // 0x02A8 (size: 0x8)
    int32 I;                                                                          // 0x02B0 (size: 0x4)
    bool fin;                                                                         // 0x02B4 (size: 0x1)
    TArray<FTransform> ts;                                                            // 0x02B8 (size: 0x10)
    class Aprop_xmaslights_C* Object;                                                 // 0x02C8 (size: 0x8)
    TArray<FVector> lastLocs;                                                         // 0x02D0 (size: 0x10)
    TArray<FVector> locs;                                                             // 0x02E0 (size: 0x10)
    TArray<class UPointLightComponent*> lights;                                       // 0x02F0 (size: 0x10)
    int32 lightOffset;                                                                // 0x0300 (size: 0x4)
    bool NoLight;                                                                     // 0x0304 (size: 0x1)

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
    void ignoreSave(bool& ignoreSave);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void setLightVis(class UPointLightComponent* self2, TArray<FVector>& InputPin);
    void Finish();
    void genInstances();
    void addLight(FHitResult Hit, FVector Loc);
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
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void Dest(class AActor* DestroyedActor);
    void offsetLight();
    void ExecuteUbergraph_xmaslight(int32 EntryPoint);
}; // Size: 0x305

#endif
