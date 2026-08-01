#ifndef UE4SS_SDK_erieLive_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_erieLive_Skeleton_AnimBlueprint_HPP

class UerieLive_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x02F8 (size: 0xE8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x03E0 (size: 0x48)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_1;                                // 0x0428 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x04F0 (size: 0x80)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x0570 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0638 (size: 0x80)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x06B8 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x06E0 (size: 0x1B0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0890 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x08B0 (size: 0x1B0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0A60 (size: 0xC0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0B20 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0C78 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0CA0 (size: 0x28)
    float walkAlpha;                                                                  // 0x0CC8 (size: 0x4)
    class APawn* Pawn;                                                                // 0x0CD0 (size: 0x8)
    class AController* Controller;                                                    // 0x0CD8 (size: 0x8)
    class ACharacter* Character;                                                      // 0x0CE0 (size: 0x8)
    float InterpSpeed;                                                                // 0x0CE8 (size: 0x4)
    float splatloop;                                                                  // 0x0CEC (size: 0x4)
    float splatfall;                                                                  // 0x0CF0 (size: 0x4)
    class USkeletalMeshComponent* Component;                                          // 0x0CF8 (size: 0x8)
    float carrying;                                                                   // 0x0D00 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_erieLive_Skeleton_AnimBlueprint_AnimGraphNode_LookAt_8EF94EC94D3570920791CE929C2D5D5F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_erieLive_Skeleton_AnimBlueprint_AnimGraphNode_LookAt_DF4E052D412D96C070E8E8BC7FAC13AE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_erieLive_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_35FA435F40D82C87F4C26D991ABE306F();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_erieLive_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0xD04

#endif
