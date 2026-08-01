#ifndef UE4SS_SDK_arirGun_shoot_HPP
#define UE4SS_SDK_arirGun_shoot_HPP

class AarirGun_shoot_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UCameraShakeSourceComponent* bSh;                                           // 0x0228 (size: 0x8)
    class UCameraShakeSourceComponent* eSh;                                           // 0x0230 (size: 0x8)
    class UArrowComponent* L;                                                         // 0x0238 (size: 0x8)
    class UPointLightComponent* Len;                                                  // 0x0240 (size: 0x8)
    class UParticleSystemComponent* eff_arirGunBeam;                                  // 0x0248 (size: 0x8)
    class UAudioComponent* arirGunFire1;                                              // 0x0250 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0258 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0260 (size: 0x8)
    class URadialForceComponent* RadialForce;                                         // 0x0268 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0270 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0278 (size: 0x8)
    float Timeline_0_a_E8C6DD654CA1FB80D5CE7EA2952A3CE8;                              // 0x0280 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E8C6DD654CA1FB80D5CE7EA2952A3CE8; // 0x0284 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0288 (size: 0x8)
    float dist;                                                                       // 0x0290 (size: 0x4)
    class AActor* Gun;                                                                // 0x0298 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> objs;                                       // 0x02A0 (size: 0x10)
    float Length;                                                                     // 0x02B0 (size: 0x4)

    FVector F(FVector& ReturnValue2);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__arirGunFire1_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
    void D(class AActor* DestroyedActor);
    void ExecuteUbergraph_arirGun_shoot(int32 EntryPoint);
}; // Size: 0x2B4

#endif
