#ifndef UE4SS_SDK_prop_wing_HPP
#define UE4SS_SDK_prop_wing_HPP

class Aprop_wing_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float lift;                                                                       // 0x0370 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_wing(int32 EntryPoint);
}; // Size: 0x374

#endif
