#ifndef UE4SS_SDK_uicomp_helpText_HPP
#define UE4SS_SDK_uicomp_helpText_HPP

class Uuicomp_helpText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* text_help;                                                      // 0x0268 (size: 0x8)
    FText Text;                                                                       // 0x0270 (size: 0x18)
    uint8 Alignment;                                                                  // 0x0288 (size: 0x1)
    float TextPadding;                                                                // 0x028C (size: 0x4)

    void setTextPadding(float TextPadding);
    void SetAlignment(uint8 Alignment);
    void SetText(FText InText);
    void Construct();
    void ExecuteUbergraph_uicomp_helpText(int32 EntryPoint);
}; // Size: 0x290

#endif
