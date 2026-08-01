#ifndef UE4SS_SDK_AnimBlueprint_kerfurOmega_skerfuro_HPP
#define UE4SS_SDK_AnimBlueprint_kerfurOmega_skerfuro_HPP

class UAnimBlueprint_kerfurOmega_skerfuro_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x02C8 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;                                  // 0x02E8 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x03F0 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;                                  // 0x0410 (size: 0x108)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0518 (size: 0x80)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0598 (size: 0x30)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x05C8 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x06D0 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x07D8 (size: 0x108)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x08E0 (size: 0x1B0)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0A90 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0B98 (size: 0x108)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0CA0 (size: 0x1B0)
    bool lookSide;                                                                    // 0x0E50 (size: 0x1)
    FVector lookAt;                                                                   // 0x0E54 (size: 0xC)

    void AnimGraph(FPoseLink& AnimGraph);
    FRotator randrot(float Max);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBlueprint_kerfurOmega_skerfuro_AnimGraphNode_ModifyBone_24D4041746D03EC783C1538CC09714FF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBlueprint_kerfurOmega_skerfuro_AnimGraphNode_ModifyBone_6A5C71CD416E8B4543E151979DC21A15();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBlueprint_kerfurOmega_skerfuro_AnimGraphNode_ModifyBone_AFEBD51D428584A243335AB175BB8FB6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBlueprint_kerfurOmega_skerfuro_AnimGraphNode_ModifyBone_AFCBED434818B2643729DD9F658D39F7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBlueprint_kerfurOmega_skerfuro_AnimGraphNode_ModifyBone_81CB01484A80492D9890758AB7F90E21();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBlueprint_kerfurOmega_skerfuro_AnimGraphNode_ModifyBone_B876763F4596AA82E0301380C67BF9A9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBlueprint_kerfurOmega_skerfuro_AnimGraphNode_ModifyBone_84E1E7B54409A06908966BA5165E6874();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_AnimBlueprint_kerfurOmega_skerfuro(int32 EntryPoint);
}; // Size: 0xE60

#endif
