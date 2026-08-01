#ifndef UE4SS_SDK_ufo_trifo_HPP
#define UE4SS_SDK_ufo_trifo_HPP

class Aufo_trifo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x0228 (size: 0x8)
    class UAudioComponent* trifoLightLoop3;                                           // 0x0230 (size: 0x8)
    class UAudioComponent* trifoLightLoop2;                                           // 0x0238 (size: 0x8)
    class UAudioComponent* trifoLightLoop1;                                           // 0x0240 (size: 0x8)
    class UAudioComponent* trifoLightLoop;                                            // 0x0248 (size: 0x8)
    class UStaticMeshComponent* UFO;                                                  // 0x0250 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0258 (size: 0x8)
    class UBillboardComponent* point_C;                                               // 0x0260 (size: 0x8)
    class UBillboardComponent* point_B;                                               // 0x0268 (size: 0x8)
    class UBillboardComponent* point_A;                                               // 0x0270 (size: 0x8)
    class UParticleSystemComponent* eff_l4;                                           // 0x0278 (size: 0x8)
    class UParticleSystemComponent* eff_l3;                                           // 0x0280 (size: 0x8)
    class UParticleSystemComponent* eff_l2;                                           // 0x0288 (size: 0x8)
    class UParticleSystemComponent* eff_l1;                                           // 0x0290 (size: 0x8)
    class USpotLightComponent* SpotLight3;                                            // 0x0298 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x02A0 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x02A8 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x02B0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    float Timeline_2_blinkWeight_9101B394486493D97BE0AAAA0D9F51B3;                    // 0x02C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_9101B394486493D97BE0AAAA0D9F51B3; // 0x02CC (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x02D0 (size: 0x8)
    float Timeline_1_blinkWeight_EC8F35924AC2AC646F2B869D1E04A412;                    // 0x02D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_EC8F35924AC2AC646F2B869D1E04A412; // 0x02DC (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x02E0 (size: 0x8)
    float Timeline_0_a_C718C2D64894FF8642A2D281A8B20626;                              // 0x02E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_C718C2D64894FF8642A2D281A8B20626; // 0x02EC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02F0 (size: 0x8)
    float flyTL_a_0AC415B34263D6B5F00403B7E6628308;                                   // 0x02F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> flyTL__Direction_0AC415B34263D6B5F00403B7E6628308; // 0x02FC (size: 0x1)
    class UTimelineComponent* flyTL;                                                  // 0x0300 (size: 0x8)
    float brightness_light_4_46C0AABB4DC7B3F4BC8EEFB9C7134650;                        // 0x0308 (size: 0x4)
    float brightness_light_3_46C0AABB4DC7B3F4BC8EEFB9C7134650;                        // 0x030C (size: 0x4)
    float brightness_light_2_46C0AABB4DC7B3F4BC8EEFB9C7134650;                        // 0x0310 (size: 0x4)
    float brightness_light_1_46C0AABB4DC7B3F4BC8EEFB9C7134650;                        // 0x0314 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> brightness__Direction_46C0AABB4DC7B3F4BC8EEFB9C7134650; // 0x0318 (size: 0x1)
    class UTimelineComponent* Brightness;                                             // 0x0320 (size: 0x8)
    bool debug;                                                                       // 0x0328 (size: 0x1)
    float Weight;                                                                     // 0x032C (size: 0x4)
    class AmainGamemode_C* GameMode;                                                  // 0x0330 (size: 0x8)
    class Uui_blur_C* widget_blir;                                                    // 0x0338 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_dizzy;                                     // 0x0340 (size: 0x8)

    void brightness__FinishedFunc();
    void brightness__UpdateFunc();
    void flyTL__FinishedFunc();
    void flyTL__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void abduct();
    void ExecuteUbergraph_ufo_trifo(int32 EntryPoint);
}; // Size: 0x348

#endif
