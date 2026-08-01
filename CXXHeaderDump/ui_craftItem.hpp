#ifndef UE4SS_SDK_ui_craftItem_HPP
#define UE4SS_SDK_ui_craftItem_HPP

class Uui_craftItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_button;                                                     // 0x0268 (size: 0x8)
    class UImage* Image_266;                                                          // 0x0270 (size: 0x8)
    class UImage* img;                                                                // 0x0278 (size: 0x8)
    class UWidgetSwitcher* switcher;                                                  // 0x0280 (size: 0x8)
    class UTextBlock* text_name;                                                      // 0x0288 (size: 0x8)
    class Uui_crafting_C* Owner;                                                      // 0x0290 (size: 0x8)
    FName prop;                                                                       // 0x0298 (size: 0x8)
    FString craftResult;                                                              // 0x02A0 (size: 0x10)
    FText Name;                                                                       // 0x02B0 (size: 0x18)

    void Construct();
    void BndEvt__ui_craftItem_Button_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_craftItem(int32 EntryPoint);
}; // Size: 0x2C8

#endif
