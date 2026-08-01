#ifndef UE4SS_SDK_uicomp_upgradeSlot_HPP
#define UE4SS_SDK_uicomp_upgradeSlot_HPP

class Uuicomp_upgradeSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_58;                                                         // 0x0268 (size: 0x8)
    class UButton* button_upgDown;                                                    // 0x0270 (size: 0x8)
    class UButton* button_upgUp;                                                      // 0x0278 (size: 0x8)
    class UImage* img_bar;                                                            // 0x0280 (size: 0x8)
    class UTextBlock* text_lvl;                                                       // 0x0288 (size: 0x8)
    class UTextBlock* text_name;                                                      // 0x0290 (size: 0x8)
    class UTextBlock* text_price;                                                     // 0x0298 (size: 0x8)
    class UTextBlock* text_priceAcc;                                                  // 0x02A0 (size: 0x8)
    int32 Index;                                                                      // 0x02A8 (size: 0x4)
    FText Name;                                                                       // 0x02B0 (size: 0x18)
    FText Description;                                                                // 0x02C8 (size: 0x18)
    int32 price;                                                                      // 0x02E0 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x02E8 (size: 0x8)
    int32 maxLvl;                                                                     // 0x02F0 (size: 0x4)
    int32 levelAccumulation;                                                          // 0x02F4 (size: 0x4)
    class AmainGamemode_C* GameMode;                                                  // 0x02F8 (size: 0x8)
    bool Module;                                                                      // 0x0300 (size: 0x1)
    class Uui_laptop_C* laptop;                                                       // 0x0308 (size: 0x8)

    void updPrice();
    int32 getPrice();
    void upd();
    void Construct();
    void BndEvt__button_upgDownloadSpd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_upgDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__uicomp_upgradeSlot_Button_58_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_upgradeSlot(int32 EntryPoint);
}; // Size: 0x310

#endif
