#ifndef UE4SS_SDK_tool_makeHidden_HPP
#define UE4SS_SDK_tool_makeHidden_HPP

class Atool_makeHidden_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    class UStaticMeshComponent* Hidden;                                               // 0x0538 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0540 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0548 (size: 0x8)
    class AActor* actor_a;                                                            // 0x0550 (size: 0x8)
    class UPrimitiveComponent* component_A;                                           // 0x0558 (size: 0x8)
    class UPrimitiveComponent* component_B;                                           // 0x0560 (size: 0x8)
    FName key_A;                                                                      // 0x0568 (size: 0x8)
    float Length;                                                                     // 0x0570 (size: 0x4)
    float linear_strength;                                                            // 0x0574 (size: 0x4)
    float angular_strength;                                                           // 0x0578 (size: 0x4)
    class AmainPlayer_C* pl;                                                          // 0x0580 (size: 0x8)

    void initHIdden();
    void upd();
    void setHidden(bool Hidden);
    void processKeys(bool& return);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void Init(class Aprop_toolgun_C* toolgun);
    void ReceiveDestroyed();
    void playerChangedObj();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_tool_makeHidden(int32 EntryPoint);
}; // Size: 0x588

#endif
