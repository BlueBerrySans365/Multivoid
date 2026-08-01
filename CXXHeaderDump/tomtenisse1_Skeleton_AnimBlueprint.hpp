#ifndef UE4SS_SDK_tomtenisse1_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_tomtenisse1_Skeleton_AnimBlueprint_HPP

class Utomtenisse1_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0320 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0348 (size: 0x80)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x03C8 (size: 0xC0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0488 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x04B0 (size: 0x30)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x04E0 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0508 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0538 (size: 0xB0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x05E8 (size: 0xE8)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x06D0 (size: 0x158)
    float moveBlend;                                                                  // 0x0828 (size: 0x4)
    class APawn* Pawn;                                                                // 0x0830 (size: 0x8)
    class ACharacter* Character;                                                      // 0x0838 (size: 0x8)
    bool carry;                                                                       // 0x0840 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_tomtenisse1_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x841

#endif
