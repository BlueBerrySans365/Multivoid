#ifndef UE4SS_SDK_theDryThrongler_HPP
#define UE4SS_SDK_theDryThrongler_HPP

class AtheDryThrongler_C : public AbatchSpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UParticleSystemComponent* eff_eye5;                                         // 0x0270 (size: 0x8)
    class UStaticMeshComponent* StaticMesh18;                                         // 0x0278 (size: 0x8)
    class UStaticMeshComponent* StaticMesh17;                                         // 0x0280 (size: 0x8)
    class UParticleSystemComponent* eff_fire2;                                        // 0x0288 (size: 0x8)
    class UParticleSystemComponent* eff_eye4;                                         // 0x0290 (size: 0x8)
    class UParticleSystemComponent* eff_eye3;                                         // 0x0298 (size: 0x8)
    class UParticleSystemComponent* eff_fire1;                                        // 0x02A0 (size: 0x8)
    class UParticleSystemComponent* eff_eye2;                                         // 0x02A8 (size: 0x8)
    class UParticleSystemComponent* eff_fire;                                         // 0x02B0 (size: 0x8)
    class UParticleSystemComponent* eff_eye1;                                         // 0x02B8 (size: 0x8)
    class UParticleSystemComponent* eff_eye;                                          // 0x02C0 (size: 0x8)
    class UParticleSystemComponent* eff_dust;                                         // 0x02C8 (size: 0x8)
    class UPointLightComponent* PointLight3;                                          // 0x02D0 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x02D8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02E0 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x02E8 (size: 0x8)
    class UParticleSystemComponent* eff_fire3;                                        // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh15;                                         // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh14;                                         // 0x0300 (size: 0x8)
    class UStaticMeshComponent* StaticMesh11;                                         // 0x0308 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0310 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0320 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x0328 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0330 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x0338 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x0340 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0348 (size: 0x8)
    class UStaticMeshComponent* StaticMesh9;                                          // 0x0350 (size: 0x8)
    class UStaticMeshComponent* StaticMesh12;                                         // 0x0358 (size: 0x8)
    class UStaticMeshComponent* StaticMesh10;                                         // 0x0360 (size: 0x8)
    class UStaticMeshComponent* StaticMesh13;                                         // 0x0368 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0370 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0378 (size: 0x8)
    FString NewVar_0;                                                                 // 0x0380 (size: 0x10)

    void ReceiveBeginPlay();
    void reachedByExplosion(FVector Location, float Damage, class Aexplosion_C* explosion);
    void ExecuteUbergraph_theDryThrongler(int32 EntryPoint);
}; // Size: 0x390

#endif
