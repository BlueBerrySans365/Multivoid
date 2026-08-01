#ifndef UE4SS_SDK_wallclockArrows_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_wallclockArrows_Skeleton_AnimBlueprint_HPP

class UwallclockArrows_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0410 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0430 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0538 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0558 (size: 0x108)
    float Hours;                                                                      // 0x0660 (size: 0x4)
    float Minutes;                                                                    // 0x0664 (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_wallclockArrows_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_5B2D034949E4FF76A667708259E04218();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_wallclockArrows_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_E09660A24D08191C6058DD898708E21B();
    void ExecuteUbergraph_wallclockArrows_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x668

#endif
