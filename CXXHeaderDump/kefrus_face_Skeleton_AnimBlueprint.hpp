#ifndef UE4SS_SDK_kefrus_face_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_kefrus_face_Skeleton_AnimBlueprint_HPP

class Ukefrus_face_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x02F8 (size: 0x80)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0378 (size: 0x48)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x03C0 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;                                  // 0x03E0 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x04E8 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;                                  // 0x0508 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x0610 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0718 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0820 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0928 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0A30 (size: 0x108)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x0B38 (size: 0xC8)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0C00 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x0D58 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0D80 (size: 0x28)
    float angy;                                                                       // 0x0DA8 (size: 0x4)
    FVector eye1;                                                                     // 0x0DAC (size: 0xC)
    FVector eye2;                                                                     // 0x0DB8 (size: 0xC)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_kefrus_face_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0xDC4

#endif
