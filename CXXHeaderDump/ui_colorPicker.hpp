#ifndef UE4SS_SDK_ui_colorPicker_HPP
#define UE4SS_SDK_ui_colorPicker_HPP

class Uui_colorPicker_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_reset;                                                      // 0x0268 (size: 0x8)
    class UButton* buttonApply;                                                       // 0x0270 (size: 0x8)
    class UButton* buttonCancel;                                                      // 0x0278 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0280 (size: 0x8)
    class UCanvasPanel* CanvasPanel_1;                                                // 0x0288 (size: 0x8)
    class UEditableTextBox* etext_alpha;                                              // 0x0290 (size: 0x8)
    class UEditableTextBox* etext_hex;                                                // 0x0298 (size: 0x8)
    class UImage* Image_244;                                                          // 0x02A0 (size: 0x8)
    class UImage* img_colorbox;                                                       // 0x02A8 (size: 0x8)
    class UImage* img_colorbox_a;                                                     // 0x02B0 (size: 0x8)
    class UImage* img_colorbox_s;                                                     // 0x02B8 (size: 0x8)
    class UImage* img_colorbox_v;                                                     // 0x02C0 (size: 0x8)
    class UImage* img_h;                                                              // 0x02C8 (size: 0x8)
    class USlider* slider_A;                                                          // 0x02D0 (size: 0x8)
    class USlider* slider_H;                                                          // 0x02D8 (size: 0x8)
    class USlider* slider_S;                                                          // 0x02E0 (size: 0x8)
    class USlider* slider_V;                                                          // 0x02E8 (size: 0x8)
    FLinearColor color_HSV;                                                           // 0x02F0 (size: 0x10)
    bool Pressed;                                                                     // 0x0300 (size: 0x1)
    class UObject* Object;                                                            // 0x0308 (size: 0x8)
    FLinearColor color_HSV_default;                                                   // 0x0310 (size: 0x10)

    void End(bool apply);
    void begin(FLinearColor color_HSV, FLinearColor color_HSV_default, class UObject* Object, FVector2D InPosition);
    void HexToColor(FString hex_in, FColor color_in, FColor& color_out, FString& hex_out);
    FEventReply pickup(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply pickDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void upd();
    void BndEvt__ui_colorPicker_slider_V_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ui_colorPicker_slider_S_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ui_colorPicker_slider_H_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void Construct();
    void BndEvt__ui_colorPicker_buttonCancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_colorPicker_buttonApply_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_colorPicker_etext_hex_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_colorPicker_button_reset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BndEvt__ui_colorPicker_slider_A_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ExecuteUbergraph_ui_colorPicker(int32 EntryPoint);
}; // Size: 0x320

#endif
