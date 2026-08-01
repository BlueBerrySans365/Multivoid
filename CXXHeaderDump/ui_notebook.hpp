#ifndef UE4SS_SDK_ui_notebook_HPP
#define UE4SS_SDK_ui_notebook_HPP

class Uui_notebook_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_cr;                                                         // 0x0268 (size: 0x8)
    class UButton* Button_cr_1;                                                       // 0x0270 (size: 0x8)
    class UButton* Button_del;                                                        // 0x0278 (size: 0x8)
    class UButton* Button_page_next;                                                  // 0x0280 (size: 0x8)
    class UButton* Button_page_prev;                                                  // 0x0288 (size: 0x8)
    class UButton* Button_t_compl;                                                    // 0x0290 (size: 0x8)
    class UButton* Button_t_loan;                                                     // 0x0298 (size: 0x8)
    class UButton* Button_t_report;                                                   // 0x02A0 (size: 0x8)
    class UButton* Button_tg;                                                         // 0x02A8 (size: 0x8)
    class UCanvasPanel* canvas_tearoff;                                               // 0x02B0 (size: 0x8)
    class UCanvasPanel* canvas_tearoff_1;                                             // 0x02B8 (size: 0x8)
    class UImage* Image_back;                                                         // 0x02C0 (size: 0x8)
    class UMultiLineEditableText* MLET_lines1;                                        // 0x02C8 (size: 0x8)
    class UMultiLineEditableText* MLET_lines1_1;                                      // 0x02D0 (size: 0x8)
    class UMultiLineEditableText* MLET_lines2;                                        // 0x02D8 (size: 0x8)
    class UMultiLineEditableText* MLET_lines2_1;                                      // 0x02E0 (size: 0x8)
    class UMultiLineEditableText* MLET_text;                                          // 0x02E8 (size: 0x8)
    class UScrollBox* ScrollBox_58;                                                   // 0x02F0 (size: 0x8)
    class UTextBlock* txt_nums;                                                       // 0x02F8 (size: 0x8)
    class UVerticalBox* vbox_actions_1;                                               // 0x0300 (size: 0x8)
    class Aprop_notebook_C* clipboard;                                                // 0x0308 (size: 0x8)
    bool uneditable;                                                                  // 0x0310 (size: 0x1)
    TArray<FString> notebookText;                                                     // 0x0318 (size: 0x10)
    bool fontToggle;                                                                  // 0x0328 (size: 0x1)

    void SetFont();
    void proc2(TArray<FString>& InputPin, FString& A1);
    FString procSats(const TArray<FString>& SourceArray);
    void clampLines(FString sourceString, FString& NewParam);
    void quit(bool skipEdit);
    void clampPages();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Init(class Aprop_notebook_C* clipboard, bool uneditable);
    void BndEvt__Button_page_next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_page_prev_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_255_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_cr_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__MultiLineEditableText_86_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__Button_t_report_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_t_loan_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void F();
    void BndEvt__umg_clipboard_Button_tg_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_clipboard_Button_t_compl_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void checkForInvalid();
    void BndEvt__ui_clipboard_Button_cr_1_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_notebook_MLET_text_K2Node_ComponentBoundEvent_10_OnMultiLineEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void ExecuteUbergraph_ui_notebook(int32 EntryPoint);
}; // Size: 0x329

#endif
