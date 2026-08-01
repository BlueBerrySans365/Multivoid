#ifndef UE4SS_SDK_uicomp_serverWireMG_button_HPP
#define UE4SS_SDK_uicomp_serverWireMG_button_HPP

class Uuicomp_serverWireMG_button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_game_wireTop_3;                                             // 0x0268 (size: 0x8)
    class UCanvasPanel* canvas_bottomConnect;                                         // 0x0270 (size: 0x8)
    class UCanvasPanel* canvas_lineOrigin;                                            // 0x0278 (size: 0x8)
    class UImage* Image_242;                                                          // 0x0280 (size: 0x8)
    class UImage* img_color_A;                                                        // 0x0288 (size: 0x8)
    class UImage* img_color_B;                                                        // 0x0290 (size: 0x8)
    class UImage* img_colorRes;                                                       // 0x0298 (size: 0x8)
    class UImage* img_connectedBottom;                                                // 0x02A0 (size: 0x8)
    class UImage* img_line;                                                           // 0x02A8 (size: 0x8)
    class UWidgetSwitcher* switcher;                                                  // 0x02B0 (size: 0x8)
    class UTextBlock* text_operation;                                                 // 0x02B8 (size: 0x8)
    class UTextBlock* txt_color_A;                                                    // 0x02C0 (size: 0x8)
    class UTextBlock* txt_color_B;                                                    // 0x02C8 (size: 0x8)
    class UTextBlock* txt_color_res;                                                  // 0x02D0 (size: 0x8)
    int32 Index;                                                                      // 0x02D8 (size: 0x4)
    int32 Type;                                                                       // 0x02DC (size: 0x4)
    FLinearColor color_A;                                                             // 0x02E0 (size: 0x10)
    FLinearColor color_B;                                                             // 0x02F0 (size: 0x10)
    uint8 Operation;                                                                  // 0x0300 (size: 0x1)
    FLinearColor color_res;                                                           // 0x0304 (size: 0x10)
    class Uui_serverMinigame_C* Owner;                                                // 0x0318 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* connectedTo;                                 // 0x0320 (size: 0x8)
    bool isDragging;                                                                  // 0x0328 (size: 0x1)
    FTimerHandle timer_serverMG_Dragging;                                             // 0x0330 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* correctConnected;                            // 0x0338 (size: 0x8)
    bool isConnectedCorrectly;                                                        // 0x0340 (size: 0x1)
    bool IsConnected;                                                                 // 0x0341 (size: 0x1)

    void SetActive(bool bPickA);
    void disconnect();
    void checkAB();
    void processColor(FLinearColor A, FLinearColor B, FLinearColor& Result);
    void connectLineToConnector();
    void connectLine(FVector2D B, bool Connect);
    void randomize_operation();
    void randomize_color();
    void Init(class Uui_serverMinigame_C* Owner);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__uicomp_serverWireMG_button_button_game_wireTop_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_serverWireMG_button(int32 EntryPoint);
}; // Size: 0x342

#endif
