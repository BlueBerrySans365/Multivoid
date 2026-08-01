#ifndef UE4SS_SDK_kel_lmao_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_kel_lmao_Skeleton_AnimBlueprint_HPP

class Ukel_lmao_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02C8 (size: 0x118)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x03E0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0400 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0420 (size: 0x30)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0450 (size: 0x48)
    FRotator rot;                                                                     // 0x0498 (size: 0xC)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_kel_lmao_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x4A4

#endif
