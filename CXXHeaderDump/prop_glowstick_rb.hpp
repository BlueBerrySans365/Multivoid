#ifndef UE4SS_SDK_prop_glowstick_rb_HPP
#define UE4SS_SDK_prop_glowstick_rb_HPP

class Aprop_glowstick_rb_C : public Aprop_glowstick_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    FLinearColor Color;                                                               // 0x0428 (size: 0x10)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0438 (size: 0x8)
    float A_0;                                                                        // 0x0440 (size: 0x4)

    void Init();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_glowstick_rb(int32 EntryPoint);
}; // Size: 0x444

#endif
