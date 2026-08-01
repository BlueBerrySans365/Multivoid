#ifndef UE4SS_SDK_uicomp_objectUpgradeSlot_HPP
#define UE4SS_SDK_uicomp_objectUpgradeSlot_HPP

class Uuicomp_objectUpgradeSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_60;                                                         // 0x0268 (size: 0x8)
    class UImage* img_item;                                                           // 0x0270 (size: 0x8)
    class UTextBlock* text_name;                                                      // 0x0278 (size: 0x8)
    class UTexture* Icon;                                                             // 0x0280 (size: 0x8)
    FText Name;                                                                       // 0x0288 (size: 0x18)
    class Uui_objectUpgrades_C* Owner;                                                // 0x02A0 (size: 0x8)
    FName Item;                                                                       // 0x02A8 (size: 0x8)

    void Construct();
    void BndEvt__ui_objectUpgradeSlot_Button_60_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_objectUpgradeSlot(int32 EntryPoint);
}; // Size: 0x2B0

#endif
