#ifndef UE4SS_SDK_prop_wireSpark_HPP
#define UE4SS_SDK_prop_wireSpark_HPP

class Aprop_wireSpark_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    bool rmb;                                                                         // 0x0370 (size: 0x1)
    class AActor* rmbAc;                                                              // 0x0378 (size: 0x8)

    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_wireSpark(int32 EntryPoint);
}; // Size: 0x380

#endif
