#ifndef UE4SS_SDK_ui_spawnMenuTabButton_HPP
#define UE4SS_SDK_ui_spawnMenuTabButton_HPP

class Uui_spawnMenuTabButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_button;                                                     // 0x0268 (size: 0x8)
    class UTextBlock* text_button;                                                    // 0x0270 (size: 0x8)
    TEnumAsByte<enum_spawnmenuTabs::Type> Tab;                                        // 0x0278 (size: 0x1)
    class Uui_spawnmenu_C* spawnmenu;                                                 // 0x0280 (size: 0x8)

    void updSelect();
    void Init();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ui_spawnMenuTabButton_Button_button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_spawnMenuTabButton(int32 EntryPoint);
}; // Size: 0x288

#endif
