#ifndef UE4SS_SDK_prop_pulsar_HPP
#define UE4SS_SDK_prop_pulsar_HPP

class Aprop_pulsar_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float Float;                                                                      // 0x0370 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_pulsar(int32 EntryPoint);
}; // Size: 0x374

#endif
