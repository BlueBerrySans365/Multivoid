#ifndef UE4SS_SDK_ui_lambUI_HPP
#define UE4SS_SDK_ui_lambUI_HPP

class Uui_lambUI_C : public UUserWidget
{
    class UImage* Image;                                                              // 0x0260 (size: 0x8)
    class UImage* Image_37;                                                           // 0x0268 (size: 0x8)
    class UImage* Image_head;                                                         // 0x0270 (size: 0x8)
    class UCanvasPanel* Pivot;                                                        // 0x0278 (size: 0x8)
    class Aprop_lambert_C* lamb;                                                      // 0x0280 (size: 0x8)

    void setLoc();
}; // Size: 0x288

#endif
