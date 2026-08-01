#ifndef UE4SS_SDK_prop_waterShooter_arir_HPP
#define UE4SS_SDK_prop_waterShooter_arir_HPP

class Aprop_waterShooter_arir_C : public Aprop_waterShooter_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class UParticleSystemComponent* eff_succ2;                                        // 0x03A8 (size: 0x8)
    class UParticleSystemComponent* eff_succ1;                                        // 0x03B0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x03B8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x03C0 (size: 0x8)
    float sndtimeline_a_A64D305B4C44710E46910489FD09ED3F;                             // 0x03C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> sndtimeline__Direction_A64D305B4C44710E46910489FD09ED3F; // 0x03CC (size: 0x1)
    class UTimelineComponent* sndtimeline;                                            // 0x03D0 (size: 0x8)
    bool snd;                                                                         // 0x03D8 (size: 0x1)
    bool playerHolding;                                                               // 0x03D9 (size: 0x1)

    void sndtimeline__FinishedFunc();
    void sndtimeline__UpdateFunc();
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveTick(float DeltaSeconds);
    void Sound();
    void playerHoldPre(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_waterShooter_arir(int32 EntryPoint);
}; // Size: 0x3DA

#endif
