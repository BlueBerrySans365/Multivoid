#ifndef UE4SS_SDK_ui_radialText_HPP
#define UE4SS_SDK_ui_radialText_HPP

class Uui_radialText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* canvas_pivot;                                                 // 0x0268 (size: 0x8)
    class UCanvasPanel* canvasMover;                                                  // 0x0270 (size: 0x8)
    class UTextBlock* txt_text;                                                       // 0x0278 (size: 0x8)
    FText Text;                                                                       // 0x0280 (size: 0x18)

    void Construct();
    void ExecuteUbergraph_ui_radialText(int32 EntryPoint);
}; // Size: 0x298

#endif
