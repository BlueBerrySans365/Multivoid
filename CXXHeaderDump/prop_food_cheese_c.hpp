#ifndef UE4SS_SDK_prop_food_cheese_c_HPP
#define UE4SS_SDK_prop_food_cheese_c_HPP

class Aprop_food_cheese_c_C : public Aprop_food_cheese_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)

    void sliceCheese();
    void slice(bool clean);
    void ExecuteUbergraph_prop_food_cheese_c(int32 EntryPoint);
}; // Size: 0x3E0

#endif
