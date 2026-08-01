#ifndef UE4SS_SDK_ui_linearProgress_HPP
#define UE4SS_SDK_ui_linearProgress_HPP

class Uui_linearProgress_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* back;                                                               // 0x0268 (size: 0x8)
    class UCanvasPanel* canv_pivot;                                                   // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_31;                                               // 0x0278 (size: 0x8)
    class UProgressBar* pbar;                                                         // 0x0280 (size: 0x8)
    class UTextBlock* tex_perc;                                                       // 0x0288 (size: 0x8)
    class AActor* Owner;                                                              // 0x0290 (size: 0x8)
    class UPrimitiveComponent* Component;                                             // 0x0298 (size: 0x8)

    void Location(FVector& Origin);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ui_linearProgress(int32 EntryPoint);
}; // Size: 0x2A0

#endif
