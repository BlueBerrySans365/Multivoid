#ifndef UE4SS_SDK_prop_gasBottle_HPP
#define UE4SS_SDK_prop_gasBottle_HPP

class Aprop_gasBottle_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBillboardComponent* Center;                                                // 0x0370 (size: 0x8)

    void broken();
    void broken_fire();
    void ExecuteUbergraph_prop_gasBottle(int32 EntryPoint);
}; // Size: 0x378

#endif
