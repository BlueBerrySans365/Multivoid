#ifndef UE4SS_SDK_beacon_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_beacon_Skeleton_AnimBlueprint_HPP

class Ubeacon_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    float closed;                                                                     // 0x02F8 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_beacon_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x2FC

#endif
