#ifndef UE4SS_SDK_rozship_anim_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_rozship_anim_Skeleton_AnimBlueprint_HPP

class Urozship_anim_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0410 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0458 (size: 0x80)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_rozship_anim_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x4D8

#endif
