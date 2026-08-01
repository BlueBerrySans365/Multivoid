#ifndef UE4SS_SDK_ui_hovertextPropHealth_HPP
#define UE4SS_SDK_ui_hovertextPropHealth_HPP

class Uui_hovertextPropHealth_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* back;                                                               // 0x0268 (size: 0x8)
    class UCanvasPanel* CanvasPanel;                                                  // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0278 (size: 0x8)
    class UCanvasPanel* CanvasPanel_31;                                               // 0x0280 (size: 0x8)
    class UTextBlock* TextBlock_41;                                                   // 0x0288 (size: 0x8)
    class Aprop_C* prop;                                                              // 0x0290 (size: 0x8)
    FVector2D Size;                                                                   // 0x0298 (size: 0x8)
    bool constantScale;                                                               // 0x02A0 (size: 0x1)

    void Stop();
    void Init(class Aprop_C* prop);
    void Loc(FVector& Origin);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ui_hovertextPropHealth(int32 EntryPoint);
}; // Size: 0x2A1

#endif
