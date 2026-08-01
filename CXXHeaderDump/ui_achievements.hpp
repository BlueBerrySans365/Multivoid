#ifndef UE4SS_SDK_ui_achievements_HPP
#define UE4SS_SDK_ui_achievements_HPP

class Uui_achievements_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_exit;                                                       // 0x0268 (size: 0x8)
    class UImage* Image_302;                                                          // 0x0270 (size: 0x8)
    class UImage* img_ach;                                                            // 0x0278 (size: 0x8)
    class UImage* img_bar;                                                            // 0x0280 (size: 0x8)
    class UScrollBox* ScrollBox_ach;                                                  // 0x0288 (size: 0x8)
    class UScrollBox* ScrollBox_achDesc;                                              // 0x0290 (size: 0x8)
    class UTextBlock* txt_ach;                                                        // 0x0298 (size: 0x8)
    class UTextBlock* txt_desc;                                                       // 0x02A0 (size: 0x8)
    class UTextBlock* txt_progress;                                                   // 0x02A8 (size: 0x8)
    TArray<class Uuicomp_achievementSlot_C*> Slots;                                   // 0x02B0 (size: 0x10)
    class Uuicomp_achievementSlot_C* activeSlot;                                      // 0x02C0 (size: 0x8)

    void getSearchName(FName& Name);
    void select(class Uuicomp_achievementSlot_C* activeSlot);
    void upd();
    void setIndex(int32 Index);
    void triggerRandom();
    void BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void resume();
    void ExecuteUbergraph_ui_achievements(int32 EntryPoint);
}; // Size: 0x2C8

#endif
