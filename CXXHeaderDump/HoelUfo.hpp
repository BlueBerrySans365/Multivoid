#ifndef UE4SS_SDK_HoelUfo_HPP
#define UE4SS_SDK_HoelUfo_HPP

class AHoelUfo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UParticleSystemComponent* eff_center;                                       // 0x0228 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x0230 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0238 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0248 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0250 (size: 0x8)
    class UStaticMeshComponent* rootSphere;                                           // 0x0258 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x0260 (size: 0x8)
    class Ucomp_radiation_C* comp_radiation;                                          // 0x0268 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0270 (size: 0x8)
    int32 Amount;                                                                     // 0x0278 (size: 0x4)
    float Speed;                                                                      // 0x027C (size: 0x4)
    TArray<class UStaticMeshComponent*> Meshes;                                       // 0x0280 (size: 0x10)
    TArray<float> speeds;                                                             // 0x0290 (size: 0x10)
    TArray<float> Angles;                                                             // 0x02A0 (size: 0x10)
    TArray<float> distances;                                                          // 0x02B0 (size: 0x10)
    TArray<FVector> Vectors;                                                          // 0x02C0 (size: 0x10)
    TArray<class UPointLightComponent*> lights;                                       // 0x02D0 (size: 0x10)
    FVector Velocity;                                                                 // 0x02E0 (size: 0xC)
    FFloatSpringState spring;                                                         // 0x02EC (size: 0x8)
    float turnAt;                                                                     // 0x02F4 (size: 0x4)
    float Angle;                                                                      // 0x02F8 (size: 0x4)
    FVector prev;                                                                     // 0x02FC (size: 0xC)
    class UStaticMeshComponent* A;                                                    // 0x0308 (size: 0x8)
    TArray<class UParticleSystemComponent*> lightEffects;                             // 0x0310 (size: 0x10)

    void attackBeam();
    void gen();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void changeSpringDir();
    void attack();
    void changeSpeed();
    void ExecuteUbergraph_HoelUfo(int32 EntryPoint);
}; // Size: 0x320

#endif
