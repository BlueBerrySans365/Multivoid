#ifndef UE4SS_SDK_ui_oj_HPP
#define UE4SS_SDK_ui_oj_HPP

class Uui_oj_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* canvas_pivot;                                                 // 0x0268 (size: 0x8)
    class UImage* Image_33;                                                           // 0x0270 (size: 0x8)
    float A;                                                                          // 0x0278 (size: 0x4)
    class AActor* obj;                                                                // 0x0280 (size: 0x8)
    FVector Loc;                                                                      // 0x0288 (size: 0xC)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_ui_oj(int32 EntryPoint);
}; // Size: 0x294

#endif
