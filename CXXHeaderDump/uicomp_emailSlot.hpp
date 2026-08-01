#ifndef UE4SS_SDK_uicomp_emailSlot_HPP
#define UE4SS_SDK_uicomp_emailSlot_HPP

class Uuicomp_emailSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_a;                                                          // 0x0268 (size: 0x8)
    class UButton* Button_del;                                                        // 0x0270 (size: 0x8)
    class UTextBlock* txt_summ;                                                       // 0x0278 (size: 0x8)
    class UTextBlock* txt_time;                                                       // 0x0280 (size: 0x8)
    class UTextBlock* txt_user;                                                       // 0x0288 (size: 0x8)
    int32 Index;                                                                      // 0x0290 (size: 0x4)
    class Uui_laptop_C* Master;                                                       // 0x0298 (size: 0x8)

    void getSearchName(FName& Name);
    void upd(Fstruct_email isnew);
    void resume();
    void triggerRandom();
    void BndEvt__Button_a_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_del_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void setIndex(int32 Index);
    void ExecuteUbergraph_uicomp_emailSlot(int32 EntryPoint);
}; // Size: 0x2A0

#endif
