#ifndef UE4SS_SDK_uicomp_videoSlotEncrypted_HPP
#define UE4SS_SDK_uicomp_videoSlotEncrypted_HPP

class Uuicomp_videoSlotEncrypted_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_decodeImg;                                                  // 0x0268 (size: 0x8)
    class UButton* button_select;                                                     // 0x0270 (size: 0x8)
    class UCircularThrobber* CircularThrobber_35;                                     // 0x0278 (size: 0x8)
    class UEditableTextBox* etb_pass;                                                 // 0x0280 (size: 0x8)
    class UImage* Image_61;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_75;                                                           // 0x0290 (size: 0x8)
    class UImage* Image_148;                                                          // 0x0298 (size: 0x8)
    class UImage* Image_pic;                                                          // 0x02A0 (size: 0x8)
    class UImage* image_vid;                                                          // 0x02A8 (size: 0x8)
    class UWidgetSwitcher* switcher;                                                  // 0x02B0 (size: 0x8)
    class UTextBlock* text_filelize;                                                  // 0x02B8 (size: 0x8)
    class UTextBlock* text_filename;                                                  // 0x02C0 (size: 0x8)
    class UTextBlock* text_invalidPass;                                               // 0x02C8 (size: 0x8)
    class Uui_laptop_C* laptop;                                                       // 0x02D0 (size: 0x8)
    int32 ind;                                                                        // 0x02D8 (size: 0x4)
    Fstruct_video Info;                                                               // 0x02E0 (size: 0x40)
    TArray<uint8> ByteArray;                                                          // 0x0320 (size: 0x10)
    FString password;                                                                 // 0x0330 (size: 0x10)
    FString Filename;                                                                 // 0x0340 (size: 0x10)

    void goPrint();
    void OnFail_52A5895249A7E4A29640CFBB52385478(const FString Filename, FString fullPath, const int32 errorCode, const FString errorMessage);
    void OnSuccess_52A5895249A7E4A29640CFBB52385478(const FString Filename, FString fullPath, const int32 errorCode, const FString errorMessage);
    void BndEvt__ui_videoSlotLaptop_button_decodeImg_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_videoSlotLaptop_button_select_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_uicomp_videoSlotEncrypted(int32 EntryPoint);
}; // Size: 0x350

#endif
