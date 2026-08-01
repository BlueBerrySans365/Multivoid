#ifndef UE4SS_SDK_deskLamp_rigged_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_deskLamp_rigged_Skeleton_AnimBlueprint_HPP

class UdeskLamp_rigged_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x02C8 (size: 0x20)
    FAnimNode_CCDIK AnimGraphNode_CCDIK;                                              // 0x02F0 (size: 0x180)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0490 (size: 0x118)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x05A8 (size: 0x30)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x05D8 (size: 0x108)
    FVector lookAt;                                                                   // 0x06E0 (size: 0xC)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x06F0 (size: 0x8)
    FVector Point;                                                                    // 0x06F8 (size: 0xC)
    FRotator headRot;                                                                 // 0x0704 (size: 0xC)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void updateNeck();
    void BlueprintBeginPlay();
    void ExecuteUbergraph_deskLamp_rigged_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x710

#endif
