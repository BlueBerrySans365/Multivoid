#ifndef UE4SS_SDK_geomOctaLazer_HPP
#define UE4SS_SDK_geomOctaLazer_HPP

class AgeomOctaLazer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* octBeamShoot;                                              // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0230 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0238 (size: 0x8)
    float A;                                                                          // 0x0240 (size: 0x4)

    void ReceiveBeginPlay();
    void BndEvt__geomOctaLazer_octBeamShoot_K2Node_ComponentBoundEvent_1_OnAudioFinished__DelegateSignature();
    void ExecuteUbergraph_geomOctaLazer(int32 EntryPoint);
}; // Size: 0x244

#endif
