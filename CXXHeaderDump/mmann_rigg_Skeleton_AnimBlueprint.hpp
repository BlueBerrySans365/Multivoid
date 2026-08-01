#ifndef UE4SS_SDK_mmann_rigg_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_mmann_rigg_Skeleton_AnimBlueprint_HPP

class Ummann_rigg_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x02C8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x02F0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0318 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0398 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x03C8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0448 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0478 (size: 0xB0)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0528 (size: 0x30)
    bool stand;                                                                       // 0x0558 (size: 0x1)
    class USceneComponent* comp;                                                      // 0x0560 (size: 0x8)
    FVector foot_R;                                                                   // 0x0568 (size: 0xC)
    FVector foot_L;                                                                   // 0x0574 (size: 0xC)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_mmann_rigg_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x580

#endif
