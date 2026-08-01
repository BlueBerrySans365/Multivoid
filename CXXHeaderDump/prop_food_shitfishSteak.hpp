#ifndef UE4SS_SDK_prop_food_shitfishSteak_HPP
#define UE4SS_SDK_prop_food_shitfishSteak_HPP

class Aprop_food_shitfishSteak_C : public Aprop_food_poison_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)

    void bitten(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_food_shitfishSteak(int32 EntryPoint);
}; // Size: 0x3F0

#endif
