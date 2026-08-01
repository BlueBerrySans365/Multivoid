#ifndef UE4SS_SDK_prop_boof_HPP
#define UE4SS_SDK_prop_boof_HPP

class Aprop_boof_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 Amount;                                                                     // 0x0370 (size: 0x4)
    float life;                                                                       // 0x0374 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_boof(int32 EntryPoint);
}; // Size: 0x378

#endif
