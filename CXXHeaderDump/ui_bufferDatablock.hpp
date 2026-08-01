#ifndef UE4SS_SDK_ui_bufferDatablock_HPP
#define UE4SS_SDK_ui_bufferDatablock_HPP

class Uui_bufferDatablock_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_delBuff;                                                    // 0x0268 (size: 0x8)
    class UButton* button_moveBuff;                                                   // 0x0270 (size: 0x8)
    class UEditableTextBox* EditableTextBox_62;                                       // 0x0278 (size: 0x8)
    class UTextBlock* text_db;                                                        // 0x0280 (size: 0x8)
    FString Data;                                                                     // 0x0288 (size: 0x10)
    int32 uid;                                                                        // 0x0298 (size: 0x4)
    class Uui_laptop_C* laptopUI;                                                     // 0x02A0 (size: 0x8)

    void Construct();
    void BndEvt__ui_bufferDatablock_button_moveBuff_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_bufferDatablock_button_moveBuff_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_bufferDatablock(int32 EntryPoint);
}; // Size: 0x2A8

#endif
