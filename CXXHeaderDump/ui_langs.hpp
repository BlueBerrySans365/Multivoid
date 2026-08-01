#ifndef UE4SS_SDK_ui_langs_HPP
#define UE4SS_SDK_ui_langs_HPP

class Uui_langs_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0268 (size: 0x8)
    class UButton* button_exit;                                                       // 0x0270 (size: 0x8)
    class UImage* Image_302;                                                          // 0x0278 (size: 0x8)
    class UScrollBox* scrBox_list;                                                    // 0x0280 (size: 0x8)
    TArray<class Uuicomp_langSlot_C*> Slots;                                          // 0x0288 (size: 0x10)
    class Uui_settings_C* Settings;                                                   // 0x0298 (size: 0x8)
    TMap<class FString, class FText> langs_2;                                         // 0x02A0 (size: 0x50)

    void getSearchName(FName& Name);
    void setIndex(int32 Index);
    void triggerRandom();
    void BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void resume();
    void BndEvt__ui_langs_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_langs(int32 EntryPoint);
}; // Size: 0x2F0

#endif
