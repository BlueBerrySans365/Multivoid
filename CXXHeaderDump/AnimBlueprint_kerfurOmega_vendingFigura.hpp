#ifndef UE4SS_SDK_AnimBlueprint_kerfurOmega_vendingFigura_HPP
#define UE4SS_SDK_AnimBlueprint_kerfurOmega_vendingFigura_HPP

class UAnimBlueprint_kerfurOmega_vendingFigura_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x02F8 (size: 0x80)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0378 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0398 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x04A0 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x04C0 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x05C8 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x06D0 (size: 0x108)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_AnimBlueprint_kerfurOmega_vendingFigura(int32 EntryPoint);
}; // Size: 0x7D8

#endif
