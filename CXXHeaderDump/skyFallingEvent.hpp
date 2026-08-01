#ifndef UE4SS_SDK_skyFallingEvent_HPP
#define UE4SS_SDK_skyFallingEvent_HPP

class AskyFallingEvent_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x0228 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0230 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0238 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0240 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0248 (size: 0x8)
    class UParticleSystemComponent* eff_glow_tardis;                                  // 0x0250 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_skyFallingEvent(int32 EntryPoint);
}; // Size: 0x268

#endif
