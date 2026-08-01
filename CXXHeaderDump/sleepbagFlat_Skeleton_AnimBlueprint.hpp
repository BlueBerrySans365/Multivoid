#ifndef UE4SS_SDK_sleepbagFlat_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_sleepbagFlat_Skeleton_AnimBlueprint_HPP

class UsleepbagFlat_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0410 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_17;                                 // 0x0430 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0538 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_16;                                 // 0x0558 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_15;                                 // 0x0660 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_14;                                 // 0x0768 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13;                                 // 0x0870 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12;                                 // 0x0978 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11;                                 // 0x0A80 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10;                                 // 0x0B88 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9;                                  // 0x0C90 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8;                                  // 0x0D98 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7;                                  // 0x0EA0 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;                                  // 0x0FA8 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;                                  // 0x10B0 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x11B8 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x12C0 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x13C8 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x14D0 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x15D8 (size: 0x108)
    TArray<FVector> pointsPositions;                                                  // 0x16E0 (size: 0x10)
    TArray<FRotator> pointsRotations;                                                 // 0x16F0 (size: 0x10)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_sleepbagFlat_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x1700

#endif
