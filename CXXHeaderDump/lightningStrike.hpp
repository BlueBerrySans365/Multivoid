#ifndef UE4SS_SDK_lightningStrike_HPP
#define UE4SS_SDK_lightningStrike_HPP

class AlightningStrike_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* lightningRadius;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* audio_background;                                          // 0x0230 (size: 0x8)
    class UAudioComponent* audio_far;                                                 // 0x0238 (size: 0x8)
    class UAudioComponent* audio_close;                                               // 0x0240 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0248 (size: 0x8)
    class UParticleSystemComponent* eff_lightning;                                    // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    float lightTL_a_F221259D43A5A518CBF27F998E63014D;                                 // 0x0260 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> lightTL__Direction_F221259D43A5A518CBF27F998E63014D; // 0x0264 (size: 0x1)
    class UTimelineComponent* lightTL;                                                // 0x0268 (size: 0x8)
    int32 debris;                                                                     // 0x0270 (size: 0x4)
    FName explosionTag;                                                               // 0x0274 (size: 0x8)
    float Radius;                                                                     // 0x027C (size: 0x4)

    void lightTL__FinishedFunc();
    void lightTL__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_lightningStrike(int32 EntryPoint);
}; // Size: 0x280

#endif
