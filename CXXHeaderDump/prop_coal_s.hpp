#ifndef UE4SS_SDK_prop_coal_s_HPP
#define UE4SS_SDK_prop_coal_s_HPP

class Aprop_coal_s_C : public Aprop_coal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)

    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_coal_s(int32 EntryPoint);
}; // Size: 0x378

#endif
