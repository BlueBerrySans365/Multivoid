#ifndef UE4SS_SDK_grayUfoSk_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_grayUfoSk_Skeleton_AnimBlueprint_HPP

class UgrayUfoSk_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0410 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0430 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0538 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0558 (size: 0x108)
    FRotator outerRot;                                                                // 0x0660 (size: 0xC)
    class USkeletalMeshComponent* comp;                                               // 0x0670 (size: 0x8)
    float Time;                                                                       // 0x0678 (size: 0x4)
    float Inner;                                                                      // 0x067C (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayUfoSk_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_9FAF96ED4B1A78A3301FBB82C67D8A93();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_grayUfoSk_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x680

#endif
