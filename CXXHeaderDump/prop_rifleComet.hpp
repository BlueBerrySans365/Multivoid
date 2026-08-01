#ifndef UE4SS_SDK_prop_rifleComet_HPP
#define UE4SS_SDK_prop_rifleComet_HPP

class Aprop_rifleComet_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_rifleComet(int32 EntryPoint);
}; // Size: 0x370

#endif
