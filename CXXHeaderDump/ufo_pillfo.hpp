#ifndef UE4SS_SDK_ufo_pillfo_HPP
#define UE4SS_SDK_ufo_pillfo_HPP

class Aufo_pillfo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x0228 (size: 0x8)
    class UParticleSystemComponent* eff_pillfoGlow;                                   // 0x0230 (size: 0x8)
    class UAudioComponent* pillfoLoop;                                                // 0x0238 (size: 0x8)
    class UBillboardComponent* Center;                                                // 0x0240 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0248 (size: 0x8)
    class UBillboardComponent* point_B;                                               // 0x0250 (size: 0x8)
    class UBillboardComponent* point_A;                                               // 0x0258 (size: 0x8)
    class UStaticMeshComponent* UFO;                                                  // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    float Timeline_0_a_F87DD6C54CB7B74CC01729B05B0C8967;                              // 0x0270 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_F87DD6C54CB7B74CC01729B05B0C8967; // 0x0274 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0278 (size: 0x8)
    float a_a_4003EC194C59F5498CC22B8A29235EE9;                                       // 0x0280 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_4003EC194C59F5498CC22B8A29235EE9; // 0x0284 (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x0288 (size: 0x8)
    float R;                                                                          // 0x0290 (size: 0x4)
    bool debug;                                                                       // 0x0294 (size: 0x1)

    void a__FinishedFunc();
    void a__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void Play();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ufo_pillfo(int32 EntryPoint);
}; // Size: 0x295

#endif
