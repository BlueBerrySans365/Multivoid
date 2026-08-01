#ifndef UE4SS_SDK_prop_dirtyjar_HPP
#define UE4SS_SDK_prop_dirtyjar_HPP

class Aprop_dirtyjar_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void enteredTheWater();
    void enterWaterOrigin(class AwaterVolume_C* Water);
    void ExecuteUbergraph_prop_dirtyjar(int32 EntryPoint);
}; // Size: 0x370

#endif
