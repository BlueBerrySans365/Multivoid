#ifndef UE4SS_SDK_prop_speen_HPP
#define UE4SS_SDK_prop_speen_HPP

class Aprop_speen_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_speen(int32 EntryPoint);
}; // Size: 0x370

#endif
