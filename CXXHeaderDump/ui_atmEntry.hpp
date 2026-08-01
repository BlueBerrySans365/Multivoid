#ifndef UE4SS_SDK_ui_atmEntry_HPP
#define UE4SS_SDK_ui_atmEntry_HPP

class Uui_atmEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_+1;                                                         // 0x0268 (size: 0x8)
    class UButton* button_+5;                                                         // 0x0270 (size: 0x8)
    class UButton* button_-1;                                                         // 0x0278 (size: 0x8)
    class UButton* button_-5;                                                         // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_64;                                                           // 0x0290 (size: 0x8)
    class UImage* Image_123;                                                          // 0x0298 (size: 0x8)
    class UImage* img_billsTex;                                                       // 0x02A0 (size: 0x8)
    class UImage* img_billsTex_2;                                                     // 0x02A8 (size: 0x8)
    class UImage* img_billsTex_3;                                                     // 0x02B0 (size: 0x8)
    class UImage* img_billTex;                                                        // 0x02B8 (size: 0x8)
    class UWidgetSwitcher* switcher_currencyType;                                     // 0x02C0 (size: 0x8)
    class UTextBlock* tex_billAmount;                                                 // 0x02C8 (size: 0x8)
    class UTextBlock* text_amount;                                                    // 0x02D0 (size: 0x8)
    class UTextBlock* text_billPrice;                                                 // 0x02D8 (size: 0x8)
    class UTextBlock* text_type;                                                      // 0x02E0 (size: 0x8)
    int32 billType;                                                                   // 0x02E8 (size: 0x4)
    class Uui_atm_C* Owner;                                                           // 0x02F0 (size: 0x8)
    int32 Amount;                                                                     // 0x02F8 (size: 0x4)
    FName bill;                                                                       // 0x02FC (size: 0x8)
    int32 maxAmount;                                                                  // 0x0304 (size: 0x4)
    int32 amountLeft;                                                                 // 0x0308 (size: 0x4)
    int32 currencyType;                                                               // 0x030C (size: 0x4)

    void calcMaxAmount();
    void Reset();
    void quitFocus();
    void upd();
    void Init();
    void PreConstruct(bool IsDesignTime);
    void calcAmount();
    void BndEvt__ui_atmEntry_button_+5_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_atmEntry_button_+1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_atmEntry_button_-5_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_atmEntry_button_-1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_atmEntry(int32 EntryPoint);
}; // Size: 0x310

#endif
