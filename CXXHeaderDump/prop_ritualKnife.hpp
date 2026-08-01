#ifndef UE4SS_SDK_prop_ritualKnife_HPP
#define UE4SS_SDK_prop_ritualKnife_HPP

class Aprop_ritualKnife_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UvelocityStuck_C* velocityStuck;                                            // 0x0370 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0378 (size: 0x8)
    class AmainPlayer_C* pl;                                                          // 0x0380 (size: 0x8)
    bool bloody;                                                                      // 0x0388 (size: 0x1)

    void upd();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void montageEvent(FName Name);
    void ReceiveBeginPlay();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_ritualKnife(int32 EntryPoint);
}; // Size: 0x389

#endif
