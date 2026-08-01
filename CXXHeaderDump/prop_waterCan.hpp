#ifndef UE4SS_SDK_prop_waterCan_HPP
#define UE4SS_SDK_prop_waterCan_HPP

class Aprop_waterCan_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 waterUses;                                                                  // 0x0370 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void refill();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_waterCan(int32 EntryPoint);
}; // Size: 0x374

#endif
