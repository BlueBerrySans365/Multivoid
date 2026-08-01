#ifndef UE4SS_SDK_drone_sk_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_drone_sk_Skeleton_AnimBlueprint_HPP

class Udrone_sk_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x02F8 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0378 (size: 0x80)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x03F8 (size: 0xC8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x04C0 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0580 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0600 (size: 0x80)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0680 (size: 0xC0)
    float grabbers;                                                                   // 0x0740 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_drone_sk_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x744

#endif
