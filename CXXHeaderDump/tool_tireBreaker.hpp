#ifndef UE4SS_SDK_tool_tireBreaker_HPP
#define UE4SS_SDK_tool_tireBreaker_HPP

class Atool_tireBreaker_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0538 (size: 0x8)
    class UPrimitiveComponent* component_A;                                           // 0x0540 (size: 0x8)
    class UPrimitiveComponent* component_B;                                           // 0x0548 (size: 0x8)
    float Damage;                                                                     // 0x0550 (size: 0x4)

    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_tireBreaker(int32 EntryPoint);
}; // Size: 0x554

#endif
