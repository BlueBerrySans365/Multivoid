#ifndef UE4SS_SDK_uicomp_keybindSlot_HPP
#define UE4SS_SDK_uicomp_keybindSlot_HPP

class Uuicomp_keybindSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_bind;                                                       // 0x0268 (size: 0x8)
    class UButton* button_reset;                                                      // 0x0270 (size: 0x8)
    class UCanvasPanel* canvas_v_res;                                                 // 0x0278 (size: 0x8)
    class UImage* Image_179;                                                          // 0x0280 (size: 0x8)
    class UImage* img_sel;                                                            // 0x0288 (size: 0x8)
    class UTextBlock* text_key;                                                       // 0x0290 (size: 0x8)
    class UTextBlock* text_name;                                                      // 0x0298 (size: 0x8)
    int32 Index;                                                                      // 0x02A0 (size: 0x4)
    Fstruct_keybind Data;                                                             // 0x02A8 (size: 0x38)
    class Uui_keybinds_C* Owner;                                                      // 0x02E0 (size: 0x8)
    FKey defaultKey;                                                                  // 0x02E8 (size: 0x18)

    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetBind(FKey Key);
    void upd();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BndEvt__button_reset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__button_bind_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_uicomp_keybindSlot(int32 EntryPoint);
}; // Size: 0x300

#endif
