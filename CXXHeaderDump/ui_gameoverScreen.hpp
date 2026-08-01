#ifndef UE4SS_SDK_ui_gameoverScreen_HPP
#define UE4SS_SDK_ui_gameoverScreen_HPP

class Uui_gameoverScreen_C : public UUserWidget
{
    class UImage* cov;                                                                // 0x0260 (size: 0x8)
    class UImage* Image_32;                                                           // 0x0268 (size: 0x8)
    class UImage* Image_105;                                                          // 0x0270 (size: 0x8)
    class URetainerBox* RetainerBox_136;                                              // 0x0278 (size: 0x8)
    class UTextBlock* txt_text;                                                       // 0x0280 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_41;                                         // 0x0288 (size: 0x8)

    void set(FText InText);
}; // Size: 0x290

#endif
