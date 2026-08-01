#ifndef UE4SS_SDK_ui_bloodLossBlur_HPP
#define UE4SS_SDK_ui_bloodLossBlur_HPP

class Uui_bloodLossBlur_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_0;                                          // 0x0268 (size: 0x8)
    float A;                                                                          // 0x0270 (size: 0x4)
    class Aeffect_bloodLoss_C* effectObject;                                          // 0x0278 (size: 0x8)

    void setBlur();
    void addBlur(float Add);
    void ExecuteUbergraph_ui_bloodLossBlur(int32 EntryPoint);
}; // Size: 0x280

#endif
