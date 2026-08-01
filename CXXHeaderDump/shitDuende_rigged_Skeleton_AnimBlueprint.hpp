#ifndef UE4SS_SDK_shitDuende_rigged_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_shitDuende_rigged_Skeleton_AnimBlueprint_HPP

class UshitDuende_rigged_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x02F8 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0320 (size: 0x1B0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x04D0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x04F0 (size: 0x80)
    FVector lookAt;                                                                   // 0x0570 (size: 0xC)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x57C

#endif
