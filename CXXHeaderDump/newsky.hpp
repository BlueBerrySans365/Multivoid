#ifndef UE4SS_SDK_newsky_HPP
#define UE4SS_SDK_newsky_HPP

class Anewsky_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UDirectionalLightComponent* light_blackhole;                                // 0x0228 (size: 0x8)
    class UStaticMeshComponent* m1;                                                   // 0x0230 (size: 0x8)
    class UStaticMeshComponent* m3;                                                   // 0x0238 (size: 0x8)
    class UStaticMeshComponent* m2;                                                   // 0x0240 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0248 (size: 0x8)
    class UStaticMeshComponent* sky;                                                  // 0x0250 (size: 0x8)
    class UArrowComponent* starRot;                                                   // 0x0258 (size: 0x8)
    class UArrowComponent* dir;                                                       // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    float Alpha;                                                                      // 0x0270 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0278 (size: 0x8)
    class UCurveLinearColor* sky_bottom;                                              // 0x0280 (size: 0x8)
    class UCurveLinearColor* sky_top;                                                 // 0x0288 (size: 0x8)
    class UCurveLinearColor* sky_clouds;                                              // 0x0290 (size: 0x8)
    class UCurveLinearColor* sun_color;                                               // 0x0298 (size: 0x8)
    bool sunHidden;                                                                   // 0x02A0 (size: 0x1)
    float sunIntensityMult;                                                           // 0x02A4 (size: 0x4)
    FLinearColor sunColor;                                                            // 0x02A8 (size: 0x10)
    float moonIntensityMult;                                                          // 0x02B8 (size: 0x4)
    float moonPhase_mirror;                                                           // 0x02BC (size: 0x4)
    float moonPhase_normal;                                                           // 0x02C0 (size: 0x4)
    bool Eye;                                                                         // 0x02C4 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x02C8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_bhole;                                     // 0x02D0 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_sun;                                       // 0x02D8 (size: 0x8)
    class AdaynightCycle_C* daylightCycleObject;                                      // 0x02E0 (size: 0x8)
    bool applyMoonPhase;                                                              // 0x02E8 (size: 0x1)
    float DeltaSeconds;                                                               // 0x02EC (size: 0x4)
    bool skyHidden;                                                                   // 0x02F0 (size: 0x1)

    void setHiddenSuns();
    void setEye(bool Eye);
    void setSunIntensity();
    void skyVisibility(bool bNewHidden);
    void Init();
    void upd(bool updateLights);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void tp();
    void setMoonPhase();
    void ExecuteUbergraph_newsky(int32 EntryPoint);
}; // Size: 0x2F1

#endif
