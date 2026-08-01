#ifndef UE4SS_SDK_tableclockArrows_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_tableclockArrows_Skeleton_AnimBlueprint_HPP

class UtableclockArrows_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x02F8 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0318 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0420 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0440 (size: 0x108)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0548 (size: 0x118)
    float Hours;                                                                      // 0x0660 (size: 0x4)
    float Minutes;                                                                    // 0x0664 (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_tableclockArrows_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_3CB2E38D4C20B03C868F138E04A7D70C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_tableclockArrows_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_090F71B3427D2913EDB992BC47A4093D();
    void ExecuteUbergraph_tableclockArrows_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x668

#endif
