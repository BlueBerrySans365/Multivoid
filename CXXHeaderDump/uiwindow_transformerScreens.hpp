#ifndef UE4SS_SDK_uiwindow_transformerScreens_HPP
#define UE4SS_SDK_uiwindow_transformerScreens_HPP

class Uuiwindow_transformerScreens_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* image_bar_sine;                                                     // 0x0268 (size: 0x8)
    class UImage* image_bar_switches;                                                 // 0x0270 (size: 0x8)
    class UImage* image_sine;                                                         // 0x0278 (size: 0x8)
    class URichTextBlock* rtb_console;                                                // 0x0280 (size: 0x8)
    class UTextBlock* text_bit_0;                                                     // 0x0288 (size: 0x8)
    class UTextBlock* text_bit_1;                                                     // 0x0290 (size: 0x8)
    class UTextBlock* text_bit_2;                                                     // 0x0298 (size: 0x8)
    class UTextBlock* text_bit_3;                                                     // 0x02A0 (size: 0x8)
    class UTextBlock* text_bit_4;                                                     // 0x02A8 (size: 0x8)
    class UTextBlock* text_bit_5;                                                     // 0x02B0 (size: 0x8)
    class UTextBlock* text_bit_6;                                                     // 0x02B8 (size: 0x8)
    class UTextBlock* text_bit_7;                                                     // 0x02C0 (size: 0x8)
    TArray<class UTextBlock*> textsBits;                                              // 0x02C8 (size: 0x10)
    class AtransformerMGPanel_C* transformer;                                         // 0x02D8 (size: 0x8)
    FText outputLog;                                                                  // 0x02E0 (size: 0x18)
    FText outputLog_nocolor;                                                          // 0x02F8 (size: 0x18)
    Fuiwindow_transformerScreens_CMouseDelta mouseDelta;                              // 0x0310 (size: 0x10)
    void mouseDelta(float Delta);

    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void printStatus();
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void Construct();
    void ExecuteUbergraph_uiwindow_transformerScreens(int32 EntryPoint);
    void mouseDelta__DelegateSignature(float Delta);
}; // Size: 0x320

#endif
