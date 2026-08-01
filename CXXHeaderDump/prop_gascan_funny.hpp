#ifndef UE4SS_SDK_prop_gascan_funny_HPP
#define UE4SS_SDK_prop_gascan_funny_HPP

class Aprop_gascan_funny_C : public Aprop_gascan_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_gascan_funny(int32 EntryPoint);
}; // Size: 0x3A8

#endif
