#ifndef UE4SS_SDK_ui_quicksave_HPP
#define UE4SS_SDK_ui_quicksave_HPP

class Uui_quicksave_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* text_sv;                                                        // 0x0268 (size: 0x8)
    float A;                                                                          // 0x0270 (size: 0x4)
    bool subsave;                                                                     // 0x0274 (size: 0x1)

    void SetText(bool Index);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ui_quicksave(int32 EntryPoint);
}; // Size: 0x275

#endif
