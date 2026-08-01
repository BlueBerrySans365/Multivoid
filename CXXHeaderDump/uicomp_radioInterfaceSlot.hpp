#ifndef UE4SS_SDK_uicomp_radioInterfaceSlot_HPP
#define UE4SS_SDK_uicomp_radioInterfaceSlot_HPP

class Uuicomp_radioInterfaceSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_27;                                                         // 0x0268 (size: 0x8)
    class UImage* Image_91;                                                           // 0x0270 (size: 0x8)
    class UTextBlock* txt_name;                                                       // 0x0278 (size: 0x8)
    class UTextBlock* txt_url;                                                        // 0x0280 (size: 0x8)
    class Uui_radioInterface_C* Owner;                                                // 0x0288 (size: 0x8)
    Fstruct_tv Data;                                                                  // 0x0290 (size: 0x28)

    void Filter(FString prompt);
    void select();
    void Construct();
    void BndEvt__umg_radioStSlot_Button_27_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_radioInterfaceSlot(int32 EntryPoint);
}; // Size: 0x2B8

#endif
