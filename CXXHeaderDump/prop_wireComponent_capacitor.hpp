#ifndef UE4SS_SDK_prop_wireComponent_capacitor_HPP
#define UE4SS_SDK_prop_wireComponent_capacitor_HPP

class Aprop_wireComponent_capacitor_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0378 (size: 0x8)
    float Delay;                                                                      // 0x0380 (size: 0x4)
    class Awire_C* passTo;                                                            // 0x0388 (size: 0x8)

    void wirePass(class Awire_C* wire);
    void ExecuteUbergraph_prop_wireComponent_capacitor(int32 EntryPoint);
}; // Size: 0x390

#endif
