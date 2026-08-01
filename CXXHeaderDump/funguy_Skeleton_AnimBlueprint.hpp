#ifndef UE4SS_SDK_funguy_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_funguy_Skeleton_AnimBlueprint_HPP

class Ufunguy_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0320 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0348 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x03C8 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x03F8 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x04E0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0510 (size: 0xB0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x05C0 (size: 0x48)
    float Alpha;                                                                      // 0x0608 (size: 0x4)
    class APawn* Pawn;                                                                // 0x0610 (size: 0x8)
    class ACharacter* Character;                                                      // 0x0618 (size: 0x8)
    class Anpc_funguy_C* funguy;                                                      // 0x0620 (size: 0x8)
    bool inGround;                                                                    // 0x0628 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_funguy_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_02684C654F02F666EC4107B352FDABE7();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_funguy_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x629

#endif
