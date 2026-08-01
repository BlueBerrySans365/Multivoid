#ifndef UE4SS_SDK_fossilhound_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_fossilhound_Skeleton_AnimBlueprint_HPP

class Ufossilhound_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x02C8 (size: 0xE8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x03B0 (size: 0xC0)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0470 (size: 0x30)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x04A0 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x05F8 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0620 (size: 0x28)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0648 (size: 0x48)
    float Run;                                                                        // 0x0690 (size: 0x4)
    class Afossilhound_C* Owner;                                                      // 0x0698 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_fossilhound_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_D77881814FD698BAF6AC08AD971C1F90();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_fossilhound_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x6A0

#endif
