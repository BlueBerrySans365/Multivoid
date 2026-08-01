#ifndef UE4SS_SDK_uicomp_dishStatusSlot_HPP
#define UE4SS_SDK_uicomp_dishStatusSlot_HPP

class Uuicomp_dishStatusSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* image_border;                                                       // 0x0268 (size: 0x8)
    class UImage* img_bar;                                                            // 0x0270 (size: 0x8)
    class UImage* img_satStatus;                                                      // 0x0278 (size: 0x8)
    class UImage* img_updImage;                                                       // 0x0280 (size: 0x8)
    class UTextBlock* text_symbol;                                                    // 0x0288 (size: 0x8)
    FLinearColor color_mid;                                                           // 0x0290 (size: 0x10)
    FLinearColor color_base;                                                          // 0x02A0 (size: 0x10)
    FLinearColor color_low;                                                           // 0x02B0 (size: 0x10)

    void setColors(FLinearColor color_base, FLinearColor color_mid, FLinearColor color_low);
    void setUpdImg(bool bPickA);
    void Construct();
    void ExecuteUbergraph_uicomp_dishStatusSlot(int32 EntryPoint);
}; // Size: 0x2C0

#endif
