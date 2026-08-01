#ifndef UE4SS_SDK_goreslither_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_goreslither_Skeleton_AnimBlueprint_HPP

class Ugoreslither_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0370 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03C0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x03E8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0468 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0498 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0518 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0548 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x05C8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x05F8 (size: 0xB0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x06A8 (size: 0x48)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x06F0 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x07F8 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0818 (size: 0x108)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x0920 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0940 (size: 0x108)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0A48 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0A68 (size: 0x20)
    bool isMoving;                                                                    // 0x0A88 (size: 0x1)
    float moveSpeed;                                                                  // 0x0A8C (size: 0x4)
    bool IsInAir;                                                                     // 0x0A90 (size: 0x1)
    class APawn* Owner;                                                               // 0x0A98 (size: 0x8)
    class Anpc_goreSlither_C* asSlither;                                              // 0x0AA0 (size: 0x8)
    float Angle;                                                                      // 0x0AA8 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_goreslither_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_57BD0EA04982197EC1F898B4F1D8AAB4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_goreslither_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_450C1C13484A0802FF44A78379281806();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_goreslither_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0xAAC

#endif
