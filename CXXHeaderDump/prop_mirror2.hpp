#ifndef UE4SS_SDK_prop_mirror2_HPP
#define UE4SS_SDK_prop_mirror2_HPP

class Aprop_mirror2_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UChildActorComponent* L;                                                    // 0x0370 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0378 (size: 0x8)
    class UChildActorComponent* M;                                                    // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_mirror2(int32 EntryPoint);
}; // Size: 0x388

#endif
