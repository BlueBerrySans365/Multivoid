#ifndef UE4SS_SDK_prop_freezerBurntFood_HPP
#define UE4SS_SDK_prop_freezerBurntFood_HPP

class Aprop_freezerBurntFood_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void getPriceMultiplier(float& priceMult);
    void Init();
    void ignite(float fuel);
    void ExecuteUbergraph_prop_freezerBurntFood(int32 EntryPoint);
}; // Size: 0x370

#endif
