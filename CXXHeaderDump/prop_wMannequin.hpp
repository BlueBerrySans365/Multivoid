#ifndef UE4SS_SDK_prop_wMannequin_HPP
#define UE4SS_SDK_prop_wMannequin_HPP

class Aprop_wMannequin_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x0370 (size: 0x8)
    class USphereComponent* pickupSphere;                                             // 0x0378 (size: 0x8)
    class UStaticMeshComponent* handitem;                                             // 0x0380 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0388 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0390 (size: 0x8)
    class AchildPawn_C* Pawn;                                                         // 0x0398 (size: 0x8)
    TArray<FVector> Path;                                                             // 0x03A0 (size: 0x10)
    int32 ind;                                                                        // 0x03B0 (size: 0x4)
    bool looking;                                                                     // 0x03B4 (size: 0x1)
    FVector pathPoint;                                                                // 0x03B8 (size: 0xC)
    FVector projPoint;                                                                // 0x03C4 (size: 0xC)
    bool angry;                                                                       // 0x03D0 (size: 0x1)
    float Speed;                                                                      // 0x03D4 (size: 0x4)
    class Ummann_rigg_Skeleton_AnimBlueprint_C* Anim;                                 // 0x03D8 (size: 0x8)
    FName propWeapon;                                                                 // 0x03E0 (size: 0x8)
    bool saw;                                                                         // 0x03E8 (size: 0x1)
    bool inFrustum;                                                                   // 0x03E9 (size: 0x1)
    FString holdWeaponData;                                                           // 0x03F0 (size: 0x10)

    void pickUpWeapon();
    void dropWeapon();
    void setWeapon(FName prop);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void OnFail_8AF90BF14EEA5E13962F0D85A5B30679(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_8AF90BF14EEA5E13962F0D85A5B30679(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void upd(class UNavigationPath* AffectedPath, TEnumAsByte<ENavPathEvent::Type> PathEvent);
    void ReceiveDestroyed();
    void fireDamage(float Damage);
    void timer_jump();
    void timer_unhook();
    void timer_pickupWeapon();
    void timer_saw();
    void timer_damage();
    void ExecuteUbergraph_prop_wMannequin(int32 EntryPoint);
}; // Size: 0x400

#endif
