#ifndef UE4SS_SDK_eyerTeeth_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_eyerTeeth_Skeleton_AnimBlueprint_HPP

class UeyerTeeth_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0410 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0430 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0538 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0640 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0660 (size: 0x108)
    float Open;                                                                       // 0x0768 (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_eyerTeeth_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_C6FA731A40F9942D90048B905D6599B7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_eyerTeeth_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_40503BAF4761A299BDB00AA7EE47C815();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_eyerTeeth_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_EFBDAAB14CCBDA75C67BA68C1AB2A853();
    void ExecuteUbergraph_eyerTeeth_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x76C

#endif
