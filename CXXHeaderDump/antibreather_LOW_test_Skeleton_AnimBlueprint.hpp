#ifndef UE4SS_SDK_antibreather_LOW_test_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_antibreather_LOW_test_Skeleton_AnimBlueprint_HPP

class Uantibreather_LOW_test_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x02C8 (size: 0xE8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03B0 (size: 0x30)
    float A;                                                                          // 0x03E0 (size: 0x4)
    float Rate;                                                                       // 0x03E4 (size: 0x4)
    class Aantibreather_C* bre;                                                       // 0x03E8 (size: 0x8)
    float h_arm_R;                                                                    // 0x03F0 (size: 0x4)
    float h_arm_L;                                                                    // 0x03F4 (size: 0x4)
    float h_leg_R;                                                                    // 0x03F8 (size: 0x4)
    float h_leg_L;                                                                    // 0x03FC (size: 0x4)
    class AActor* acor;                                                               // 0x0400 (size: 0x8)
    FTransform ranform;                                                               // 0x0410 (size: 0x30)
    FVector Loc;                                                                      // 0x0440 (size: 0xC)
    float h_mid;                                                                      // 0x044C (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintBeginPlay();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_antibreather_LOW_test_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_549EEF90442934198A936093EE58EB01();
    void ExecuteUbergraph_antibreather_LOW_test_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x450

#endif
