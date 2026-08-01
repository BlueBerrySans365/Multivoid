#ifndef UE4SS_SDK_uicomp_playerInvSlot_HPP
#define UE4SS_SDK_uicomp_playerInvSlot_HPP

class Uuicomp_playerInvSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_action;                                                     // 0x0268 (size: 0x8)
    class UButton* Button_d;                                                          // 0x0270 (size: 0x8)
    class UButton* Button_u;                                                          // 0x0278 (size: 0x8)
    class UImage* Image_421;                                                          // 0x0280 (size: 0x8)
    class UImage* img_prop;                                                           // 0x0288 (size: 0x8)
    class UTextBlock* txt_am;                                                         // 0x0290 (size: 0x8)
    class UTextBlock* txt_nm;                                                         // 0x0298 (size: 0x8)
    class UTextBlock* txt_v;                                                          // 0x02A0 (size: 0x8)
    class UTextBlock* txt_w;                                                          // 0x02A8 (size: 0x8)
    int32 ID;                                                                         // 0x02B0 (size: 0x4)
    int32 idList;                                                                     // 0x02B4 (size: 0x4)
    class Uui_playerInventory_C* Owner;                                               // 0x02B8 (size: 0x8)
    FName prop;                                                                       // 0x02C0 (size: 0x8)
    FName Tag;                                                                        // 0x02C8 (size: 0x8)
    int32 idLast;                                                                     // 0x02D0 (size: 0x4)
    int32 Amount;                                                                     // 0x02D4 (size: 0x4)
    float Weight;                                                                     // 0x02D8 (size: 0x4)
    float Volume;                                                                     // 0x02DC (size: 0x4)

    void changeInfo(int32 ID, int32 idList, class Uui_playerInventory_C* Owner, FName prop, FName Tag, int32 idLast);
    void setAmount();
    void sel();
    void Init_slot(const FName& ItemToFind, float Weight, float Volume);
    void BndEvt__Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_d_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_u_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_propInvSlor_Button_action_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__umg_propInvSlor_Button_action_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_playerInvSlot(int32 EntryPoint);
}; // Size: 0x2E0

#endif
