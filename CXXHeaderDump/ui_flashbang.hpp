#ifndef UE4SS_SDK_ui_flashbang_HPP
#define UE4SS_SDK_ui_flashbang_HPP

class Uui_flashbang_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* img;                                                                // 0x0268 (size: 0x8)
    float Alpha;                                                                      // 0x0270 (size: 0x4)
    FLinearColor color_A;                                                             // 0x0274 (size: 0x10)
    FLinearColor color_B;                                                             // 0x0284 (size: 0x10)
    float Time;                                                                       // 0x0294 (size: 0x4)
    float exp_color;                                                                  // 0x0298 (size: 0x4)
    float exp_opacity;                                                                // 0x029C (size: 0x4)
    float Opacity;                                                                    // 0x02A0 (size: 0x4)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_ui_flashbang(int32 EntryPoint);
}; // Size: 0x2A4

#endif
