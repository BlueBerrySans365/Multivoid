#ifndef UE4SS_SDK_prop_rope_HPP
#define UE4SS_SDK_prop_rope_HPP

class Aprop_rope_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class AActor* connect_A;                                                          // 0x0370 (size: 0x8)
    class AActor* connect_B;                                                          // 0x0378 (size: 0x8)
    FHitResult hit_A;                                                                 // 0x0380 (size: 0x88)
    class Arope_C* activeRope;                                                        // 0x0408 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_rope(int32 EntryPoint);
}; // Size: 0x410

#endif
