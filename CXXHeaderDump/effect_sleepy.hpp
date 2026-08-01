#ifndef UE4SS_SDK_effect_sleepy_HPP
#define UE4SS_SDK_effect_sleepy_HPP

class Aeffect_sleepy_C : public Aeffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_effect_sleepy(int32 EntryPoint);
}; // Size: 0x270

#endif
