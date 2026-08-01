#ifndef UE4SS_SDK_prop_gravgun_HPP
#define UE4SS_SDK_prop_gravgun_HPP

class Aprop_gravgun_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Ucomp_radarPoint_C* radarPointComponent;                                    // 0x0370 (size: 0x8)
    class UParticleSystemComponent* eff_gravigunN2;                                   // 0x0378 (size: 0x8)
    class UAudioComponent* gravigun_object_hold_loop;                                 // 0x0380 (size: 0x8)
    class UAudioComponent* looop;                                                     // 0x0388 (size: 0x8)
    class UParticleSystemComponent* eff_gravigunN1;                                   // 0x0390 (size: 0x8)
    class UPointLightComponent* l3;                                                   // 0x0398 (size: 0x8)
    class UParticleSystemComponent* eff_gravigunN;                                    // 0x03A0 (size: 0x8)
    class UAudioComponent* object_throw;                                              // 0x03A8 (size: 0x8)
    class UAudioComponent* object_release;                                            // 0x03B0 (size: 0x8)
    class UAudioComponent* object_hold_loop;                                          // 0x03B8 (size: 0x8)
    class UAudioComponent* object_grab;                                               // 0x03C0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x03C8 (size: 0x8)
    class UPointLightComponent* l2;                                                   // 0x03D0 (size: 0x8)
    class UPointLightComponent* l1;                                                   // 0x03D8 (size: 0x8)
    float a_NewTrack_0_33E1F26546AD9BE193FC34856B948901;                              // 0x03E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_33E1F26546AD9BE193FC34856B948901; // 0x03E4 (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x03E8 (size: 0x8)
    class AActor* obj;                                                                // 0x03F0 (size: 0x8)
    FVector Origin;                                                                   // 0x03F8 (size: 0xC)
    TArray<class UParticleSystemComponent*> beeams;                                   // 0x0408 (size: 0x10)
    bool IsActive;                                                                    // 0x0418 (size: 0x1)
    int32 charges;                                                                    // 0x041C (size: 0x4)

    void beams();
    void set(class AActor* obj);
    void a__FinishedFunc();
    void a__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void attract(bool Condition);
    void microwaveElec();
    void ExecuteUbergraph_prop_gravgun(int32 EntryPoint);
}; // Size: 0x420

#endif
