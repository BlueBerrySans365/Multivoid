#ifndef UE4SS_SDK_birch_HPP
#define UE4SS_SDK_birch_HPP

class Abirch_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x0228 (size: 0x8)
    class Ucomp_paranormal_C* pnormal;                                                // 0x0230 (size: 0x8)
    class USphereComponent* eventRadius;                                              // 0x0238 (size: 0x8)
    class UBillboardComponent* stepOrigin;                                            // 0x0240 (size: 0x8)
    class UStaticMeshComponent* renderStep;                                           // 0x0248 (size: 0x8)
    class USphereComponent* activeRadius;                                             // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0258 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0260 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)
    float lookAtTime;                                                                 // 0x0278 (size: 0x4)
    float lookAwayTime;                                                               // 0x027C (size: 0x4)
    float D;                                                                          // 0x0280 (size: 0x4)
    bool angry;                                                                       // 0x0284 (size: 0x1)
    bool screamed;                                                                    // 0x0285 (size: 0x1)
    bool Active;                                                                      // 0x0286 (size: 0x1)
    bool appeared;                                                                    // 0x0287 (size: 0x1)
    bool Event;                                                                       // 0x0288 (size: 0x1)
    bool aboutToHit;                                                                  // 0x0289 (size: 0x1)
    bool rendered;                                                                    // 0x028A (size: 0x1)
    FVector lastHit;                                                                  // 0x028C (size: 0xC)
    int32 hits;                                                                       // 0x0298 (size: 0x4)
    bool bleed;                                                                       // 0x029C (size: 0x1)
    FString A;                                                                        // 0x02A0 (size: 0x10)
    class UTexture2D* final;                                                          // 0x02B0 (size: 0x8)
    class UMaterialInstanceDynamic* Basic;                                            // 0x02B8 (size: 0x8)
    FString NewVar_0;                                                                 // 0x02C0 (size: 0x10)
    bool NewVar_1;                                                                    // 0x02D0 (size: 0x1)

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
    void makeAngry();
    void checkActive();
    void UserConstructionScript();
    void driveDetached();
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void kicked(bool kick);
    void sendName(FName Name);
    void broken();
    void broken_fire();
    void thrown(class AmainPlayer_C* Player);
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
    void BndEvt__birch_activeRadius_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__birch_activeRadius_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void checkStep();
    void step();
    void BndEvt__birch_eventRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__birch_eventRadius_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveDestroyed();
    void Hit();
    void doHit(float Time);
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void sav();
    void ExecuteUbergraph_birch(int32 EntryPoint);
}; // Size: 0x2D1

#endif
