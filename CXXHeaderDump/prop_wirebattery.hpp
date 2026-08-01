#ifndef UE4SS_SDK_prop_wirebattery_HPP
#define UE4SS_SDK_prop_wirebattery_HPP

class Aprop_wirebattery_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    TArray<class Awire_C*> connected;                                                 // 0x0370 (size: 0x10)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_wirebattery(int32 EntryPoint);
}; // Size: 0x380

#endif
