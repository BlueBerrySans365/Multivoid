#ifndef UE4SS_SDK_prop_food_potatoCooked_HPP
#define UE4SS_SDK_prop_food_potatoCooked_HPP

class Aprop_food_potatoCooked_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)

    void slice(bool clean);
    void ExecuteUbergraph_prop_food_potatoCooked(int32 EntryPoint);
}; // Size: 0x3E0

#endif
