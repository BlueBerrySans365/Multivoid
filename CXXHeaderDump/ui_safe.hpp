#ifndef UE4SS_SDK_ui_safe_HPP
#define UE4SS_SDK_ui_safe_HPP

class Uui_safe_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* canvas_handle;                                                // 0x0268 (size: 0x8)
    class UCanvasPanel* canvas_handle_shadow;                                         // 0x0270 (size: 0x8)
    class UCanvasPanel* canvas_scroll;                                                // 0x0278 (size: 0x8)
    class UCanvasPanel* canvas_scroll_shadow;                                         // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0290 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_151;                                                          // 0x02A0 (size: 0x8)
    class UImage* Image_429;                                                          // 0x02A8 (size: 0x8)
    class UImage* Image_518;                                                          // 0x02B0 (size: 0x8)
    class UImage* img_numberPos;                                                      // 0x02B8 (size: 0x8)
    class UTextBlock* Text_num_0;                                                     // 0x02C0 (size: 0x8)
    class UTextBlock* Text_num_1;                                                     // 0x02C8 (size: 0x8)
    class UTextBlock* Text_num_2;                                                     // 0x02D0 (size: 0x8)
    class UTextBlock* Text_num_3;                                                     // 0x02D8 (size: 0x8)
    class UTextBlock* Text_num_4;                                                     // 0x02E0 (size: 0x8)
    class UTextBlock* Text_num_5;                                                     // 0x02E8 (size: 0x8)
    class UTextBlock* Text_num_6;                                                     // 0x02F0 (size: 0x8)
    class UTextBlock* Text_num_7;                                                     // 0x02F8 (size: 0x8)
    class AmainGamemode_C* GameMode;                                                  // 0x0300 (size: 0x8)
    class Aprop_safe_C* safe;                                                         // 0x0308 (size: 0x8)
    Fui_safe_CEventQuit eventQuit;                                                    // 0x0310 (size: 0x10)
    void eventQuit();

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Reset();
    void upd();
    void setPos();
    void setNumber(int32 ID, int32 Number);
    void setScrollAngle();
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Enter(class Aprop_safe_C* safe);
    void quit();
    void ExecuteUbergraph_ui_safe(int32 EntryPoint);
    void eventQuit__DelegateSignature();
}; // Size: 0x320

#endif
