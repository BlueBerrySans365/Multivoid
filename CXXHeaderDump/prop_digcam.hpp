#ifndef UE4SS_SDK_prop_digcam_HPP
#define UE4SS_SDK_prop_digcam_HPP

class Aprop_digcam_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0370 (size: 0x8)
    bool flash;                                                                       // 0x0378 (size: 0x1)
    bool canPrint;                                                                    // 0x0379 (size: 0x1)

    void checkPaper(bool& return);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void makePhoto();
    void ExecuteUbergraph_prop_digcam(int32 EntryPoint);
}; // Size: 0x37A

#endif
