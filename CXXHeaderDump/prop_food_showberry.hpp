#ifndef UE4SS_SDK_prop_food_showberry_HPP
#define UE4SS_SDK_prop_food_showberry_HPP

class Aprop_food_showberry_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)

    void eaten(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_food_showberry(int32 EntryPoint);
}; // Size: 0x3E0

#endif
