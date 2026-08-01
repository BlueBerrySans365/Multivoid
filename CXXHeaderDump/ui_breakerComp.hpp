#ifndef UE4SS_SDK_ui_breakerComp_HPP
#define UE4SS_SDK_ui_breakerComp_HPP

class Uui_breakerComp_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_toggle;                                                     // 0x0268 (size: 0x8)
    class UImage* img_light_off;                                                      // 0x0270 (size: 0x8)
    class UImage* img_light_on;                                                       // 0x0278 (size: 0x8)
    class UWidgetSwitcher* switcher_button;                                           // 0x0280 (size: 0x8)
    class UTextBlock* text_txt;                                                       // 0x0288 (size: 0x8)
    class UThrobber* Throbber_0;                                                      // 0x0290 (size: 0x8)
    FText DisplayName;                                                                // 0x0298 (size: 0x18)
    int32 Index;                                                                      // 0x02B0 (size: 0x4)
    class Uui_laptop_C* laptop;                                                       // 0x02B8 (size: 0x8)
    class AmainGamemode_C* GameMode;                                                  // 0x02C0 (size: 0x8)

    void upd();
    void SetName();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ui_breakerComp_button_toggle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void powerChanged(bool active_calc, bool active_downl, bool active_coords, bool active_play, bool active_light);
    void ExecuteUbergraph_ui_breakerComp(int32 EntryPoint);
}; // Size: 0x2C8

#endif
