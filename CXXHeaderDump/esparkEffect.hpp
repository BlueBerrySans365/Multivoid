#ifndef UE4SS_SDK_esparkEffect_HPP
#define UE4SS_SDK_esparkEffect_HPP

class AesparkEffect_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0228 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0230 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0238 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__esparkEffect_ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem);
    void ExecuteUbergraph_esparkEffect(int32 EntryPoint);
}; // Size: 0x240

#endif
