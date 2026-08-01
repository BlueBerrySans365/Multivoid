#ifndef UE4SS_SDK_prop_spatula_HPP
#define UE4SS_SDK_prop_spatula_HPP

class Aprop_spatula_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_spatula(int32 EntryPoint);
}; // Size: 0x370

#endif
