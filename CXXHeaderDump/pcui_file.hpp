#ifndef UE4SS_SDK_pcui_file_HPP
#define UE4SS_SDK_pcui_file_HPP

class Upcui_file_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0268 (size: 0x8)
    class UCanvasPanel* CanvasPanel_1;                                                // 0x0270 (size: 0x8)
    class UEditableTextBox* EditableTextBox_41;                                       // 0x0278 (size: 0x8)
    class UImage* Image_37;                                                           // 0x0280 (size: 0x8)
    class UImage* image_selected;                                                     // 0x0288 (size: 0x8)
    class USpacer* Spacer_50;                                                         // 0x0290 (size: 0x8)
    FName Name;                                                                       // 0x0298 (size: 0x8)
    FString fileType;                                                                 // 0x02A0 (size: 0x10)
    bool isFolder;                                                                    // 0x02B0 (size: 0x1)
    int32 Downscale;                                                                  // 0x02B4 (size: 0x4)
    float Opacity;                                                                    // 0x02B8 (size: 0x4)
    class UTexture2D* overrideIcon;                                                   // 0x02C0 (size: 0x8)
    class Upcui_windowtest_C* windowParent;                                           // 0x02C8 (size: 0x8)
    bool select;                                                                      // 0x02D0 (size: 0x1)
    bool selectVisible;                                                               // 0x02D1 (size: 0x1)

    void isSelected();
    void insertRightNext(bool Insert);
    void setFileName(FString NewName);
    void upd();
    void Construct();
    void BndEvt__pcui_file_EditableTextBox_41_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__pcui_file_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__pcui_file_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__pcui_file_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_pcui_file(int32 EntryPoint);
}; // Size: 0x2D2

#endif
