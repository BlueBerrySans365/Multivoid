#ifndef UE4SS_SDK_deerZombSk_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_deerZombSk_Skeleton_AnimBlueprint_HPP

class UdeerZombSk_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x02C8 (size: 0x158)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0420 (size: 0xE8)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0508 (size: 0x28)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0530 (size: 0x30)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0560 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0580 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_2;                                          // 0x05A0 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x0750 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0900 (size: 0x1B0)
    float Alpha;                                                                      // 0x0AB0 (size: 0x4)
    class APawn* Pawn;                                                                // 0x0AB8 (size: 0x8)
    FVector lookAt;                                                                   // 0x0AC0 (size: 0xC)
    FRotator R;                                                                       // 0x0ACC (size: 0xC)
    class USkeletalMeshComponent* sk;                                                 // 0x0AD8 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_deerZombSk_Skeleton_AnimBlueprint_AnimGraphNode_LookAt_34FBD9344EF4D7F3863AD1A0D8B56A66();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_deerZombSk_Skeleton_AnimBlueprint_AnimGraphNode_LookAt_5A0798564F4C7A21BF8673A775A23574();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_deerZombSk_Skeleton_AnimBlueprint_AnimGraphNode_LookAt_C7BC34F14589E8DAA33492B31C09B2A7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_deerZombSk_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_D4D0F2D44C4D3F0C3B7EE0B86102EC7B();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_deerZombSk_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0xAE0

#endif
