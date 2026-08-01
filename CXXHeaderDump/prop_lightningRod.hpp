#ifndef UE4SS_SDK_prop_lightningRod_HPP
#define UE4SS_SDK_prop_lightningRod_HPP

class Aprop_lightningRod_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_lightningRod(int32 EntryPoint);
}; // Size: 0x370

#endif
