#ifndef UE4SS_SDK_prop_gclock_HPP
#define UE4SS_SDK_prop_gclock_HPP

class Aprop_gclock_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBoxComponent* timelook;                                                    // 0x0370 (size: 0x8)
    class UAudioComponent* audio_chime;                                               // 0x0378 (size: 0x8)
    class UAudioComponent* audio_tick;                                                // 0x0380 (size: 0x8)
    class USkeletalMeshComponent* arrows;                                             // 0x0388 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0390 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0398 (size: 0x8)
    float Timer;                                                                      // 0x03A0 (size: 0x4)
    class UwallclockArrows_Skeleton_AnimBlueprint_C* Anim;                            // 0x03A8 (size: 0x8)
    bool check;                                                                       // 0x03B0 (size: 0x1)
    int32 hourChange;                                                                 // 0x03B4 (size: 0x4)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void timerClock();
    void ExecuteUbergraph_prop_gclock(int32 EntryPoint);
}; // Size: 0x3B8

#endif
