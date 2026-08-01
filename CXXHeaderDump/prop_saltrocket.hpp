#ifndef UE4SS_SDK_prop_saltrocket_HPP
#define UE4SS_SDK_prop_saltrocket_HPP

class Aprop_saltrocket_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UParticleSystemComponent* eff_fireworkThrust;                               // 0x0370 (size: 0x8)
    class UParticleSystemComponent* eff_fireworkFuse;                                 // 0x0378 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0380 (size: 0x8)
    class UvelocityStuck_C* velocityStuck;                                            // 0x0388 (size: 0x8)
    float Timeline_0_a_E3A7106047ABC1E6311474AC0994DF50;                              // 0x0390 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E3A7106047ABC1E6311474AC0994DF50; // 0x0394 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0398 (size: 0x8)
    float a_a_DADD8E8C4CD1D3C2408CCA97705C7975;                                       // 0x03A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_DADD8E8C4CD1D3C2408CCA97705C7975; // 0x03A4 (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x03A8 (size: 0x8)

    void explode();
    void a__FinishedFunc();
    void a__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void attemptIgnite();
    void fire();
    void ReceiveBeginPlay();
    void broken();
    void broken_fire();
    void ExecuteUbergraph_prop_saltrocket(int32 EntryPoint);
}; // Size: 0x3B0

#endif
