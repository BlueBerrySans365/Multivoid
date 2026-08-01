#ifndef UE4SS_SDK_uicomp_serverMG_pipe_HPP
#define UE4SS_SDK_uicomp_serverMG_pipe_HPP

class Uuicomp_serverMG_pipe_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_click;                                                      // 0x0268 (size: 0x8)
    class UImage* image_obstacle;                                                     // 0x0270 (size: 0x8)
    class UImage* image_packet;                                                       // 0x0278 (size: 0x8)
    class UImage* image_pipe_C;                                                       // 0x0280 (size: 0x8)
    class UImage* image_pipe_C_1;                                                     // 0x0288 (size: 0x8)
    class UImage* image_pipe_S;                                                       // 0x0290 (size: 0x8)
    class UImage* image_pipe_T1;                                                      // 0x0298 (size: 0x8)
    class UImage* image_pipe_T2;                                                      // 0x02A0 (size: 0x8)
    class UImage* image_pipe_X1;                                                      // 0x02A8 (size: 0x8)
    class UImage* image_pipe_X2;                                                      // 0x02B0 (size: 0x8)
    class UWidgetSwitcher* switcher_type;                                             // 0x02B8 (size: 0x8)
    bool Active;                                                                      // 0x02C0 (size: 0x1)
    bool tracked;                                                                     // 0x02C1 (size: 0x1)
    int32 Direction;                                                                  // 0x02C4 (size: 0x4)
    int32 Type;                                                                       // 0x02C8 (size: 0x4)
    class Uui_serverMinigame_C* Owner;                                                // 0x02D0 (size: 0x8)
    bool packet;                                                                      // 0x02D8 (size: 0x1)
    bool obstacle;                                                                    // 0x02D9 (size: 0x1)
    bool blocked_up;                                                                  // 0x02DA (size: 0x1)
    bool blocked_down;                                                                // 0x02DB (size: 0x1)
    bool blocked_right;                                                               // 0x02DC (size: 0x1)
    bool blocked_left;                                                                // 0x02DD (size: 0x1)
    int32 Index;                                                                      // 0x02E0 (size: 0x4)

    void Spin();
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void setPacket(bool packet);
    void setObstacle(bool obstacle);
    void Reset();
    void Turn(FIntPoint dirIn, FIntPoint& dirOut, bool& Hit, bool& packet);
    void isBlocked(int32 fromDirection, bool& bLocked, bool& opposite);
    void updObstacle();
    void updPacket();
    void updDirection();
    void updType();
    void upd();
    void Construct();
    void BndEvt__uicomp_serverMG_pipe_button_click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_uicomp_serverMG_pipe(int32 EntryPoint);
}; // Size: 0x2E4

#endif
