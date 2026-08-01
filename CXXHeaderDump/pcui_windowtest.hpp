#ifndef UE4SS_SDK_pcui_windowtest_HPP
#define UE4SS_SDK_pcui_windowtest_HPP

class Upcui_windowtest_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_close;                                                      // 0x0268 (size: 0x8)
    class UButton* button_full;                                                       // 0x0270 (size: 0x8)
    class UButton* button_full_1;                                                     // 0x0278 (size: 0x8)
    class UButton* button_grab;                                                       // 0x0280 (size: 0x8)
    class UButton* button_resize_bottom;                                              // 0x0288 (size: 0x8)
    class UButton* button_resize_bottomLeft;                                          // 0x0290 (size: 0x8)
    class UButton* button_resize_bottomRight;                                         // 0x0298 (size: 0x8)
    class UButton* button_resize_left;                                                // 0x02A0 (size: 0x8)
    class UButton* button_resize_right;                                               // 0x02A8 (size: 0x8)
    class UButton* button_resize_top;                                                 // 0x02B0 (size: 0x8)
    class UButton* button_resize_topLeft;                                             // 0x02B8 (size: 0x8)
    class UButton* button_resize_topRight;                                            // 0x02C0 (size: 0x8)
    class UCanvasPanel* canvas_app;                                                   // 0x02C8 (size: 0x8)
    class UCanvasPanel* canvas_insert;                                                // 0x02D0 (size: 0x8)
    class UCanvasPanel* canvas_workingArea;                                           // 0x02D8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02E0 (size: 0x8)
    class UWidgetSwitcher* switcher;                                                  // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock_61;                                                   // 0x02F0 (size: 0x8)
    class UWrapBox* WrapBox_0;                                                        // 0x02F8 (size: 0x8)
    FVector2D mousePosition;                                                          // 0x0300 (size: 0x8)
    FVector2D corner_TopLeft;                                                         // 0x0308 (size: 0x8)
    FVector2D corner_BottomRight;                                                     // 0x0310 (size: 0x8)
    FVector2D relativeGrab_top;                                                       // 0x0318 (size: 0x8)
    FVector2D relativeGrab_bottom;                                                    // 0x0320 (size: 0x8)
    class UCanvasPanelSlot* canvasSlot;                                               // 0x0328 (size: 0x8)
    class AmainGamemode_C* GameMode;                                                  // 0x0330 (size: 0x8)
    class Uui_laptop_C* laptop;                                                       // 0x0338 (size: 0x8)
    TEnumAsByte<enum_pcWindowGrabType::Type> grabType;                                // 0x0340 (size: 0x1)
    class UCanvasPanelSlot* canvas_parent;                                            // 0x0348 (size: 0x8)
    bool spawnSet;                                                                    // 0x0350 (size: 0x1)
    FVector2D spawn_position;                                                         // 0x0354 (size: 0x8)
    FVector2D spawn_size;                                                             // 0x035C (size: 0x8)
    bool Fullscreen;                                                                  // 0x0364 (size: 0x1)
    bool updateDropPosition;                                                          // 0x0365 (size: 0x1)
    class Upcui_file_C* fileOverCursor;                                               // 0x0368 (size: 0x8)
    int32 insertAt;                                                                   // 0x0370 (size: 0x4)

    void updateHoverOverFile(class Upcui_file_C* fileOverCursor);
    FVector2D GetWindowSize();
    void increaseHeight();
    void spawnFunction();
    void changeGrabType(TEnumAsByte<enum_pcWindowGrabType::Type> grabType);
    void processPosition(FVector2D InVec, FVector2D& outVec);
    void resizeWindow();
    void SetMousePosition();
    void Construct();
    void BndEvt__uicomp_windowtest_button_grab_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_grab_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_topLeft_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void begin_grab(TEnumAsByte<enum_pcWindowGrabType::Type> grabType);
    void stop_grab();
    void BndEvt__uicomp_windowtest_button_resize_topLeft_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_bottomRight_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_bottomRight_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_topRight_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_topRight_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_top_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_top_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_right_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_right_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_bottom_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_bottom_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_left_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_left_K2Node_ComponentBoundEvent_15_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_bottomLeft_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_resize_bottomLeft_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_close_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__uicomp_windowtest_button_full_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__pcui_windowtest_button_full_1_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_pcui_windowtest(int32 EntryPoint);
}; // Size: 0x374

#endif
