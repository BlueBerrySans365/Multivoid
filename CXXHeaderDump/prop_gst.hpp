#ifndef UE4SS_SDK_prop_gst_HPP
#define UE4SS_SDK_prop_gst_HPP

class Aprop_gst_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* breakB;                                                    // 0x0370 (size: 0x8)
    class UAudioComponent* breakA;                                                    // 0x0378 (size: 0x8)
    class UPhysicsConstraintComponent* prop_to_B;                                     // 0x0380 (size: 0x8)
    class UPhysicsConstraintComponent* A_to_prop;                                     // 0x0388 (size: 0x8)
    FVector loc_B;                                                                    // 0x0390 (size: 0xC)
    class AActor* actor_a;                                                            // 0x03A0 (size: 0x8)
    class AActor* actor_b;                                                            // 0x03A8 (size: 0x8)
    class UPrimitiveComponent* component_A;                                           // 0x03B0 (size: 0x8)
    class UPrimitiveComponent* component_B;                                           // 0x03B8 (size: 0x8)
    bool fix_A;                                                                       // 0x03C0 (size: 0x1)
    bool fix_B;                                                                       // 0x03C1 (size: 0x1)

    void attach();
    void BndEvt__prop_gst_A_to_prop_K2Node_ComponentBoundEvent_0_ConstraintBrokenSignature__DelegateSignature(int32 ConstraintIndex);
    void BndEvt__prop_gst_prop_to_B_K2Node_ComponentBoundEvent_1_ConstraintBrokenSignature__DelegateSignature(int32 ConstraintIndex);
    void ExecuteUbergraph_prop_gst(int32 EntryPoint);
}; // Size: 0x3C2

#endif
