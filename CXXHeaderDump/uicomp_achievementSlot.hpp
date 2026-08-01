#ifndef UE4SS_SDK_uicomp_achievementSlot_HPP
#define UE4SS_SDK_uicomp_achievementSlot_HPP

class Uuicomp_achievementSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* bttn;                                                              // 0x0268 (size: 0x8)
    class UImage* Img_adv;                                                            // 0x0270 (size: 0x8)
    class UImage* img_back;                                                           // 0x0278 (size: 0x8)
    class UImage* img_sel;                                                            // 0x0280 (size: 0x8)
    class UTextBlock* txt_adv;                                                        // 0x0288 (size: 0x8)
    class Uui_achievements_C* Main;                                                   // 0x0290 (size: 0x8)
    Fstruct_achievement Data;                                                         // 0x0298 (size: 0x50)
    int32 ind;                                                                        // 0x02E8 (size: 0x4)

    void check(class Uuicomp_achievementSlot_C* ac);
    void upd(Fstruct_achievement Data);
    void BndEvt__bttn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_achievementSlot(int32 EntryPoint);
}; // Size: 0x2EC

#endif
