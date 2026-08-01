#ifndef UE4SS_SDK_uicomp_statsSlot_HPP
#define UE4SS_SDK_uicomp_statsSlot_HPP

class Uuicomp_statsSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_40;                                                           // 0x0268 (size: 0x8)
    class UTextBlock* txt_stat;                                                       // 0x0270 (size: 0x8)
    class UTextBlock* txt_text;                                                       // 0x0278 (size: 0x8)
    FText Name;                                                                       // 0x0280 (size: 0x18)
    float stat;                                                                       // 0x0298 (size: 0x4)
    FText Suffix;                                                                     // 0x02A0 (size: 0x18)
    float Divisor;                                                                    // 0x02B8 (size: 0x4)
    bool timeValue;                                                                   // 0x02BC (size: 0x1)

    void upd(float stat);
    void Construct();
    void ExecuteUbergraph_uicomp_statsSlot(int32 EntryPoint);
}; // Size: 0x2BD

#endif
