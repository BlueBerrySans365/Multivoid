#ifndef UE4SS_SDK_telescopeMars_HPP
#define UE4SS_SDK_telescopeMars_HPP

class AtelescopeMars_C : public AtelescopeObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class USkeletalMeshComponent* marsStruct_test1;                                   // 0x0268 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_lights_1;                                  // 0x0270 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_lights_2;                                  // 0x0278 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_deco;                                      // 0x0280 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_body;                                      // 0x0288 (size: 0x8)
    float buildStatus_1;                                                              // 0x0290 (size: 0x4)
    float buildStatus_2;                                                              // 0x0294 (size: 0x4)
    float buildStatus_3;                                                              // 0x0298 (size: 0x4)
    float A;                                                                          // 0x029C (size: 0x4)
    float B;                                                                          // 0x02A0 (size: 0x4)
    class UmarsStruct_build_Skeleton_AnimBlueprint_C* Anim;                           // 0x02A8 (size: 0x8)
    float rot_0;                                                                      // 0x02B0 (size: 0x4)
    bool looking;                                                                     // 0x02B4 (size: 0x1)
    bool Fast;                                                                        // 0x02B5 (size: 0x1)
    bool Reset;                                                                       // 0x02B6 (size: 0x1)
    class Atelescope_C* telescope;                                                    // 0x02B8 (size: 0x8)

    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void asContainer(class Aprop_container_C*& container);
    void asFarmPlant(class AgrowingPlant_C*& plant);
    void asCookedFood(class Aprop_cookingFood_C*& cookedFood);
    void asFood(class Aprop_food_C*& food);
    void landedOn(class AmainPlayer_C* Player, bool& ignoreFallDamage);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void canBePutInContainer(bool& return);
    void createDynmats();
    void updMats();
    void lookAtCam(bool Play);
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerHoldPre(class AmainPlayer_C* Player);
    void unequpped(class AmainPlayer_C* Player);
    void playerHitWith(FHitResult Hit, class AmainPlayer_C* Player);
    void launchBuild(bool Fast);
    void playerHoldPost(class AmainPlayer_C* Player);
    void playerUnequip(class AmainPlayer_C* Player);
    void driveDetached();
    void updateStrAgl();
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void thrown(class AmainPlayer_C* Player);
    void beginHoldingObject(class AmainPlayer_C* Player, FHitResult Hit);
    void playerStepped(FHitResult Hit);
    void ReceiveTick(float DeltaSeconds);
    void sendName(FName Name);
    void ReceiveBeginPlay();
    void kicked(bool kick);
    void broken_fire();
    void broken();
    void ExecuteUbergraph_telescopeMars(int32 EntryPoint);
}; // Size: 0x2C0

#endif
