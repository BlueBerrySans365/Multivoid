#ifndef UE4SS_SDK_umbrellaAnim_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_umbrellaAnim_Skeleton_AnimBlueprint_HPP

class UumbrellaAnim_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x02F8 (size: 0x80)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0378 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_umbrellaAnim_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x3C0

#endif
