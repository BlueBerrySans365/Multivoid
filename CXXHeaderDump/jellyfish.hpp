#ifndef UE4SS_SDK_jellyfish_HPP
#define UE4SS_SDK_jellyfish_HPP

class Ajellyfish_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class URadialForceComponent* RadialForce;                                         // 0x0228 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0230 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0238 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0240 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0248 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0250 (size: 0x8)
    FVector vec;                                                                      // 0x0258 (size: 0xC)
    class AjellyfishPath_C* Spline;                                                   // 0x0268 (size: 0x8)
    FVector Adds;                                                                     // 0x0270 (size: 0xC)
    FVector rVec;                                                                     // 0x027C (size: 0xC)

    void ground();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_jellyfish(int32 EntryPoint);
}; // Size: 0x288

#endif
