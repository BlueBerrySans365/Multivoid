#ifndef UE4SS_SDK_prop_carrot_HPP
#define UE4SS_SDK_prop_carrot_HPP

class Aprop_carrot_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UvelocityStuck_C* velocityStuck;                                            // 0x0370 (size: 0x8)

    void slice(bool clean);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_carrot(int32 EntryPoint);
}; // Size: 0x378

#endif
