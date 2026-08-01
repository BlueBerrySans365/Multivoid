#ifndef UE4SS_SDK_tool_stacker_HPP
#define UE4SS_SDK_tool_stacker_HPP

class Atool_stacker_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    class UInstancedStaticMeshComponent* display;                                     // 0x0538 (size: 0x8)
    uint8 Axis;                                                                       // 0x0540 (size: 0x1)
    int32 Count;                                                                      // 0x0544 (size: 0x4)
    bool weld;                                                                        // 0x0548 (size: 0x1)
    class Aprop_C* actor_a;                                                           // 0x0550 (size: 0x8)
    class Aprop_C* actor_b;                                                           // 0x0558 (size: 0x8)
    class AActor* displayActor;                                                       // 0x0560 (size: 0x8)
    FVector Extent;                                                                   // 0x0568 (size: 0xC)
    TArray<class AActor*> objs;                                                       // 0x0578 (size: 0x10)
    bool weld_neighbors;                                                              // 0x0588 (size: 0x1)
    TArray<FVector> V;                                                                // 0x0590 (size: 0x10)
    FVector Offset;                                                                   // 0x05A0 (size: 0xC)
    FRotator Turn;                                                                    // 0x05AC (size: 0xC)
    FRotator Rotation;                                                                // 0x05B8 (size: 0xC)
    bool objectsSleep;                                                                // 0x05C4 (size: 0x1)
    float RelativeOffset;                                                             // 0x05C8 (size: 0x4)
    bool turnRelativeToParent;                                                        // 0x05CC (size: 0x1)
    bool objectsStatic;                                                               // 0x05CD (size: 0x1)
    bool objectsFreeze;                                                               // 0x05CE (size: 0x1)
    bool applyToParent;                                                               // 0x05CF (size: 0x1)
    class AActor* stackedActor;                                                       // 0x05D0 (size: 0x8)
    bool DuplicateObject;                                                             // 0x05D8 (size: 0x1)

    void makeLocation(int32 Count, FVector Extent, FVector& Local);
    void Update();
    void initDisplayMesh(class AActor* Target);
    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void Init(class Aprop_toolgun_C* toolgun);
    void toolgunLookedAt(class Aprop_toolgun_C* toolgun, class AmainPlayer_C* Player, FHitResult Hit);
    void toolgunLookedAway(class Aprop_toolgun_C* toolgun, class AmainPlayer_C* Player);
    void parameterUpdated();
    void toolgunEquipped(class Aprop_toolgun_C* toolgun);
    void toolgunRemoved(class Aprop_toolgun_C* toolgun);
    void toolgunChangedTool(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_stacker(int32 EntryPoint);
}; // Size: 0x5D9

#endif
