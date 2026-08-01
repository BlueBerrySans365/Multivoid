#ifndef UE4SS_SDK_prop_auuwoaa_HPP
#define UE4SS_SDK_prop_auuwoaa_HPP

class Aprop_auuwoaa_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0378 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_auuwoaa(int32 EntryPoint);
}; // Size: 0x380

#endif
