#ifndef UE4SS_SDK_uicomp_playerInvContainerSlot_HPP
#define UE4SS_SDK_uicomp_playerInvContainerSlot_HPP

class Uuicomp_playerInvContainerSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_action;                                                     // 0x0268 (size: 0x8)
    class UImage* img_prop;                                                           // 0x0270 (size: 0x8)
    class UTextBlock* txt_am;                                                         // 0x0278 (size: 0x8)
    class UTextBlock* txt_nm;                                                         // 0x0280 (size: 0x8)
    class UTextBlock* txt_v;                                                          // 0x0288 (size: 0x8)
    class UTextBlock* txt_w;                                                          // 0x0290 (size: 0x8)
    int32 ID;                                                                         // 0x0298 (size: 0x4)
    class Uui_playerInventory_C* Owner;                                               // 0x02A0 (size: 0x8)
    FName prop;                                                                       // 0x02A8 (size: 0x8)
    float Weight;                                                                     // 0x02B0 (size: 0x4)
    float Volume;                                                                     // 0x02B4 (size: 0x4)
    int32 Amount;                                                                     // 0x02B8 (size: 0x4)
    FName Tag;                                                                        // 0x02BC (size: 0x8)
    bool NewVar_0;                                                                    // 0x02C4 (size: 0x1)

    void changeInfo(int32 ID, class Uui_playerInventory_C* Owner, FName prop, FName Tag);
    void setAmount();
    void Init(const FName& ItemToFind, float Weight, float Volume);
    void BndEvt__umg_propInvSlor_Button_action_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__umg_propInvSlor_Button_action_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void pressButton();
    void Destruct();
    void visChanged(ESlateVisibility InVisibility);
    void Construct();
    void ExecuteUbergraph_uicomp_playerInvContainerSlot(int32 EntryPoint);
}; // Size: 0x2C5

#endif
