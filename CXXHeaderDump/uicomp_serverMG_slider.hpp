#ifndef UE4SS_SDK_uicomp_serverMG_slider_HPP
#define UE4SS_SDK_uicomp_serverMG_slider_HPP

class Uuicomp_serverMG_slider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* canvas_slider;                                                // 0x0268 (size: 0x8)
    class UCanvasPanel* canvas_spot;                                                  // 0x0270 (size: 0x8)
    class UImage* img_frame;                                                          // 0x0278 (size: 0x8)
    int32 Index;                                                                      // 0x0280 (size: 0x4)
    float Offset;                                                                     // 0x0284 (size: 0x4)
    float Size;                                                                       // 0x0288 (size: 0x4)
    float initSize;                                                                   // 0x028C (size: 0x4)
    float PivotOffset;                                                                // 0x0290 (size: 0x4)
    bool dir;                                                                         // 0x0294 (size: 0x1)
    float sizePerIndex;                                                               // 0x0298 (size: 0x4)
    bool isHit;                                                                       // 0x029C (size: 0x1)

    void Stop(bool& Hit);
    void Init(float Size, float sizePerIndex, int32 maxIndex);
    void updPivot();
    void upd();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_uicomp_serverMG_slider(int32 EntryPoint);
}; // Size: 0x29D

#endif
