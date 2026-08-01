#ifndef UE4SS_SDK_prop_slitherUnderground_HPP
#define UE4SS_SDK_prop_slitherUnderground_HPP

class Aprop_slitherUnderground_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    FIntPoint Amount;                                                                 // 0x0370 (size: 0x8)
    float slitherLifespan;                                                            // 0x0378 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_slitherUnderground(int32 EntryPoint);
}; // Size: 0x37C

#endif
