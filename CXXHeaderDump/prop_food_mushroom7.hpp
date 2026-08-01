#ifndef UE4SS_SDK_prop_food_mushroom7_HPP
#define UE4SS_SDK_prop_food_mushroom7_HPP

class Aprop_food_mushroom7_C : public Aprop_food_mushroom_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)

    void ReceiveBeginPlay();
    void Transform();
    void ExecuteUbergraph_prop_food_mushroom7(int32 EntryPoint);
}; // Size: 0x3F0

#endif
