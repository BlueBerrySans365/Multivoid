#ifndef UE4SS_SDK_ui_crafting_HPP
#define UE4SS_SDK_ui_crafting_HPP

class Uui_crafting_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_recipeUnfroll;                                              // 0x0268 (size: 0x8)
    class UCanvasPanel* canvas_craft;                                                 // 0x0270 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0290 (size: 0x8)
    class UScrollBox* scrollbox_crafts;                                               // 0x0298 (size: 0x8)
    class UScrollBox* scrollbox_ingredients;                                          // 0x02A0 (size: 0x8)
    class UTextBlock* text_blueprint;                                                 // 0x02A8 (size: 0x8)
    class UTextBlock* text_button;                                                    // 0x02B0 (size: 0x8)
    class Uuiwindow_craftingBook_C* uiwindow_craftingBook1;                           // 0x02B8 (size: 0x8)
    class Aprop_workbench_C* workbench;                                               // 0x02C0 (size: 0x8)
    TArray<class Uui_craftItem_C*> itemSlots;                                         // 0x02C8 (size: 0x10)
    TArray<class Uui_craftItem_C*> resultSlots;                                       // 0x02D8 (size: 0x10)

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void gen();
    void Open(class Aprop_workbench_C* workbench);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void quit();
    void BndEvt__ui_crafting_button_recipeUnfroll_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_crafting(int32 EntryPoint);
}; // Size: 0x2E8

#endif
