#ifndef UE4SS_SDK_prop_fishSteak_HPP
#define UE4SS_SDK_prop_fishSteak_HPP

class Aprop_fishSteak_C : public Aprop_cookingFood_C
{
    int32 Type;                                                                       // 0x0408 (size: 0x4)

    void cookItem();
    void Init();
}; // Size: 0x40C

#endif
