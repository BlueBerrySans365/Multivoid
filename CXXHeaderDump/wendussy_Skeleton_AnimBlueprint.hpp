#ifndef UE4SS_SDK_wendussy_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_wendussy_Skeleton_AnimBlueprint_HPP

class Uwendussy_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x02C8 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_2;                                          // 0x02F0 (size: 0x1B0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x04A0 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x04C0 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0670 (size: 0x1B0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0820 (size: 0x80)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x08A0 (size: 0x30)
    FAnimNode_Fabrik AnimGraphNode_Fabrik_1;                                          // 0x08D0 (size: 0x190)
    FAnimNode_Fabrik AnimGraphNode_Fabrik;                                            // 0x0A60 (size: 0x190)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0BF0 (size: 0x108)
    FVector lookAt;                                                                   // 0x0CF8 (size: 0xC)
    FVector rootLoc;                                                                  // 0x0D04 (size: 0xC)
    FRotator rootRot;                                                                 // 0x0D10 (size: 0xC)
    float T;                                                                          // 0x0D1C (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_wendussy_Skeleton_AnimBlueprint_AnimGraphNode_Fabrik_7C180DCE4D6DC25D858BC7943EFF268A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_wendussy_Skeleton_AnimBlueprint_AnimGraphNode_Fabrik_81F3F75544D159F2E09B8D8DF631FC0A();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_wendussy_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0xD20

#endif
