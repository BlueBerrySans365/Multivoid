#ifndef UE4SS_SDK_ui_alarmClock_HPP
#define UE4SS_SDK_ui_alarmClock_HPP

class Uui_alarmClock_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_178;                                                        // 0x0268 (size: 0x8)
    class UButton* button_arrowHour;                                                  // 0x0270 (size: 0x8)
    class UButton* button_arrowMin;                                                   // 0x0278 (size: 0x8)
    class UCanvasPanel* canvas_arrowHour;                                             // 0x0280 (size: 0x8)
    class UCanvasPanel* canvas_arrowMin;                                              // 0x0288 (size: 0x8)
    class UCanvasPanel* CanvasPanel_1;                                                // 0x0290 (size: 0x8)
    class UImage* Image_43;                                                           // 0x0298 (size: 0x8)
    class UImage* Image_45;                                                           // 0x02A0 (size: 0x8)
    class UImage* img_arrowHour;                                                      // 0x02A8 (size: 0x8)
    class UImage* img_arrowMinute;                                                    // 0x02B0 (size: 0x8)
    class UTextBlock* text_alarmTime;                                                 // 0x02B8 (size: 0x8)
    class UTextBlock* text_am;                                                        // 0x02C0 (size: 0x8)
    class AmainGamemode_C* GameMode;                                                  // 0x02C8 (size: 0x8)
    bool hold_min;                                                                    // 0x02D0 (size: 0x1)
    bool hold_hour;                                                                   // 0x02D1 (size: 0x1)
    bool isAM;                                                                        // 0x02D2 (size: 0x1)
    FText txt;                                                                        // 0x02D8 (size: 0x18)
    class Aprop_tableclock_C* tableclock;                                             // 0x02F0 (size: 0x8)

    void tickSound();
    void timeToAngle(int32 snap, float Segments, float& Angle);
    void setAMtext();
    void angleToTime(float Angle, float Segments, float& originalAngle, int32& snap);
    void setTimeText();
    void applyTimes();
    void Enter(class Aprop_tableclock_C* clock);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void quit();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__ui_alarmClock_button_arrowMin_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ui_alarmClock_button_arrowMin_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__ui_alarmClock_button_arrowHour_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ui_alarmClock_button_arrowHour_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__ui_alarmClock_Button_178_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_alarmClock(int32 EntryPoint);
}; // Size: 0x2F8

#endif
