#ifndef UE4SS_SDK_prop_cf_egg_HPP
#define UE4SS_SDK_prop_cf_egg_HPP

class Aprop_cf_egg_C : public Aprop_cookingFood_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    float pressure;                                                                   // 0x0410 (size: 0x4)

    void cookItem();
    void microwave(class Aprop_microwave_C* microwave);
    void ExecuteUbergraph_prop_cf_egg(int32 EntryPoint);
}; // Size: 0x414

#endif
