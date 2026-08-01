#ifndef UE4SS_SDK_tool_orientationConstraint_HPP
#define UE4SS_SDK_tool_orientationConstraint_HPP

class Atool_orientationConstraint_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0538 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0540 (size: 0x8)
    class AActor* actor_a;                                                            // 0x0548 (size: 0x8)
    class UPrimitiveComponent* component_A;                                           // 0x0550 (size: 0x8)
    class UPrimitiveComponent* component_B;                                           // 0x0558 (size: 0x8)
    FName key_A;                                                                      // 0x0560 (size: 0x8)
    float Length;                                                                     // 0x0568 (size: 0x4)
    float linear_strength;                                                            // 0x056C (size: 0x4)
    float angular_strength;                                                           // 0x0570 (size: 0x4)
    bool lockX;                                                                       // 0x0574 (size: 0x1)
    bool lockY;                                                                       // 0x0575 (size: 0x1)
    bool lockZ;                                                                       // 0x0576 (size: 0x1)
    bool Global;                                                                      // 0x0577 (size: 0x1)
    FTransform ComponentTransform;                                                    // 0x0580 (size: 0x30)

    void setConstraint();
    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void processKeys(bool& return);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void destA(class AActor* DestroyedActor);
    void CustomEvent_0(class UPrimitiveComponent* Target, const FTransform& NewTransform);
    void assign();
    void Init(class Aprop_toolgun_C* toolgun);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_tool_orientationConstraint(int32 EntryPoint);
}; // Size: 0x5B0

#endif
