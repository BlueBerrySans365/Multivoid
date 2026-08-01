#ifndef UE4SS_SDK_prop_fertilizer_HPP
#define UE4SS_SDK_prop_fertilizer_HPP

class Aprop_fertilizer_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_fertilizer(int32 EntryPoint);
}; // Size: 0x370

#endif
