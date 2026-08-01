#ifndef UE4SS_SDK_umg_invaders_HPP
#define UE4SS_SDK_umg_invaders_HPP

class Uumg_invaders_C : public UUserWidget
{
    class UCanvasPanel* canvas_menu;                                                  // 0x0260 (size: 0x8)
    class UImage* Image_103;                                                          // 0x0268 (size: 0x8)
    class UTextBlock* txt_hscore;                                                     // 0x0270 (size: 0x8)
    class UTextBlock* txt_score;                                                      // 0x0278 (size: 0x8)
    class UTextBlock* txt_wave;                                                       // 0x0280 (size: 0x8)
    class Amg_invaders_C* Owner;                                                      // 0x0288 (size: 0x8)

    void upd();
}; // Size: 0x290

#endif
