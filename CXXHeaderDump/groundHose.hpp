#ifndef UE4SS_SDK_groundHose_HPP
#define UE4SS_SDK_groundHose_HPP

class AgroundHose_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UParticleSystemComponent* eff_waterHit;                                     // 0x0250 (size: 0x8)
    class UParticleSystemComponent* eff_water;                                        // 0x0258 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0260 (size: 0x8)
    class USphereComponent* collect;                                                  // 0x0268 (size: 0x8)
    class USphereComponent* pickup;                                                   // 0x0270 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0278 (size: 0x8)
    TArray<FVector> Points;                                                           // 0x0280 (size: 0x10)
    TArray<class USplineMeshComponent*> splineSegments;                               // 0x0290 (size: 0x10)
    class AmainPlayer_C* Player;                                                      // 0x02A0 (size: 0x8)
    FVector Len;                                                                      // 0x02A8 (size: 0xC)
    FVector lastloc;                                                                  // 0x02B4 (size: 0xC)
    float Path;                                                                       // 0x02C0 (size: 0x4)
    float Max;                                                                        // 0x02C4 (size: 0x4)
    FVector Connect;                                                                  // 0x02C8 (size: 0xC)
    class USplineMeshComponent* endpart;                                              // 0x02D8 (size: 0x8)
    bool doCollect;                                                                   // 0x02E0 (size: 0x1)
    bool ignoreFirstSpawn;                                                            // 0x02E1 (size: 0x1)
    class Afaucet_C* faucet;                                                          // 0x02E8 (size: 0x8)
    bool moving;                                                                      // 0x02F0 (size: 0x1)
    class Aprop_sprinkler_C* sprinkler;                                               // 0x02F8 (size: 0x8)
    bool connToFauc;                                                                  // 0x0300 (size: 0x1)
    FName faucet_key;                                                                 // 0x0304 (size: 0x8)
    FName sprinkler_key;                                                              // 0x030C (size: 0x8)

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
    void processKeys(bool& return);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void detachSprinkler();
    void updEffect();
    void resume(class Aprop_hose_C* hose);
    void Finish();
    void AddPoint(bool Manual, FVector Point, bool gen);
    void gen();
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
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_groundHose(int32 EntryPoint);
}; // Size: 0x314

#endif
