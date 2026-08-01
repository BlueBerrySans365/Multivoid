#ifndef UE4SS_SDK_tool_remover_HPP
#define UE4SS_SDK_tool_remover_HPP

class Atool_remover_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0538 (size: 0x8)
    class UPrimitiveComponent* component_A;                                           // 0x0540 (size: 0x8)
    class UPrimitiveComponent* component_B;                                           // 0x0548 (size: 0x8)

    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_remover(int32 EntryPoint);
}; // Size: 0x550

#endif
