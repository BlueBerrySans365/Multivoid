#ifndef UE4SS_SDK_ui_hint_HPP
#define UE4SS_SDK_ui_hint_HPP

class Uui_hint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* canv;                                                         // 0x0268 (size: 0x8)
    class UCanvasPanel* canvas_base;                                                  // 0x0270 (size: 0x8)
    class UImage* Image_102;                                                          // 0x0278 (size: 0x8)
    class URetainerBox* RetainerBox_80;                                               // 0x0280 (size: 0x8)
    class UTextBlock* Tex_infoTex;                                                    // 0x0288 (size: 0x8)
    float spring_X;                                                                   // 0x0290 (size: 0x4)
    float Targ_X;                                                                     // 0x0294 (size: 0x4)
    FFloatSpringState springState_X;                                                  // 0x0298 (size: 0x8)
    float ae;                                                                         // 0x02A0 (size: 0x4)
    float Mass;                                                                       // 0x02A4 (size: 0x4)
    float Pos;                                                                        // 0x02A8 (size: 0x4)
    float siz;                                                                        // 0x02AC (size: 0x4)
    bool resiz;                                                                       // 0x02B0 (size: 0x1)
    TEnumAsByte<enum_notifyType::Type> Type;                                          // 0x02B1 (size: 0x1)
    float spring_Y;                                                                   // 0x02B4 (size: 0x4)
    float Targ_Y;                                                                     // 0x02B8 (size: 0x4)
    FFloatSpringState springState_Y;                                                  // 0x02BC (size: 0x8)

    void begin(FText InText);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void del();
    void ExecuteUbergraph_ui_hint(int32 EntryPoint);
}; // Size: 0x2C4

#endif
