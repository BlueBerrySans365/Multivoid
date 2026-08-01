#ifndef UE4SS_SDK_prop_shake_HPP
#define UE4SS_SDK_prop_shake_HPP

class Aprop_shake_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)

    void BndEvt__prop_shake_Audio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_shake(int32 EntryPoint);
}; // Size: 0x378

#endif
