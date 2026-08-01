#ifndef UE4SS_SDK_tool_duplicateObject_HPP
#define UE4SS_SDK_tool_duplicateObject_HPP

class Atool_duplicateObject_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0538 (size: 0x8)
    class AActor* Actor;                                                              // 0x0540 (size: 0x8)

    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_duplicateObject(int32 EntryPoint);
}; // Size: 0x548

#endif
