#ifndef UE4SS_SDK_prop_duende_HPP
#define UE4SS_SDK_prop_duende_HPP

class Aprop_duende_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UvelocityStuck_C* velocityStuck;                                            // 0x0370 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_duende(int32 EntryPoint);
}; // Size: 0x378

#endif
