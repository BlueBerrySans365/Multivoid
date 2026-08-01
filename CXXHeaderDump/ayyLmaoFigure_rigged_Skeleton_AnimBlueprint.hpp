#ifndef UE4SS_SDK_ayyLmaoFigure_rigged_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_ayyLmaoFigure_rigged_Skeleton_AnimBlueprint_HPP

class UayyLmaoFigure_rigged_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0410 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0430 (size: 0x1B0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x05E0 (size: 0x20)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x0600 (size: 0xC8)
    FVector lookAt;                                                                   // 0x06C8 (size: 0xC)
    float lookAtBlend;                                                                // 0x06D4 (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ayyLmaoFigure_rigged_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x6D8

#endif
