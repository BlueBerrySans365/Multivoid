#ifndef UE4SS_SDK_ticker_widgetRender_HPP
#define UE4SS_SDK_ticker_widgetRender_HPP

class Aticker_widgetRender_C : public Aticker_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0240 (size: 0x8)
    class AanalogDScreenTest_C* panels;                                               // 0x0248 (size: 0x8)
    bool updater;                                                                     // 0x0250 (size: 0x1)
    int32 FrameRate;                                                                  // 0x0254 (size: 0x4)

    void changeFramerate(int32 FrameRate);
    void Timer();
    void ExecuteUbergraph_ticker_widgetRender(int32 EntryPoint);
}; // Size: 0x258

#endif
