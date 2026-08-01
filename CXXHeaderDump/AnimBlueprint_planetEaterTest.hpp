#ifndef UE4SS_SDK_AnimBlueprint_planetEaterTest_HPP
#define UE4SS_SDK_AnimBlueprint_planetEaterTest_HPP

class UAnimBlueprint_planetEaterTest_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0410 (size: 0x48)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_AnimBlueprint_planetEaterTest(int32 EntryPoint);
}; // Size: 0x458

#endif
