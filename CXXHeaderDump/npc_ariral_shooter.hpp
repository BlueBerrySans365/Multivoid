#ifndef UE4SS_SDK_npc_ariral_shooter_HPP
#define UE4SS_SDK_npc_ariral_shooter_HPP

class Anpc_ariral_shooter_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x04C8 (size: 0x8)
    class USkeletalMeshComponent* Gun;                                                // 0x04D0 (size: 0x8)
    class USphereComponent* shootRange;                                               // 0x04D8 (size: 0x8)
    class USphereComponent* senseRange;                                               // 0x04E0 (size: 0x8)
    class UArrowComponent* shootDir;                                                  // 0x04E8 (size: 0x8)
    class AActor* Target;                                                             // 0x04F0 (size: 0x8)
    bool moving;                                                                      // 0x04F8 (size: 0x1)
    class Aprop_funGun_C* fungun;                                                     // 0x0500 (size: 0x8)
    bool runAway;                                                                     // 0x0508 (size: 0x1)
    class AActor* lockTarget;                                                         // 0x0510 (size: 0x8)
    class Atreehouse_C* treehouse;                                                    // 0x0518 (size: 0x8)

    void ariral_shooter_AutoGenFunc(class UObject* ObjectA, class UObject* ObjectB, bool& Result);
    FVector findLookVector();
    void see(const class AActor* Item, class AActor*& detected);
    void OnFail_32391C0A458BC83640C1FFB19837E472(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_32391C0A458BC83640C1FFB19837E472(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_97521B184370B362B6F0F29B77285D28(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_97521B184370B362B6F0F29B77285D28(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveBeginPlay();
    void Sense();
    void CustomEvent();
    void ReceiveTick(float DeltaSeconds);
    void Dest(class AActor* DestroyedActor);
    void ReceiveDestroyed();
    void step(FVector Location);
    void ExecuteUbergraph_npc_ariral_shooter(int32 EntryPoint);
}; // Size: 0x520

#endif
