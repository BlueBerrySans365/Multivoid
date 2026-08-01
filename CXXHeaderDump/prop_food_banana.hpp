#ifndef UE4SS_SDK_prop_food_banana_HPP
#define UE4SS_SDK_prop_food_banana_HPP

class Aprop_food_banana_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class Ucomp_radiation_C* comp_radiation;                                          // 0x03E0 (size: 0x8)

    void eaten(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_food_banana(int32 EntryPoint);
}; // Size: 0x3E8

#endif
