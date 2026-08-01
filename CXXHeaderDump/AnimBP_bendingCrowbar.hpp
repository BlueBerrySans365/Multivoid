#ifndef UE4SS_SDK_AnimBP_bendingCrowbar_HPP
#define UE4SS_SDK_AnimBP_bendingCrowbar_HPP

class UAnimBP_bendingCrowbar_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0410 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;                                  // 0x0430 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x0538 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0640 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0748 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0850 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0958 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0A60 (size: 0x20)
    float Angle;                                                                      // 0x0A80 (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_bendingCrowbar_AnimGraphNode_ModifyBone_2DA1A94F47E2BC537828CFBB2499EF10();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_bendingCrowbar_AnimGraphNode_ModifyBone_35DADF344C39A2A0C20D229D7A7537ED();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_bendingCrowbar_AnimGraphNode_ModifyBone_EF9E17C54FB24629C3938D81173F3F98();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_bendingCrowbar_AnimGraphNode_ModifyBone_0D1CF78145E4613636EE338EE81C6237();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_bendingCrowbar_AnimGraphNode_ModifyBone_58E2D594403AE8AD5E20A4825FA61F8D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_bendingCrowbar_AnimGraphNode_ModifyBone_CB0678EA4FC1AD326C0232BB2A71EF62();
    void ExecuteUbergraph_AnimBP_bendingCrowbar(int32 EntryPoint);
}; // Size: 0xA84

#endif
