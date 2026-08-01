#ifndef UE4SS_SDK_uicomp_signalMenuSlot_HPP
#define UE4SS_SDK_uicomp_signalMenuSlot_HPP

class Uuicomp_signalMenuSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_lvl0;                                                       // 0x0268 (size: 0x8)
    class UButton* Button_lvl1;                                                       // 0x0270 (size: 0x8)
    class UButton* Button_lvl2;                                                       // 0x0278 (size: 0x8)
    class UButton* Button_lvl3;                                                       // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_116;                                                          // 0x0290 (size: 0x8)
    class UImage* Image_168;                                                          // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_ind;                                                  // 0x02A0 (size: 0x8)
    class UTextBlock* TextBlock_name;                                                 // 0x02A8 (size: 0x8)
    class UTextBlock* TextBlock_prob;                                                 // 0x02B0 (size: 0x8)
    FName sig;                                                                        // 0x02B8 (size: 0x8)
    int32 Index;                                                                      // 0x02C0 (size: 0x4)
    float prob;                                                                       // 0x02C4 (size: 0x4)

    void Spawn(int32 decoded);
    void Construct();
    void BndEvt__Button_lvl0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_lvl1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_lvl2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_lvl3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_signalMenuSlot(int32 EntryPoint);
}; // Size: 0x2C8

#endif
