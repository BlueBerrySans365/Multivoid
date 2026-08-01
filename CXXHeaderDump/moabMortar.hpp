#ifndef UE4SS_SDK_moabMortar_HPP
#define UE4SS_SDK_moabMortar_HPP

class AmoabMortar_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    class Apanel_radar_C* radar;                                                      // 0x0378 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__moabMortar_audio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
    void ExecuteUbergraph_moabMortar(int32 EntryPoint);
}; // Size: 0x380

#endif
