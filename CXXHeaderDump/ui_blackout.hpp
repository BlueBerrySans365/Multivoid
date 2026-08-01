#ifndef UE4SS_SDK_ui_blackout_HPP
#define UE4SS_SDK_ui_blackout_HPP

class Uui_blackout_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* img;                                                                // 0x0268 (size: 0x8)
    float FadeIn;                                                                     // 0x0270 (size: 0x4)
    float wait;                                                                       // 0x0274 (size: 0x4)
    float FadeOut;                                                                    // 0x0278 (size: 0x4)
    float Alpha;                                                                      // 0x027C (size: 0x4)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_ui_blackout(int32 EntryPoint);
}; // Size: 0x280

#endif
