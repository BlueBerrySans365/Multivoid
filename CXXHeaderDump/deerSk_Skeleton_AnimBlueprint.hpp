#ifndef UE4SS_SDK_deerSk_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_deerSk_Skeleton_AnimBlueprint_HPP

class UdeerSk_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x02C8 (size: 0x158)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0420 (size: 0x48)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0468 (size: 0x28)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0490 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0550 (size: 0xE8)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0638 (size: 0x28)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0660 (size: 0x30)
    float Alpha;                                                                      // 0x0690 (size: 0x4)
    class APawn* Pawn;                                                                // 0x0698 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_deerSk_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_88F64C30459431425F52D2B253327D51();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_deerSk_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x6A0

#endif
