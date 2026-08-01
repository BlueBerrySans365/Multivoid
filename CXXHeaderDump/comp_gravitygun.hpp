#ifndef UE4SS_SDK_comp_gravitygun_HPP
#define UE4SS_SDK_comp_gravitygun_HPP

class Ucomp_gravitygun_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class AActor* obj;                                                                // 0x00B8 (size: 0x8)
    class UPrimitiveComponent* comp;                                                  // 0x00C0 (size: 0x8)
    float ad;                                                                         // 0x00C8 (size: 0x4)
    float LD;                                                                         // 0x00CC (size: 0x4)
    float ang;                                                                        // 0x00D0 (size: 0x4)
    float recharge;                                                                   // 0x00D4 (size: 0x4)
    class Aprop_gravgun_C* gravigun;                                                  // 0x00D8 (size: 0x8)
    FVector grabDir;                                                                  // 0x00E0 (size: 0xC)

    void trace(float B, FHitResult& OutHit);
    void hold(class AActor* obj, bool& NewParam);
    void ReceiveTick(float DeltaSeconds);
    void hookToDestroy();
    void dropped();
    void holdedDestroyed(class AActor* DestroyedActor);
    void ExecuteUbergraph_comp_gravitygun(int32 EntryPoint);
}; // Size: 0xEC

#endif
