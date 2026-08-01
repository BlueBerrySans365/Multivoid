#ifndef UE4SS_SDK_rope_HPP
#define UE4SS_SDK_rope_HPP

class Arope_C : public Ahook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)

    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void BndEvt__rope_PhysicsConstraint_K2Node_ComponentBoundEvent_1_ConstraintBrokenSignature__DelegateSignature(int32 ConstraintIndex);
    void ExecuteUbergraph_rope(int32 EntryPoint);
}; // Size: 0x3B0

#endif
