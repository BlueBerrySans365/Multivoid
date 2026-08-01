#ifndef UE4SS_SDK_killerWispAnim1_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_killerWispAnim1_Skeleton_AnimBlueprint_HPP

class UkillerWispAnim1_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;                                     // 0x02F8 (size: 0x18)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0310 (size: 0x48)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0358 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0378 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0480 (size: 0x20)
    FVector Loc;                                                                      // 0x04A0 (size: 0xC)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_killerWispAnim1_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x4AC

#endif
