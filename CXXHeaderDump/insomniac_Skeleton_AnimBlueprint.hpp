#ifndef UE4SS_SDK_insomniac_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_insomniac_Skeleton_AnimBlueprint_HPP

class Uinsomniac_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x02F8 (size: 0xE8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x03E0 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_3;                                          // 0x0400 (size: 0x1B0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x05B0 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_2;                                          // 0x05D0 (size: 0x1B0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0780 (size: 0x48)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x07D0 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0980 (size: 0x1B0)
    FVector look;                                                                     // 0x0B30 (size: 0xC)
    float Walk;                                                                       // 0x0B3C (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_insomniac_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2F5AB3A44E091C6FF18F7FBC6E95F4D5();
    void ExecuteUbergraph_insomniac_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0xB40

#endif
