#ifndef UE4SS_SDK_uicomp_photoSlot_HPP
#define UE4SS_SDK_uicomp_photoSlot_HPP

class Uuicomp_photoSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button;                                                            // 0x0268 (size: 0x8)
    class UButton* Button_65;                                                         // 0x0270 (size: 0x8)
    class UButton* Button_152;                                                        // 0x0278 (size: 0x8)
    class UButton* Button_print;                                                      // 0x0280 (size: 0x8)
    class UImage* Image_137;                                                          // 0x0288 (size: 0x8)
    class UImage* Image_pic;                                                          // 0x0290 (size: 0x8)
    class UTexture* tex;                                                              // 0x0298 (size: 0x8)
    class Uui_laptop_C* laptop;                                                       // 0x02A0 (size: 0x8)
    int32 ind;                                                                        // 0x02A8 (size: 0x4)

    void goPrint();
    void Construct();
    void BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_152_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_phSlot_Button_print_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_photoSlot(int32 EntryPoint);
}; // Size: 0x2AC

#endif
