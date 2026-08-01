#ifndef UE4SS_SDK_dronesackDraft_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_dronesackDraft_Skeleton_AnimBlueprint_HPP

class UdronesackDraft_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0410 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8;                                  // 0x0430 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0538 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7;                                  // 0x0558 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;                                  // 0x0660 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;                                  // 0x0768 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x0870 (size: 0x108)
    FAnimNode_LookAt AnimGraphNode_LookAt_3;                                          // 0x0980 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_2;                                          // 0x0B30 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x0CE0 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0E90 (size: 0x1B0)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x1040 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x1148 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x1250 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x1358 (size: 0x108)
    FVector Offset;                                                                   // 0x1460 (size: 0xC)
    float Angle;                                                                      // 0x146C (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_dronesackDraft_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_87E7AAA748FD589926211E9837F4A33A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_dronesackDraft_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_71E301B34B67457813CF168306CD8393();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_dronesackDraft_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_7DF53C994A54A585F0FB9B9F3AE2B6DA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_dronesackDraft_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_85ADCD854CAC5C3C3FEC99B0E96FC69F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_dronesackDraft_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_8136B32B4800E3E0FF995F95076ACBA6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_dronesackDraft_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_B62CABF349970C1D9DCDB59F3978FAC7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_dronesackDraft_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_E9EA694B49BD83AF9BFB4E9F24640EC6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_dronesackDraft_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_EF963B19483593D7BFF2B0BC1E1670E0();
    void ExecuteUbergraph_dronesackDraft_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x1470

#endif
