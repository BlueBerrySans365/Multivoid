#ifndef UE4SS_SDK_roombaBrush_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_roombaBrush_Skeleton_AnimBlueprint_HPP

class UroombaBrush_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0410 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0430 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0538 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0640 (size: 0x20)
    float A;                                                                          // 0x0660 (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_roombaBrush_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_D0EAB5F44A6DDD768D7C5BB863CD43D5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_roombaBrush_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_3ADEDAE14A67F2DB65842185FF7442A5();
    void ExecuteUbergraph_roombaBrush_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x664

#endif
