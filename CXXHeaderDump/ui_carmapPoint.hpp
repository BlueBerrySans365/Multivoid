#ifndef UE4SS_SDK_ui_carmapPoint_HPP
#define UE4SS_SDK_ui_carmapPoint_HPP

class Uui_carmapPoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0268 (size: 0x8)
    class UCanvasPanel* mainCanvas;                                                   // 0x0270 (size: 0x8)
    FVector2D Size;                                                                   // 0x0278 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_ui_carmapPoint(int32 EntryPoint);
}; // Size: 0x280

#endif
