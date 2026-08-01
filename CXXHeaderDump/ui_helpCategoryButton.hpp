#ifndef UE4SS_SDK_ui_helpCategoryButton_HPP
#define UE4SS_SDK_ui_helpCategoryButton_HPP

class Uui_helpCategoryButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_button;                                                     // 0x0268 (size: 0x8)
    class UTextBlock* text_button;                                                    // 0x0270 (size: 0x8)
    class Uui_help_C* Owner;                                                          // 0x0278 (size: 0x8)
    class Uui_helpCategory_C* parent_cat;                                             // 0x0280 (size: 0x8)
    class Uui_helpSubCategory_C* parent_subcat;                                       // 0x0288 (size: 0x8)
    FString searchableName;                                                           // 0x0290 (size: 0x10)
    FText Name;                                                                       // 0x02A0 (size: 0x18)
    FText Description;                                                                // 0x02B8 (size: 0x18)

    void Filter(FString prompt);
    void Init(Fstruct_help Data);
    void BndEvt__ui_helpCategoryButton_Button_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_helpCategoryButton_Button_button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ui_helpCategoryButton_Button_button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ui_helpCategoryButton(int32 EntryPoint);
}; // Size: 0x2D0

#endif
