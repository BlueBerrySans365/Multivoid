#ifndef UE4SS_SDK_effect_poo_HPP
#define UE4SS_SDK_effect_poo_HPP

class Aeffect_poo_C : public Aeffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0270 (size: 0x8)

    void removeRanout(bool destroy);
    void poo();
    void BndEvt__effect_poo_Audio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
    void ExecuteUbergraph_effect_poo(int32 EntryPoint);
}; // Size: 0x278

#endif
