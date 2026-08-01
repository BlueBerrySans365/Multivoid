#ifndef UE4SS_SDK_prop_garbBagRoll_HPP
#define UE4SS_SDK_prop_garbBagRoll_HPP

class Aprop_garbBagRoll_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 bags;                                                                       // 0x0370 (size: 0x4)

    void getPriceMultiplier(float& priceMult);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_garbBagRoll(int32 EntryPoint);
}; // Size: 0x374

#endif
