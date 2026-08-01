#ifndef UE4SS_SDK_ui_achievementPopup_HPP
#define UE4SS_SDK_ui_achievementPopup_HPP

class Uui_achievementPopup_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* canvasResizer;                                                // 0x0268 (size: 0x8)
    class UImage* Image_27;                                                           // 0x0270 (size: 0x8)
    class UImage* img_achievement;                                                    // 0x0278 (size: 0x8)
    class UImage* img_bar;                                                            // 0x0280 (size: 0x8)
    class UTextBlock* txt_ach;                                                        // 0x0288 (size: 0x8)
    class UTextBlock* txt_name;                                                       // 0x0290 (size: 0x8)
    class UTextBlock* txt_progress;                                                   // 0x0298 (size: 0x8)
    float A;                                                                          // 0x02A0 (size: 0x4)
    bool dir;                                                                         // 0x02A4 (size: 0x1)
    bool ac;                                                                          // 0x02A5 (size: 0x1)
    Fstruct_achievement Data;                                                         // 0x02A8 (size: 0x50)
    int32 Type;                                                                       // 0x02F8 (size: 0x4)

    void upd(Fstruct_achievement Data);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_ui_achievementPopup(int32 EntryPoint);
}; // Size: 0x2FC

#endif
