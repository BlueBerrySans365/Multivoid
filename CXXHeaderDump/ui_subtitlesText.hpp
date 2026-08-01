#ifndef UE4SS_SDK_ui_subtitlesText_HPP
#define UE4SS_SDK_ui_subtitlesText_HPP

class Uui_subtitlesText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_58;                                                           // 0x0268 (size: 0x8)
    class UTextBlock* text_text;                                                      // 0x0270 (size: 0x8)
    float Time;                                                                       // 0x0278 (size: 0x4)
    FText Text;                                                                       // 0x0280 (size: 0x18)
    TEnumAsByte<enum_char::Type> char;                                                // 0x0298 (size: 0x1)
    float A;                                                                          // 0x029C (size: 0x4)
    FString stringtext;                                                               // 0x02A0 (size: 0x10)
    float Length;                                                                     // 0x02B0 (size: 0x4)
    float time_total;                                                                 // 0x02B4 (size: 0x4)
    float Timer;                                                                      // 0x02B8 (size: 0x4)
    float customTime;                                                                 // 0x02BC (size: 0x4)
    bool End;                                                                         // 0x02C0 (size: 0x1)
    float Speed;                                                                      // 0x02C4 (size: 0x4)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ui_subtitlesText(int32 EntryPoint);
}; // Size: 0x2C8

#endif
