#ifndef UE4SS_SDK_uicomp_signalSlot_HPP
#define UE4SS_SDK_uicomp_signalSlot_HPP

class Uuicomp_signalSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button;                                                            // 0x0268 (size: 0x8)
    class UButton* Button_70;                                                         // 0x0270 (size: 0x8)
    class UEditableTextBox* EditableTextBox_135;                                      // 0x0278 (size: 0x8)
    class UImage* image_border;                                                       // 0x0280 (size: 0x8)
    class UImage* image_line;                                                         // 0x0288 (size: 0x8)
    class UImage* image_sel;                                                          // 0x0290 (size: 0x8)
    class UTextBlock* text_iscopy;                                                    // 0x0298 (size: 0x8)
    class UTextBlock* text_signalDate;                                                // 0x02A0 (size: 0x8)
    class UTextBlock* text_signalDate_1;                                              // 0x02A8 (size: 0x8)
    Fstruct_signalDataDynamic Data;                                                   // 0x02B0 (size: 0x70)
    class Alaptop_C* laptop;                                                          // 0x0320 (size: 0x8)
    int32 ind;                                                                        // 0x0328 (size: 0x4)
    class UObject* playInerf;                                                         // 0x0330 (size: 0x8)
    class AanalogDScreenTest_C* analogPanal;                                          // 0x0338 (size: 0x8)

    void getSearchName(FName& Name);
    void updName();
    void setPos();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void sett();
    void resume();
    void triggerRandom();
    void Construct();
    void BndEvt__Button_70_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void setIndex(int32 Index);
    void ExecuteUbergraph_uicomp_signalSlot(int32 EntryPoint);
}; // Size: 0x340

#endif
