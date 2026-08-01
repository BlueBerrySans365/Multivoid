#ifndef UE4SS_SDK_ui_placeTp_HPP
#define UE4SS_SDK_ui_placeTp_HPP

class Uui_placeTp_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0268 (size: 0x8)
    class UTextBlock* tex_name;                                                       // 0x0270 (size: 0x8)
    FVector Loc;                                                                      // 0x0278 (size: 0xC)
    FString Name;                                                                     // 0x0288 (size: 0x10)

    void BndEvt__umg_placeTp_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_ui_placeTp(int32 EntryPoint);
}; // Size: 0x298

#endif
