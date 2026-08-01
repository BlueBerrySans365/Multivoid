#ifndef UE4SS_SDK_prop_food_poison_HPP
#define UE4SS_SDK_prop_food_poison_HPP

class Aprop_food_poison_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    float poisonStrength;                                                             // 0x03E0 (size: 0x4)
    float poisonDelay;                                                                // 0x03E4 (size: 0x4)

    void bitten(class AmainPlayer_C* Player);
    void eaten(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_food_poison(int32 EntryPoint);
}; // Size: 0x3E8

#endif
