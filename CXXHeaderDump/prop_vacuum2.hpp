#ifndef UE4SS_SDK_prop_vacuum2_HPP
#define UE4SS_SDK_prop_vacuum2_HPP

class Aprop_vacuum2_C : public Aprop_container_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UAudioComponent* audio_vacuum;                                              // 0x0438 (size: 0x8)
    class UParticleSystemComponent* eff_vacuumSuckin;                                 // 0x0440 (size: 0x8)
    class USphereComponent* suckin_inv;                                               // 0x0448 (size: 0x8)
    class USphereComponent* suckin_force;                                             // 0x0450 (size: 0x8)
    float powerTL_a_AB0F1BC74EA50304659D8DB171DE9793;                                 // 0x0458 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> powerTL__Direction_AB0F1BC74EA50304659D8DB171DE9793; // 0x045C (size: 0x1)
    class UTimelineComponent* powerTL;                                                // 0x0460 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x0468 (size: 0x8)
    bool noSpace;                                                                     // 0x0470 (size: 0x1)
    FTimerHandle gatherTimerHandle;                                                   // 0x0478 (size: 0x8)
    float power;                                                                      // 0x0480 (size: 0x4)

    void gather();
    void suck(FVector NewLocation);
    void powerTL__FinishedFunc();
    void powerTL__UpdateFunc();
    void OnNotifyEnd_008DE95F467D0E3293D285BD7910D76D(FName NotifyName);
    void OnNotifyBegin_008DE95F467D0E3293D285BD7910D76D(FName NotifyName);
    void OnInterrupted_008DE95F467D0E3293D285BD7910D76D(FName NotifyName);
    void OnBlendOut_008DE95F467D0E3293D285BD7910D76D(FName NotifyName);
    void OnCompleted_008DE95F467D0E3293D285BD7910D76D(FName NotifyName);
    void OnNotifyEnd_BCBD56D84A10B4254E4E4080C0ECD44B(FName NotifyName);
    void OnNotifyBegin_BCBD56D84A10B4254E4E4080C0ECD44B(FName NotifyName);
    void OnInterrupted_BCBD56D84A10B4254E4E4080C0ECD44B(FName NotifyName);
    void OnBlendOut_BCBD56D84A10B4254E4E4080C0ECD44B(FName NotifyName);
    void OnCompleted_BCBD56D84A10B4254E4E4080C0ECD44B(FName NotifyName);
    void ReceiveTick(float DeltaSeconds);
    void gatherTimer();
    void initGather();
    void stopGather();
    void windup(bool Condition);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_vacuum2(int32 EntryPoint);
}; // Size: 0x484

#endif
