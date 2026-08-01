#ifndef UE4SS_SDK_evilominousbunny_rig_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_evilominousbunny_rig_Skeleton_AnimBlueprint_HPP

class Uevilominousbunny_rig_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0410 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_7;                                          // 0x0430 (size: 0x1B0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x05E0 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_6;                                          // 0x0600 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_5;                                          // 0x07B0 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_4;                                          // 0x0960 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_3;                                          // 0x0B10 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_2;                                          // 0x0CC0 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x0E70 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x1020 (size: 0x1B0)
    FVector lookAt;                                                                   // 0x11D0 (size: 0xC)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_evilominousbunny_rig_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x11DC

#endif
