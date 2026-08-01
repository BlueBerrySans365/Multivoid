#ifndef UE4SS_SDK_prop_burntFood_HPP
#define UE4SS_SDK_prop_burntFood_HPP

class Aprop_burntFood_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void getPriceMultiplier(float& priceMult);
    void Init();
    void ignite(float fuel);
    void ExecuteUbergraph_prop_burntFood(int32 EntryPoint);
}; // Size: 0x370

#endif
