#ifndef UE4SS_SDK_wallpcunit_tapes_anim_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_wallpcunit_tapes_anim_Skeleton_AnimBlueprint_HPP

class Uwallpcunit_tapes_anim_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0410 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0430 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0538 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0640 (size: 0x20)
    float Alpha;                                                                      // 0x0660 (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_wallpcunit_tapes_anim_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_C172756D4327C91EB055FA8E4F990919();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_wallpcunit_tapes_anim_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_A524103A4679C2FD6D68C3A199FAF788();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_wallpcunit_tapes_anim_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x664

#endif
