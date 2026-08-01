#ifndef UE4SS_SDK_tool_gridWeld_HPP
#define UE4SS_SDK_tool_gridWeld_HPP

class Atool_gridWeld_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0538 (size: 0x8)
    class UPrimitiveComponent* component_A;                                           // 0x0540 (size: 0x8)
    class UPrimitiveComponent* component_B;                                           // 0x0548 (size: 0x8)
    TArray<class Aprop_C*> Actors;                                                    // 0x0550 (size: 0x10)
    TArray<FVector> V;                                                                // 0x0560 (size: 0x10)
    TArray<class Aprop_C*> Actors_0;                                                  // 0x0570 (size: 0x10)
    TArray<class AActor*> toUndo;                                                     // 0x0580 (size: 0x10)
    TArray<class Aprop_C*> weldedActors;                                              // 0x0590 (size: 0x10)
    TArray<Fstruct_actorPair> actorPairs;                                             // 0x05A0 (size: 0x10)

    void Init(class Aprop_toolgun_C* toolgun);
    void repeat();
    void ExecuteUbergraph_tool_gridWeld(int32 EntryPoint);
}; // Size: 0x5B0

#endif
