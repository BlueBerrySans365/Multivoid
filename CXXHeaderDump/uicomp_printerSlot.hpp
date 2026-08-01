#ifndef UE4SS_SDK_uicomp_printerSlot_HPP
#define UE4SS_SDK_uicomp_printerSlot_HPP

class Uuicomp_printerSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_64;                                                         // 0x0268 (size: 0x8)
    class UImage* Image_260;                                                          // 0x0270 (size: 0x8)
    class UImage* img;                                                                // 0x0278 (size: 0x8)
    class UImage* img_error;                                                          // 0x0280 (size: 0x8)
    class UTextBlock* txt_name;                                                       // 0x0288 (size: 0x8)
    FString Name;                                                                     // 0x0290 (size: 0x10)
    class Uui_printer_C* Owner;                                                       // 0x02A0 (size: 0x8)
    bool Error;                                                                       // 0x02A8 (size: 0x1)

    void Filter(FString prompt);
    void upd();
    void BndEvt__umg_printerSlot_Button_64_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_uicomp_printerSlot(int32 EntryPoint);
}; // Size: 0x2A9

#endif
