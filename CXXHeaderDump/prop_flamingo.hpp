#ifndef UE4SS_SDK_prop_flamingo_HPP
#define UE4SS_SDK_prop_flamingo_HPP

class Aprop_flamingo_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UvelocityStuck_C* velocityStuck;                                            // 0x0370 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_flamingo(int32 EntryPoint);
}; // Size: 0x378

#endif
