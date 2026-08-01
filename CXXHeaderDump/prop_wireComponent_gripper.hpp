#ifndef UE4SS_SDK_prop_wireComponent_gripper_HPP
#define UE4SS_SDK_prop_wireComponent_gripper_HPP

class Aprop_wireComponent_gripper_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0378 (size: 0x8)
    class UParticleSystemComponent* eff_ray;                                          // 0x0380 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0388 (size: 0x8)
    float Length;                                                                     // 0x0390 (size: 0x4)
    FHitResult grabHit;                                                               // 0x0394 (size: 0x88)
    bool poweredOn;                                                                   // 0x041C (size: 0x1)
    bool grabbed;                                                                     // 0x041D (size: 0x1)
    bool latch;                                                                       // 0x041E (size: 0x1)
    bool released;                                                                    // 0x041F (size: 0x1)
    class UPrimitiveComponent* prevComp;                                              // 0x0420 (size: 0x8)

    void releaseObject();
    void updRay();
    void tryToGrab();
    void upd();
    void UserConstructionScript();
    void wirePass(class Awire_C* wire);
    void assign();
    void grabbedDestroyed(class AActor* DestroyedActor);
    void unassign();
    void ExecuteUbergraph_prop_wireComponent_gripper(int32 EntryPoint);
}; // Size: 0x428

#endif
