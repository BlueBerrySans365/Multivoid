#ifndef UE4SS_SDK_prop_wallclock_HPP
#define UE4SS_SDK_prop_wallclock_HPP

class Aprop_wallclock_C : public Aprop_wallAttachable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class USkeletalMeshComponent* arrows;                                             // 0x03E0 (size: 0x8)
    class UwallclockArrows_Skeleton_AnimBlueprint_C* Anim;                            // 0x03E8 (size: 0x8)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_wallclock(int32 EntryPoint);
}; // Size: 0x3F0

#endif
