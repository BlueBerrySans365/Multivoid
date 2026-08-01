#ifndef UE4SS_SDK_ui_reactorRod_HPP
#define UE4SS_SDK_ui_reactorRod_HPP

class Uui_reactorRod_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image;                                                              // 0x0268 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0278 (size: 0x8)
    class UImage* Img_heigh_1;                                                        // 0x0280 (size: 0x8)
    class USlider* Slider_89;                                                         // 0x0288 (size: 0x8)
    class UTextBlock* TextBlock_71;                                                   // 0x0290 (size: 0x8)
    int32 Index;                                                                      // 0x0298 (size: 0x4)
    class Uui_reactor_C* Owner;                                                       // 0x02A0 (size: 0x8)

    void upd(float Alpha);
    void Construct();
    void BndEvt__Slider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ExecuteUbergraph_ui_reactorRod(int32 EntryPoint);
}; // Size: 0x2A8

#endif
