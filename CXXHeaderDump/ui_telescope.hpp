#ifndef UE4SS_SDK_ui_telescope_HPP
#define UE4SS_SDK_ui_telescope_HPP

class Uui_telescope_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_87;                                         // 0x0268 (size: 0x8)
    class UButton* Button_37;                                                         // 0x0270 (size: 0x8)
    class UImage* img_rt;                                                             // 0x0278 (size: 0x8)
    class Atelescope_C* scope;                                                        // 0x0280 (size: 0x8)

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void Button(FKey Key, bool hold);
    void ExecuteUbergraph_ui_telescope(int32 EntryPoint);
}; // Size: 0x288

#endif
