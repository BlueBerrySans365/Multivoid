#ifndef UE4SS_SDK_UVlight_HPP
#define UE4SS_SDK_UVlight_HPP

class AUVlight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0228 (size: 0x8)
    class UParticleSystemComponent* eff_light;                                        // 0x0230 (size: 0x8)
    class USphereComponent* rad;                                                      // 0x0238 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0240 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0248 (size: 0x8)
    bool isDirectional;                                                               // 0x0250 (size: 0x1)
    float Intensity;                                                                  // 0x0254 (size: 0x4)
    float Attenuation;                                                                // 0x0258 (size: 0x4)
    float Angle;                                                                      // 0x025C (size: 0x4)
    float Strength;                                                                   // 0x0260 (size: 0x4)
    float uvAngleSpread;                                                              // 0x0264 (size: 0x4)

    float calcInt(class AActor* self2);
    void upd();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_UVlight(int32 EntryPoint);
}; // Size: 0x268

#endif
