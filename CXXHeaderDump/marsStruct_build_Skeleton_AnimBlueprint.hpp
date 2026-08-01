#ifndef UE4SS_SDK_marsStruct_build_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_marsStruct_build_Skeleton_AnimBlueprint_HPP

class UmarsStruct_build_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x02F8 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0318 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0420 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0440 (size: 0x108)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x0548 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0610 (size: 0x80)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0690 (size: 0x48)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x06D8 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0830 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0858 (size: 0x28)
    FRotator rot_in;                                                                  // 0x0880 (size: 0xC)
    FVector Origin;                                                                   // 0x088C (size: 0xC)
    FRotator rot_out;                                                                 // 0x0898 (size: 0xC)
    FVector lookAt;                                                                   // 0x08A4 (size: 0xC)
    float Alpha;                                                                      // 0x08B0 (size: 0x4)
    FVector rest;                                                                     // 0x08B4 (size: 0xC)
    FVector vec_right;                                                                // 0x08C0 (size: 0xC)
    FVector vec_up;                                                                   // 0x08CC (size: 0xC)
    float angle_Z;                                                                    // 0x08D8 (size: 0x4)
    float angle_Y;                                                                    // 0x08DC (size: 0x4)
    FVector vec_forward;                                                              // 0x08E0 (size: 0xC)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_marsStruct_build_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_4B56065B45DBF3D9BF9EE3BB3A017F26();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_marsStruct_build_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_ADECC9764F99C99C098F479D9BB33E1B();
    void ExecuteUbergraph_marsStruct_build_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x8EC

#endif
