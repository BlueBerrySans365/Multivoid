#ifndef UE4SS_SDK_uicomp_shopSlot_HPP
#define UE4SS_SDK_uicomp_shopSlot_HPP

class Uuicomp_shopSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_fav;                                                        // 0x0268 (size: 0x8)
    class UButton* Button_hover;                                                      // 0x0270 (size: 0x8)
    class UCanvasPanel* canvas_newBlink;                                              // 0x0278 (size: 0x8)
    class UImage* Image_167;                                                          // 0x0280 (size: 0x8)
    class UImage* img;                                                                // 0x0288 (size: 0x8)
    class UImage* img_new;                                                            // 0x0290 (size: 0x8)
    class UImage* img_new_1;                                                          // 0x0298 (size: 0x8)
    class UImage* img_selected;                                                       // 0x02A0 (size: 0x8)
    class UTextBlock* Text_item;                                                      // 0x02A8 (size: 0x8)
    class UTextBlock* text_new;                                                       // 0x02B0 (size: 0x8)
    class UTextBlock* text_price;                                                     // 0x02B8 (size: 0x8)
    class UTextBlock* Text_size;                                                      // 0x02C0 (size: 0x8)
    class Uui_laptop_C* Owner;                                                        // 0x02C8 (size: 0x8)
    Fstruct_store Data;                                                               // 0x02D0 (size: 0x50)
    bool isAchievement;                                                               // 0x0320 (size: 0x1)
    FName Name;                                                                       // 0x0324 (size: 0x8)
    FText DisplayName;                                                                // 0x0330 (size: 0x18)
    bool isnew;                                                                       // 0x0348 (size: 0x1)
    FTimerHandle timer_new;                                                           // 0x0350 (size: 0x8)
    bool N;                                                                           // 0x0358 (size: 0x1)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0360 (size: 0x8)

    void updSelect();
    void checkNew();
    void updFav(class Usave_main_C* Target);
    void Filter(const FText& Name);
    void BndEvt__umg_shopSlot_Button_hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__umg_shopSlot_Button_hover_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__umg_shopSlot_Button_hover_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_shopSlot_button_fav_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void startNew();
    void timerNew();
    void BndEvt__ui_shopSlot_Button_order_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_uicomp_shopSlot(int32 EntryPoint);
}; // Size: 0x368

#endif
