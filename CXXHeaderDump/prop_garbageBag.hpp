#ifndef UE4SS_SDK_prop_garbageBag_HPP
#define UE4SS_SDK_prop_garbageBag_HPP

class Aprop_garbageBag_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    TEnumAsByte<enum_chipPileType::Type> chipType;                                    // 0x0370 (size: 0x1)

    void getPriceMultiplier(float& priceMult);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void broken();
    void ExecuteUbergraph_prop_garbageBag(int32 EntryPoint);
}; // Size: 0x371

#endif
