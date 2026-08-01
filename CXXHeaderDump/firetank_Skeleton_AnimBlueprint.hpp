#ifndef UE4SS_SDK_firetank_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_firetank_Skeleton_AnimBlueprint_HPP

class Ufiretank_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x02F8 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0318 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x0338 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0440 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0548 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0650 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0758 (size: 0x108)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0860 (size: 0x80)
    FRotator rot_Z;                                                                   // 0x08E0 (size: 0xC)
    FRotator rot_arm;                                                                 // 0x08EC (size: 0xC)
    FRotator rot_neck;                                                                // 0x08F8 (size: 0xC)
    FRotator rot_head;                                                                // 0x0904 (size: 0xC)
    FRotator rot_gun;                                                                 // 0x0910 (size: 0xC)
    float Height;                                                                     // 0x091C (size: 0x4)
    FVector Point;                                                                    // 0x0920 (size: 0xC)
    class APawn* Pawn;                                                                // 0x0930 (size: 0x8)
    class USkeletalMeshComponent* Component;                                          // 0x0938 (size: 0x8)
    FRotator rot_Z_final;                                                             // 0x0940 (size: 0xC)
    FRotator rot_gun_final;                                                           // 0x094C (size: 0xC)
    float gunPitch;                                                                   // 0x0958 (size: 0x4)
    class APawn* targetPawn;                                                          // 0x0960 (size: 0x8)
    float gunPitch_prev;                                                              // 0x0968 (size: 0x4)
    float arm;                                                                        // 0x096C (size: 0x4)
    float arm_prev;                                                                   // 0x0970 (size: 0x4)
    float zrot_prev;                                                                  // 0x0974 (size: 0x4)
    float arm_d;                                                                      // 0x0978 (size: 0x4)
    float zrot_d;                                                                     // 0x097C (size: 0x4)
    float gunPitch_d;                                                                 // 0x0980 (size: 0x4)
    bool hold_arm;                                                                    // 0x0984 (size: 0x1)
    float armSpeed;                                                                   // 0x0988 (size: 0x4)
    FVector defPoint;                                                                 // 0x098C (size: 0xC)
    float followPointSpeed;                                                           // 0x0998 (size: 0x4)
    float zrotSpeedMult;                                                              // 0x099C (size: 0x4)
    float zrot_maxSpeed;                                                              // 0x09A0 (size: 0x4)
    float gun_maxSpeed;                                                               // 0x09A4 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void setTargetPoint();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_BCCC0EF34B8CA6CCB94793A64591E3AF();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_firetank_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x9A8

#endif
