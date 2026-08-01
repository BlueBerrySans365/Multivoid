#ifndef UE4SS_SDK_growingPlant_HPP
#define UE4SS_SDK_growingPlant_HPP

class AgrowingPlant_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class Ucomp_physicsImpact_C* physicsImpact;                                       // 0x0250 (size: 0x8)
    class UStaticMeshComponent* support;                                              // 0x0258 (size: 0x8)
    class UStaticMeshComponent* coll;                                                 // 0x0260 (size: 0x8)
    class UStaticMeshComponent* dirt;                                                 // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0270 (size: 0x8)
    FName plant;                                                                      // 0x0278 (size: 0x8)
    float grow;                                                                       // 0x0280 (size: 0x4)
    float growRate;                                                                   // 0x0284 (size: 0x4)
    int32 Amount;                                                                     // 0x0288 (size: 0x4)
    class UStaticMesh* visualMesh;                                                    // 0x0290 (size: 0x8)
    class AActor* obj;                                                                // 0x0298 (size: 0x8)
    FName AttachParent;                                                               // 0x02A0 (size: 0x8)
    Fstruct_farmPlant Data;                                                           // 0x02A8 (size: 0x98)
    float fertilizer;                                                                 // 0x0340 (size: 0x4)
    float Water;                                                                      // 0x0344 (size: 0x4)
    bool discard;                                                                     // 0x0348 (size: 0x1)
    float fruitGrow;                                                                  // 0x034C (size: 0x4)
    bool hideDirt;                                                                    // 0x0350 (size: 0x1)
    bool grew;                                                                        // 0x0351 (size: 0x1)
    float dryness;                                                                    // 0x0354 (size: 0x4)
    float sunAmount;                                                                  // 0x0358 (size: 0x4)
    float DeltaSeconds;                                                               // 0x035C (size: 0x4)
    FgrowingPlant_CHarvested harvested;                                               // 0x0360 (size: 0x10)
    void harvested();

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
    void harvestSound();
    void grown();
    void checkSun();
    void turnDead();
    void addFruit(bool& return);
    void upd(bool skipDatatable);
    void processKeys(bool& return);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void updLoc();
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
    void ReceiveTick(float DeltaSeconds);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void makeDest();
    void Dest(class AActor* DestroyedActor);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void fireDamage(float Damage);
    void CustomEvent(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void fruit();
    void processGrown(bool skipGrowCheck);
    void ExecuteUbergraph_growingPlant(int32 EntryPoint);
    void harvested__DelegateSignature();
}; // Size: 0x370

#endif
