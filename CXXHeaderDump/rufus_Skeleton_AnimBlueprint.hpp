#ifndef UE4SS_SDK_rufus_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_rufus_Skeleton_AnimBlueprint_HPP

class Urufus_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x02F8 (size: 0xE8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x03E0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0400 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_5;                                          // 0x0420 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_4;                                          // 0x05D0 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_3;                                          // 0x0780 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_2;                                          // 0x0930 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x0AE0 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0C90 (size: 0x1B0)
    float Alpha;                                                                      // 0x0E40 (size: 0x4)
    FVector Loc;                                                                      // 0x0E44 (size: 0xC)
    float spine;                                                                      // 0x0E50 (size: 0x4)
    class APawn* Pawn;                                                                // 0x0E58 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_rufus_Skeleton_AnimBlueprint_AnimGraphNode_LookAt_CB9066314D8E4D6F43597797B1573482();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_rufus_Skeleton_AnimBlueprint_AnimGraphNode_LookAt_605FE054485F454ABE5C93A9AAAADF7C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_rufus_Skeleton_AnimBlueprint_AnimGraphNode_LookAt_3E7450BF4A0B257167D655BBC2063D03();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_rufus_Skeleton_AnimBlueprint_AnimGraphNode_LookAt_1FD9EC1A4D3448E35EA1C6BB048084A5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_rufus_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_0A792A764CE1672139CB70AB583D1C3C();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_rufus_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0xE60

#endif
