#ifndef UE4SS_SDK_prop_lithium_HPP
#define UE4SS_SDK_prop_lithium_HPP

class Aprop_lithium_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void enteredTheWater();
    void enterWater(class AwaterVolume_C* Water);
    void ExecuteUbergraph_prop_lithium(int32 EntryPoint);
}; // Size: 0x370

#endif
