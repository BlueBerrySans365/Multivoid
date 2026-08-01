#ifndef UE4SS_SDK_AnimBlueprint_planetEaterTest_bigEat_HPP
#define UE4SS_SDK_AnimBlueprint_planetEaterTest_bigEat_HPP

class UAnimBlueprint_planetEaterTest_bigEat_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x02F8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0340 (size: 0x80)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_AnimBlueprint_planetEaterTest_bigEat(int32 EntryPoint);
}; // Size: 0x3C0

#endif
