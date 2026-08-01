#ifndef UE4SS_SDK_ui_vcamOverlay_HPP
#define UE4SS_SDK_ui_vcamOverlay_HPP

class Uui_vcamOverlay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0268 (size: 0x8)
    class UImage* Image_95;                                                           // 0x0270 (size: 0x8)
    class URetainerBox* RetainerBox_66;                                               // 0x0278 (size: 0x8)
    class UTextBlock* tex_date;                                                       // 0x0280 (size: 0x8)
    class UTextBlock* Text_time;                                                      // 0x0288 (size: 0x8)
    class UTextBlock* text_timer;                                                     // 0x0290 (size: 0x8)
    class UTextBlock* TextBlock_9;                                                    // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_45;                                                   // 0x02A0 (size: 0x8)

    void ExecuteUbergraph_ui_vcamOverlay(int32 EntryPoint);
}; // Size: 0x2A8

#endif
