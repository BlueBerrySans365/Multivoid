#ifndef UE4SS_SDK_3dPrinterProcessor_HPP
#define UE4SS_SDK_3dPrinterProcessor_HPP

class A3dPrinterProcessor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPointLightComponent* backLight;                                            // 0x0228 (size: 0x8)
    class UPointLightComponent* frontLight;                                           // 0x0230 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0238 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0240 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0248 (size: 0x8)
    class UProceduralMeshComponent* ProceduralMesh;                                   // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    FString modelName;                                                                // 0x0260 (size: 0x10)
    class AmainGamemode_C* GameMode;                                                  // 0x0270 (size: 0x8)
    class Uuicomp_printerSlot_C* renderingSlot;                                       // 0x0278 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x0280 (size: 0x8)
    class UTexture2D* tex;                                                            // 0x0288 (size: 0x8)
    TArray<class Uuicomp_printerSlot_C*> Slots;                                       // 0x0290 (size: 0x10)
    TArray<class Uuicomp_printerSlot_C*> slots_buff;                                  // 0x02A0 (size: 0x10)

    void loadIconForSlot(FString FilePath, class Uuicomp_printerSlot_C* Slot);
    FString getIconPath(FString C);
    void renderModel();
    void ReceiveBeginPlay();
    void queueRenderer(TArray<class Uuicomp_printerSlot_C*>& Slots);
    void ExecuteUbergraph_3dPrinterProcessor(int32 EntryPoint);
}; // Size: 0x2B0

#endif
