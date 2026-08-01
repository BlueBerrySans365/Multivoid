#ifndef UE4SS_SDK_prop_wireComponent_axis_HPP
#define UE4SS_SDK_prop_wireComponent_axis_HPP

class Aprop_wireComponent_axis_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0378 (size: 0x8)
    class UChildActorComponent* Axis;                                                 // 0x0380 (size: 0x8)
    float Torque;                                                                     // 0x0388 (size: 0x4)
    class UPrimitiveComponent* Component;                                             // 0x0390 (size: 0x8)
    bool Active;                                                                      // 0x0398 (size: 0x1)

    void applyTorque(class UStaticMeshComponent* InputPin);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void wirePass(class Awire_C* wire);
    void ExecuteUbergraph_prop_wireComponent_axis(int32 EntryPoint);
}; // Size: 0x399

#endif
