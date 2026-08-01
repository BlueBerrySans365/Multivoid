#ifndef UE4SS_SDK_prop_inator_HPP
#define UE4SS_SDK_prop_inator_HPP

class Aprop_inator_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void fired(FHitResult Hit);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_inator(int32 EntryPoint);
}; // Size: 0x370

#endif
