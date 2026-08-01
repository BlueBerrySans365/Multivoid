#ifndef UE4SS_SDK_prop_charcoal_HPP
#define UE4SS_SDK_prop_charcoal_HPP

class Aprop_charcoal_C : public Aprop_fish_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_charcoal(int32 EntryPoint);
}; // Size: 0x438

#endif
