#ifndef UE4SS_SDK_ui_radarMoabPoint_HPP
#define UE4SS_SDK_ui_radarMoabPoint_HPP

class Uui_radarMoabPoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0268 (size: 0x8)
    class UCanvasPanel* mainCanvas;                                                   // 0x0270 (size: 0x8)
    class UTextBlock* txt_coords;                                                     // 0x0278 (size: 0x8)
    class USceneCaptureComponent2D* renderCaptureComponent;                           // 0x0280 (size: 0x8)
    class AActor* Actor;                                                              // 0x0288 (size: 0x8)
    class UCanvasPanelSlot* canvasSlot;                                               // 0x0290 (size: 0x8)

    void SetSize(float Size);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_ui_radarMoabPoint(int32 EntryPoint);
}; // Size: 0x298

#endif
