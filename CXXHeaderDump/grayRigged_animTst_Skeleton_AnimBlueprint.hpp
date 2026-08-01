#ifndef UE4SS_SDK_grayRigged_animTst_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_grayRigged_animTst_Skeleton_AnimBlueprint_HPP

class UgrayRigged_animTst_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x02F8 (size: 0xE8)
    float alphaWalk;                                                                  // 0x03E0 (size: 0x4)
    class APawn* Pawn;                                                                // 0x03E8 (size: 0x8)
    float StartPosition;                                                              // 0x03F0 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayRigged_animTst_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_3B81EE1C4C2A86658B5F9E8B37203570();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_grayRigged_animTst_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x3F4

#endif
