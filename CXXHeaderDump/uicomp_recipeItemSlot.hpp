#ifndef UE4SS_SDK_uicomp_recipeItemSlot_HPP
#define UE4SS_SDK_uicomp_recipeItemSlot_HPP

class Uuicomp_recipeItemSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_select;                                                     // 0x0268 (size: 0x8)
    class UImage* image_selected;                                                     // 0x0270 (size: 0x8)
    class UImage* img_item;                                                           // 0x0278 (size: 0x8)
    class UTextBlock* text_name;                                                      // 0x0280 (size: 0x8)
    class UTextBlock* text_reverse;                                                   // 0x0288 (size: 0x8)
    Fstruct_crafting Data;                                                            // 0x0290 (size: 0x48)
    class Uuiwindow_craftingBook_C* inv;                                              // 0x02D8 (size: 0x8)
    FString Name;                                                                     // 0x02E0 (size: 0x10)

    void select();
    void Construct();
    void BndEvt__umg_recipeItemSlot_button_select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_recipeItemSlot(int32 EntryPoint);
}; // Size: 0x2F0

#endif
