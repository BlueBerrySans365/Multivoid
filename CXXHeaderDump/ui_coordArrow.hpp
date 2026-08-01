#ifndef UE4SS_SDK_ui_coordArrow_HPP
#define UE4SS_SDK_ui_coordArrow_HPP

class Uui_coordArrow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* canvas_arrowSize;                                             // 0x0268 (size: 0x8)
    class UImage* Image_61;                                                           // 0x0270 (size: 0x8)
    class UTextBlock* text_dist;                                                      // 0x0278 (size: 0x8)
    float A;                                                                          // 0x0280 (size: 0x4)
    FVector lookAt;                                                                   // 0x0284 (size: 0xC)
    class AspaceRenderer_C* Renderer;                                                 // 0x0290 (size: 0x8)
    float Alpha;                                                                      // 0x0298 (size: 0x4)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_ui_coordArrow(int32 EntryPoint);
}; // Size: 0x29C

#endif
