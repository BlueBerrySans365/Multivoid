#ifndef UE4SS_SDK_ui_hsvWindow_HPP
#define UE4SS_SDK_ui_hsvWindow_HPP

class Uui_hsvWindow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_apply;                                                      // 0x0268 (size: 0x8)
    class UButton* button_cancel;                                                     // 0x0270 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_55;                                                           // 0x0280 (size: 0x8)
    class UImage* img_color;                                                          // 0x0288 (size: 0x8)
    class USlider* slider_H;                                                          // 0x0290 (size: 0x8)
    class USlider* Slider_M;                                                          // 0x0298 (size: 0x8)
    class USlider* slider_S;                                                          // 0x02A0 (size: 0x8)
    class USlider* slider_V;                                                          // 0x02A8 (size: 0x8)
    class UTextBlock* text_H;                                                         // 0x02B0 (size: 0x8)
    class UTextBlock* text_M;                                                         // 0x02B8 (size: 0x8)
    class UTextBlock* text_S;                                                         // 0x02C0 (size: 0x8)
    class UTextBlock* text_V;                                                         // 0x02C8 (size: 0x8)
    class AActor* Actor;                                                              // 0x02D0 (size: 0x8)
    FLinearColor InColor;                                                             // 0x02D8 (size: 0x10)
    FVector4 hsvm;                                                                    // 0x02F0 (size: 0x10)
    float maxH;                                                                       // 0x0300 (size: 0x4)
    float maxS;                                                                       // 0x0304 (size: 0x4)
    float maxV;                                                                       // 0x0308 (size: 0x4)
    float MaxM;                                                                       // 0x030C (size: 0x4)
    bool Direct;                                                                      // 0x0310 (size: 0x1)

    FLinearColor conv(FVector4 InputPin);
    void setMaxValues(float maxH, float maxS, float maxV, float MaxM);
    void upd();
    void Init(class AActor* Actor, FLinearColor InColor, bool customMaxValues, bool Direct);
    void BndEvt__umg_hsvWindow_Slider_H_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__umg_hsvWindow_Slider_S_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__umg_hsvWindow_Slider_V_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__umg_hsvWindow_Slider_M_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__umg_hsvWindow_button_cancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_hsvWindow_button_apply_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_hsvWindow(int32 EntryPoint);
}; // Size: 0x311

#endif
