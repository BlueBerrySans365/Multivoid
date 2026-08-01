#ifndef UE4SS_SDK_ui_radarPoint_HPP
#define UE4SS_SDK_ui_radarPoint_HPP

class Uui_radarPoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0268 (size: 0x8)
    class UCanvasPanel* mainCanvas;                                                   // 0x0270 (size: 0x8)
    class UTextBlock* txt_coords;                                                     // 0x0278 (size: 0x8)
    float A;                                                                          // 0x0280 (size: 0x4)
    FVector coords;                                                                   // 0x0284 (size: 0xC)
    bool imp;                                                                         // 0x0290 (size: 0x1)
    FLinearColor Color;                                                               // 0x0294 (size: 0x10)
    float dissolveTime;                                                               // 0x02A4 (size: 0x4)
    bool hideCoords;                                                                  // 0x02A8 (size: 0x1)
    class AanalogDScreenTest_C* computer;                                             // 0x02B0 (size: 0x8)

    void SetSize(float Size);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ui_radarPoint(int32 EntryPoint);
}; // Size: 0x2B8

#endif
