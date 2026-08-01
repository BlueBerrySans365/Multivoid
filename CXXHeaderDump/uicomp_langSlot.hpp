#ifndef UE4SS_SDK_uicomp_langSlot_HPP
#define UE4SS_SDK_uicomp_langSlot_HPP

class Uuicomp_langSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_90;                                                         // 0x0268 (size: 0x8)
    class UCanvasPanel* canvas_v_res;                                                 // 0x0270 (size: 0x8)
    class UImage* Image_179;                                                          // 0x0278 (size: 0x8)
    class UImage* img_sel;                                                            // 0x0280 (size: 0x8)
    class UTextBlock* text_name;                                                      // 0x0288 (size: 0x8)
    class UTextBlock* Text_num;                                                       // 0x0290 (size: 0x8)
    FString Culture;                                                                  // 0x0298 (size: 0x10)
    FText Name;                                                                       // 0x02A8 (size: 0x18)
    int32 N;                                                                          // 0x02C0 (size: 0x4)

    void Construct();
    void BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_langSlot(int32 EntryPoint);
}; // Size: 0x2C4

#endif
