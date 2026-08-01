#ifndef UE4SS_SDK_prop_skypiece_HPP
#define UE4SS_SDK_prop_skypiece_HPP

class Aprop_skypiece_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0378 (size: 0x8)
    class USceneCaptureComponent2D* cam;                                              // 0x0380 (size: 0x8)
    float eff_a_EBF1B7D44EB325450709C8AE209C016D;                                     // 0x0388 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> eff__Direction_EBF1B7D44EB325450709C8AE209C016D; // 0x038C (size: 0x1)
    class UTimelineComponent* eff;                                                    // 0x0390 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_screen;                                    // 0x0398 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_light;                                     // 0x03A0 (size: 0x8)
    class UTextureRenderTarget2D* rt_b;                                               // 0x03A8 (size: 0x8)
    class UTexture2D* tex_a;                                                          // 0x03B0 (size: 0x8)
    float dist;                                                                       // 0x03B8 (size: 0x4)
    float FOV;                                                                        // 0x03BC (size: 0x4)
    class UTextureRenderTarget2D* rt_a;                                               // 0x03C0 (size: 0x8)

    void NewFunction_0_0();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void Init();
    void eff__FinishedFunc();
    void eff__UpdateFunc();
    void Capture();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_skypiece(int32 EntryPoint);
}; // Size: 0x3C8

#endif
