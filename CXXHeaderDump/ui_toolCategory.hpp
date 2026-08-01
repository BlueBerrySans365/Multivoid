#ifndef UE4SS_SDK_ui_toolCategory_HPP
#define UE4SS_SDK_ui_toolCategory_HPP

class Uui_toolCategory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_108;                                                        // 0x0268 (size: 0x8)
    class UExpandableArea* EA_example;                                                // 0x0270 (size: 0x8)
    class UImage* Image_63;                                                           // 0x0278 (size: 0x8)
    class UImage* image_spacer;                                                       // 0x0280 (size: 0x8)
    class UTextBlock* TextBlock_18;                                                   // 0x0288 (size: 0x8)
    class UVerticalBox* vb_list;                                                      // 0x0290 (size: 0x8)
    TEnumAsByte<enum_toolCategory::Type> Category;                                    // 0x0298 (size: 0x1)
    TArray<class Uui_spawnmenuToolButton_C*> tools;                                   // 0x02A0 (size: 0x10)

    void BndEvt__ui_toolCategory_Button_108_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ui_toolCategory(int32 EntryPoint);
}; // Size: 0x2B0

#endif
