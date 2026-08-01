#ifndef UE4SS_SDK_tool_weld_HPP
#define UE4SS_SDK_tool_weld_HPP

class Atool_weld_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0538 (size: 0x8)
    class AActor* actor_a;                                                            // 0x0540 (size: 0x8)
    class AActor* actor_b;                                                            // 0x0548 (size: 0x8)
    FVector loc_A;                                                                    // 0x0550 (size: 0xC)
    FVector loc_B;                                                                    // 0x055C (size: 0xC)
    class UPrimitiveComponent* component_A;                                           // 0x0568 (size: 0x8)
    class UPrimitiveComponent* component_B;                                           // 0x0570 (size: 0x8)
    FName key_A;                                                                      // 0x0578 (size: 0x8)
    FName key_B;                                                                      // 0x0580 (size: 0x8)
    float Length;                                                                     // 0x0588 (size: 0x4)
    float linear_strength;                                                            // 0x058C (size: 0x4)
    float angular_strength;                                                           // 0x0590 (size: 0x4)
    bool beginWeld;                                                                   // 0x0594 (size: 0x1)
    bool Undo;                                                                        // 0x0595 (size: 0x1)

    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void makeConstraint();
    void processKeys(bool& return);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void objectChanged();
    void Init(class Aprop_toolgun_C* toolgun);
    void Commit(class Aprop_toolgun_C* toolgun);
    void assign();
    void destA(class AActor* DestroyedActor);
    void destB(class AActor* DestroyedActor);
    void BndEvt__tool_weld_PhysicsConstraint_K2Node_ComponentBoundEvent_0_ConstraintBrokenSignature__DelegateSignature(int32 ConstraintIndex);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_tool_weld(int32 EntryPoint);
}; // Size: 0x596

#endif
