#ifndef UE4SS_SDK_prop_food_spng_HPP
#define UE4SS_SDK_prop_food_spng_HPP

class Aprop_food_spng_C : public Aprop_food_mushroom_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)

    void slice(bool clean);
    void eaten(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_food_spng(int32 EntryPoint);
}; // Size: 0x3F0

#endif
