#ifndef UE4SS_SDK_uicomp_texturePickerButton_HPP
#define UE4SS_SDK_uicomp_texturePickerButton_HPP

class Uuicomp_texturePickerButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_76;                                                         // 0x0268 (size: 0x8)
    class UImage* Image_51;                                                           // 0x0270 (size: 0x8)
    class UImage* img;                                                                // 0x0278 (size: 0x8)
    class UTexture2D* textureRef;                                                     // 0x0280 (size: 0x8)
    int32 Index;                                                                      // 0x0288 (size: 0x4)
    class Uui_texturePicker_C* Owner;                                                 // 0x0290 (size: 0x8)
    FName Filename;                                                                   // 0x0298 (size: 0x8)

    void Construct();
    void BndEvt__umg_texturePickerButton_Button_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_texturePickerButton(int32 EntryPoint);
}; // Size: 0x2A0

#endif
