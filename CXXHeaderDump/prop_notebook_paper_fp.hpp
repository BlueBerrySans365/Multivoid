#ifndef UE4SS_SDK_prop_notebook_paper_fp_HPP
#define UE4SS_SDK_prop_notebook_paper_fp_HPP

class Aprop_notebook_paper_fp_C : public Aprop_notebook_paper_u_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)

    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_notebook_paper_fp(int32 EntryPoint);
}; // Size: 0x3A0

#endif
