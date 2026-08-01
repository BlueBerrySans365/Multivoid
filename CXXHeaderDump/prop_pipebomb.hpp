#ifndef UE4SS_SDK_prop_pipebomb_HPP
#define UE4SS_SDK_prop_pipebomb_HPP

class Aprop_pipebomb_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    class UParticleSystemComponent* eff_light;                                        // 0x0378 (size: 0x8)
    float Time;                                                                       // 0x0380 (size: 0x4)
    bool Active;                                                                      // 0x0384 (size: 0x1)
    bool Timer;                                                                       // 0x0385 (size: 0x1)

    void Activate();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveTick(float DeltaSeconds);
    void timerBlip();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void setTimer();
    void ExecuteUbergraph_prop_pipebomb(int32 EntryPoint);
}; // Size: 0x386

#endif
