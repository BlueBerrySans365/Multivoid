#ifndef UE4SS_SDK_erieDrag_HPP
#define UE4SS_SDK_erieDrag_HPP

class AerieDrag_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0228 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0230 (size: 0x8)
    bool followVelocity;                                                              // 0x0238 (size: 0x1)
    FVector lastloc;                                                                  // 0x023C (size: 0xC)
    float rep;                                                                        // 0x0248 (size: 0x4)
    TSubclassOf<class AeriePlushLive_C> plushLive;                                    // 0x0250 (size: 0x8)
    TSubclassOf<class Aprop_erieHold_C> plushHold;                                    // 0x0258 (size: 0x8)

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
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ignoreSave(bool& ignoreSave);
    void skipPreDelete(bool& Skip);
    void boing(FVector A);
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
    void setIgnoreSave(bool ignore);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void driveDetached();
    void sendName(FName Name);
    void kicked(bool kick);
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void BndEvt__erieDrag_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_erieDrag(int32 EntryPoint);
}; // Size: 0x260

#endif
