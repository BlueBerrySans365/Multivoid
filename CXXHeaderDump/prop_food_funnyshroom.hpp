#ifndef UE4SS_SDK_prop_food_funnyshroom_HPP
#define UE4SS_SDK_prop_food_funnyshroom_HPP

class Aprop_food_funnyshroom_C : public Aprop_food_mushroom_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)

    void eaten(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_food_funnyshroom(int32 EntryPoint);
}; // Size: 0x3F0

#endif
