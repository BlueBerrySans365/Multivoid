#ifndef UE4SS_SDK_prop_welder_HPP
#define UE4SS_SDK_prop_welder_HPP

class Aprop_welder_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Aweld_C* activeWeld;                                                        // 0x0370 (size: 0x8)
    class AActor* Weld A;                                                             // 0x0378 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_welder(int32 EntryPoint);
}; // Size: 0x380

#endif
