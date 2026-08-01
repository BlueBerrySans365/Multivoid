#ifndef UE4SS_SDK_uicomp_videoSlot_HPP
#define UE4SS_SDK_uicomp_videoSlot_HPP

class Uuicomp_videoSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_delete;                                                     // 0x0268 (size: 0x8)
    class UButton* button_select;                                                     // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_61;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_75;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_137;                                                          // 0x0290 (size: 0x8)
    class UImage* Image_pic;                                                          // 0x0298 (size: 0x8)
    class UTextBlock* text_filelize;                                                  // 0x02A0 (size: 0x8)
    class UTextBlock* text_filename;                                                  // 0x02A8 (size: 0x8)
    class UTextBlock* text_length;                                                    // 0x02B0 (size: 0x8)
    class Uui_laptop_C* laptop;                                                       // 0x02B8 (size: 0x8)
    int32 ind;                                                                        // 0x02C0 (size: 0x4)
    Fstruct_video Info;                                                               // 0x02C8 (size: 0x40)
    FTimespan videoLength;                                                            // 0x0308 (size: 0x8)

    void SetDuration();
    void goPrint();
    void Construct();
    void BndEvt__ui_videoSlot_button_select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_videoSlot_button_delete_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_videoSlot(int32 EntryPoint);
}; // Size: 0x310

#endif
