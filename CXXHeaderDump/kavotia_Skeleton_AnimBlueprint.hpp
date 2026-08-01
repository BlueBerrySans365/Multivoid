#ifndef UE4SS_SDK_kavotia_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_kavotia_Skeleton_AnimBlueprint_HPP

class Ukavotia_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0370 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x03C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03E8 (size: 0x28)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x0410 (size: 0x1B0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x05C0 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x05E0 (size: 0x1B0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0790 (size: 0x20)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;                            // 0x07B0 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x07D8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0808 (size: 0x80)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x0888 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x08D0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0900 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0980 (size: 0x30)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x09B0 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x09D8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0A08 (size: 0xB0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0AB8 (size: 0xC0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0B78 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0BC0 (size: 0xE8)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;                          // 0x0CA8 (size: 0x158)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0E00 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0F58 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0F80 (size: 0x28)
    bool isLaying;                                                                    // 0x0FA8 (size: 0x1)
    FVector movingDir;                                                                // 0x0FAC (size: 0xC)
    class APawn* Pawn;                                                                // 0x0FB8 (size: 0x8)
    class Akavotia_C* kavotia;                                                        // 0x0FC0 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0FC8 (size: 0x8)
    float walkSpeed;                                                                  // 0x0FD0 (size: 0x4)
    bool isShooting;                                                                  // 0x0FD4 (size: 0x1)
    FVector shootTarget;                                                              // 0x0FD8 (size: 0xC)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_kavotia_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_41BA1C2C424BF677EC7744828930AAF4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_kavotia_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_11CBAF6C42FEB0620F1992A7CAABE884();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_kavotia_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0xFE4

#endif
