#ifndef UE4SS_SDK_animbp_kelRagdoll_HPP
#define UE4SS_SDK_animbp_kelRagdoll_HPP

class Uanimbp_kelRagdoll_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0320 (size: 0x28)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x0348 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0450 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0558 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0660 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0768 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0788 (size: 0x108)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0890 (size: 0x20)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x08B0 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x08D8 (size: 0x30)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0908 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0930 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0960 (size: 0xB0)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0A10 (size: 0x118)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0B28 (size: 0x158)
    bool isCrouched;                                                                  // 0x0C80 (size: 0x1)
    float duck;                                                                       // 0x0C84 (size: 0x4)
    float Offset;                                                                     // 0x0C88 (size: 0x4)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_animbp_kelRagdoll_AnimGraphNode_ModifyBone_0D2CB79E4B2267A400C698BCCAC768F7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_animbp_kelRagdoll_AnimGraphNode_ModifyBone_EB144F1246EEE3DB48CD518B46D1B889();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_animbp_kelRagdoll_AnimGraphNode_ModifyBone_8EDD08E64644659EE1CA708B647F9DA4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_animbp_kelRagdoll_AnimGraphNode_ModifyBone_BAD733E841C573576831C1876714B6AC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_animbp_kelRagdoll_AnimGraphNode_ModifyBone_B4DC9D7448E4A26C8777688F2EF4F6C8();
    void ExecuteUbergraph_animbp_kelRagdoll(int32 EntryPoint);
}; // Size: 0xC8C

#endif
