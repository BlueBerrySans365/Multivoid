#ifndef UE4SS_SDK_prop_flare_HPP
#define UE4SS_SDK_prop_flare_HPP

class Aprop_flare_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* fire;                                                     // 0x0370 (size: 0x8)
    class UParticleSystemComponent* eff_flare;                                        // 0x0378 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0380 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0388 (size: 0x8)
    float life;                                                                       // 0x0390 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void BndEvt__prop_flare_fire_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_prop_flare(int32 EntryPoint);
}; // Size: 0x394

#endif
