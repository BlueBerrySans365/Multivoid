#ifndef UE4SS_SDK_prop_cookingFood_rawSteak_HPP
#define UE4SS_SDK_prop_cookingFood_rawSteak_HPP

class Aprop_cookingFood_rawSteak_C : public Aprop_cookingFood_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)

    void slice(bool clean);
    void ExecuteUbergraph_prop_cookingFood_rawSteak(int32 EntryPoint);
}; // Size: 0x410

#endif
