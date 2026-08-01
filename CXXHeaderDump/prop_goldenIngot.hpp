#ifndef UE4SS_SDK_prop_goldenIngot_HPP
#define UE4SS_SDK_prop_goldenIngot_HPP

class Aprop_goldenIngot_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float Time;                                                                       // 0x0370 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_goldenIngot(int32 EntryPoint);
}; // Size: 0x374

#endif
