#ifndef UE4SS_SDK_prop_grenade_a_HPP
#define UE4SS_SDK_prop_grenade_a_HPP

class Aprop_grenade_a_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float Timer;                                                                      // 0x0370 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_grenade_a(int32 EntryPoint);
}; // Size: 0x374

#endif
