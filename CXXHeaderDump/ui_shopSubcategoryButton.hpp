#ifndef UE4SS_SDK_ui_shopSubcategoryButton_HPP
#define UE4SS_SDK_ui_shopSubcategoryButton_HPP

class Uui_shopSubcategoryButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_shopCat_tools;                                              // 0x0268 (size: 0x8)
    class UTextBlock* textbox_name;                                                   // 0x0270 (size: 0x8)
    FText subcategory;                                                                // 0x0278 (size: 0x18)
    TEnumAsByte<enum_shopCats::Type> Category;                                        // 0x0290 (size: 0x1)
    class Uui_laptop_C* Owner;                                                        // 0x0298 (size: 0x8)

    void upd();
    void Construct();
    void BndEvt__umg_shopSubcategoryButton_button_shopCat_tools_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_shopSubcategoryButton(int32 EntryPoint);
}; // Size: 0x2A0

#endif
