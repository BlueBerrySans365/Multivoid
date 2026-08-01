#ifndef UE4SS_SDK_ui_atm_HPP
#define UE4SS_SDK_ui_atm_HPP

class Uui_atm_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_56;                                                         // 0x0268 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_134;                                                          // 0x0280 (size: 0x8)
    class UScrollBox* ScrollBox_45;                                                   // 0x0288 (size: 0x8)
    class UTextBlock* text_points;                                                    // 0x0290 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntry_0;                                              // 0x0298 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntry_1;                                              // 0x02A0 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntry_2;                                              // 0x02A8 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntry_3;                                              // 0x02B0 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntry_4;                                              // 0x02B8 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntry_5;                                              // 0x02C0 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntry_6;                                              // 0x02C8 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntry_7;                                              // 0x02D0 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntry_8;                                              // 0x02D8 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntryStack_1;                                         // 0x02E0 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntryStack_2;                                         // 0x02E8 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntryStack_3;                                         // 0x02F0 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntryStack_4;                                         // 0x02F8 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntryStack_5;                                         // 0x0300 (size: 0x8)
    class Uui_atmEntry_C* ui_atmEntryStack_6;                                         // 0x0308 (size: 0x8)
    TArray<class Uui_atmEntry_C*> atmEntries;                                         // 0x0310 (size: 0x10)
    int32 playerPointsLeft;                                                           // 0x0320 (size: 0x4)
    TMap<FName, int32> bilList;                                                       // 0x0328 (size: 0x50)
    class Aatm_C* atm;                                                                // 0x0378 (size: 0x8)
    int32 withdrawCost;                                                               // 0x0380 (size: 0x4)
    int32 playerPoints;                                                               // 0x0384 (size: 0x4)
    TMap<FName, int32> bilList_default;                                               // 0x0388 (size: 0x50)

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Reset();
    void Count();
    void getBillCost(int32 Type, int32& cost);
    void upd();
    void quit();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void Open(class Aatm_C* atm);
    void Construct();
    void BndEvt__ui_atm_Button_56_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_atm(int32 EntryPoint);
}; // Size: 0x3D8

#endif
