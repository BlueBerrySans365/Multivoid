#ifndef UE4SS_SDK_ui_floppyDatablock_HPP
#define UE4SS_SDK_ui_floppyDatablock_HPP

class Uui_floppyDatablock_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_50;                                                         // 0x0268 (size: 0x8)
    class UButton* button_decodeImg;                                                  // 0x0270 (size: 0x8)
    class UButton* button_erase;                                                      // 0x0278 (size: 0x8)
    class UButton* button_floppyEject;                                                // 0x0280 (size: 0x8)
    class UButton* button_moveBuffer;                                                 // 0x0288 (size: 0x8)
    class UCheckBox* checkbox_confirm;                                                // 0x0290 (size: 0x8)
    class UCircularThrobber* CircularThrobber_54;                                     // 0x0298 (size: 0x8)
    class UEditableTextBox* etb_passImg;                                              // 0x02A0 (size: 0x8)
    class UExpandableArea* ExpandableArea_27;                                         // 0x02A8 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02B0 (size: 0x8)
    class UImage* img_image;                                                          // 0x02B8 (size: 0x8)
    class UImage* img_image_decode;                                                   // 0x02C0 (size: 0x8)
    class UWidgetSwitcher* switcher;                                                  // 0x02C8 (size: 0x8)
    class UWidgetSwitcher* swticher_decodeImage;                                      // 0x02D0 (size: 0x8)
    class UTextBlock* text_db;                                                        // 0x02D8 (size: 0x8)
    class UTextBlock* text_decodeImageName;                                           // 0x02E0 (size: 0x8)
    class UTextBlock* text_imageName;                                                 // 0x02E8 (size: 0x8)
    class UTextBlock* text_textData;                                                  // 0x02F0 (size: 0x8)
    class UTextBlock* text_textData_3;                                                // 0x02F8 (size: 0x8)
    class Uuicomp_videoSlotEncrypted_C* ui_videoSlotLaptop;                           // 0x0300 (size: 0x8)
    FString Data;                                                                     // 0x0308 (size: 0x10)
    int32 Index;                                                                      // 0x0318 (size: 0x4)
    int32 Type;                                                                       // 0x031C (size: 0x4)
    TArray<FString> Types;                                                            // 0x0320 (size: 0x10)
    FString data_copy;                                                                // 0x0330 (size: 0x10)
    class UTexture2D* decodedImage;                                                   // 0x0340 (size: 0x8)
    TArray<uint8> imgBytes;                                                           // 0x0348 (size: 0x10)
    FString ID;                                                                       // 0x0358 (size: 0x10)
    FString imgPassword;                                                              // 0x0368 (size: 0x10)
    FString imgName;                                                                  // 0x0378 (size: 0x10)
    class Uui_laptop_C* laptop;                                                       // 0x0388 (size: 0x8)
    int32 uid;                                                                        // 0x0390 (size: 0x4)

    void findType();
    void OnLoaded_D71392A844D2DC296BED008B36B30B96(class UObject* Loaded);
    void OnFail_CCE2402A4DF4F9DD92304AA32DE06888(const class UTexture2D* Texture, const int32 errorCode, const FString errorMessage);
    void OnSuccess_CCE2402A4DF4F9DD92304AA32DE06888(const class UTexture2D* Texture, const int32 errorCode, const FString errorMessage);
    void Construct();
    void BndEvt__ui_floppyDatablock_Button_50_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_floppyDatablock_button_decodeImg_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_floppyDatablock_button_moveBuffer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_floppyDatablock_button_erase_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_floppyDatablock(int32 EntryPoint);
}; // Size: 0x394

#endif
