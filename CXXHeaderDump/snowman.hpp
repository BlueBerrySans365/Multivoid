#ifndef UE4SS_SDK_snowman_HPP
#define UE4SS_SDK_snowman_HPP

class Asnowman_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class Ucomp_physicsImpact_C* physicsImpact;                                       // 0x0250 (size: 0x8)
    class UStaticMeshComponent* acc_stickR;                                           // 0x0258 (size: 0x8)
    class UStaticMeshComponent* acc_stickL;                                           // 0x0260 (size: 0x8)
    class UStaticMeshComponent* acc_nose;                                             // 0x0268 (size: 0x8)
    class UStaticMeshComponent* acc_hat;                                              // 0x0270 (size: 0x8)
    class UStaticMeshComponent* acc_face;                                             // 0x0278 (size: 0x8)
    class UStaticMeshComponent* acc_buttons;                                          // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Body;                                                 // 0x0288 (size: 0x8)
    int32 stage;                                                                      // 0x0290 (size: 0x4)
    bool has_buttons;                                                                 // 0x0294 (size: 0x1)
    bool has_face;                                                                    // 0x0295 (size: 0x1)
    bool has_hat;                                                                     // 0x0296 (size: 0x1)
    bool has_nose;                                                                    // 0x0297 (size: 0x1)
    bool has_stickL;                                                                  // 0x0298 (size: 0x1)
    bool has_stickR;                                                                  // 0x0299 (size: 0x1)
    class AActor* obj;                                                                // 0x02A0 (size: 0x8)

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
    void break();
    void updDelete();
    void upd();
    void UserConstructionScript();
    void enteredTheWater();
    void exitTheWater();
    void impactSquishCPP(class UPrimitiveComponent* Component);
    void driveDetached();
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void kicked(bool kick);
    void sendName(FName Name);
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
    void BndEvt__snowman_body_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ReceiveBeginPlay();
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void impactDamageCPP(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void broken();
    void ExecuteUbergraph_snowman(int32 EntryPoint);
}; // Size: 0x2A8

#endif
