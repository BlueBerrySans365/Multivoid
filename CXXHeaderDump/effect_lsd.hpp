#ifndef UE4SS_SDK_effect_lsd_HPP
#define UE4SS_SDK_effect_lsd_HPP

class Aeffect_lsd_C : public Aeffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0270 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x0278 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0280 (size: 0x8)
    float A;                                                                          // 0x0288 (size: 0x4)
    class UTextureRenderTarget2D* rt;                                                 // 0x0290 (size: 0x8)
    float M;                                                                          // 0x0298 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat_rt;                                        // 0x02A0 (size: 0x8)
    class UTextureRenderTarget2D* rt_d;                                               // 0x02A8 (size: 0x8)
    class UCanvas* C;                                                                 // 0x02B0 (size: 0x8)
    FDrawToRenderTargetContext co;                                                    // 0x02B8 (size: 0x10)
    class UMaterialInstanceDynamic* d2;                                               // 0x02C8 (size: 0x8)
    float hues;                                                                       // 0x02D0 (size: 0x4)

    void setRT();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_effect_lsd(int32 EntryPoint);
}; // Size: 0x2D4

#endif
