#ifndef UE4SS_SDK_uicomp_serverMG_bitfitElement_HPP
#define UE4SS_SDK_uicomp_serverMG_bitfitElement_HPP

class Uuicomp_serverMG_bitfitElement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_exit;                                                       // 0x0268 (size: 0x8)
    class UImage* Image_119;                                                          // 0x0270 (size: 0x8)
    class UTextBlock* text_bit;                                                       // 0x0278 (size: 0x8)
    class UTextBlock* text_buttonbit;                                                 // 0x0280 (size: 0x8)
    bool Bit;                                                                         // 0x0288 (size: 0x1)
    bool buttonBit;                                                                   // 0x0289 (size: 0x1)

    bool checkBit();
    void randomBit();
    void setButtonBit(bool Bit);
    void setMovingBitPosition(float A);
    void setBit(bool Bit);
    void BndEvt__uicomp_serverMG_bitfitElement_button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_serverMG_bitfitElement(int32 EntryPoint);
}; // Size: 0x28A

#endif
