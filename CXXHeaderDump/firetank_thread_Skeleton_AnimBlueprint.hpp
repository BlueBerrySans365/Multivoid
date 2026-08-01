#ifndef UE4SS_SDK_firetank_thread_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_firetank_thread_Skeleton_AnimBlueprint_HPP

class Ufiretank_thread_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x02F8 (size: 0x118)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0410 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13;                                 // 0x0430 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12;                                 // 0x0538 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11;                                 // 0x0640 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10;                                 // 0x0748 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9;                                  // 0x0850 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8;                                  // 0x0958 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7;                                  // 0x0A60 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;                                  // 0x0B68 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;                                  // 0x0C70 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x0D78 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0E80 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0F88 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x1090 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x1198 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x12A0 (size: 0x20)
    FTransform wh_0;                                                                  // 0x12C0 (size: 0x30)
    FTransform wh_1;                                                                  // 0x12F0 (size: 0x30)
    FTransform wh_2;                                                                  // 0x1320 (size: 0x30)
    FTransform wh_3;                                                                  // 0x1350 (size: 0x30)
    FTransform wh_4;                                                                  // 0x1380 (size: 0x30)
    FTransform wh_5;                                                                  // 0x13B0 (size: 0x30)
    FTransform wh_6;                                                                  // 0x13E0 (size: 0x30)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_5D0A99E240AE4E03BAFC58A79E0E9DD4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_9086962B4973992A8BD417BBF7442FF4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_6CA77A5A4FFD6F42D40940B676CEB093();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_A3AED5844C090AF361A76AA06930852E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_86ADD3634E9BC8EF5B099385E568AE6E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_833FBEF94CB71C66745F40BAADC860F3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_F147C6E24231AA3DDA64248CEB322806();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_420FAE69480B0E00A1632E94697ADC6F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_B2E081E74C88F43EC0A429B664547407();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_BE03E518430F8F3EB33ED7BAF6EC4412();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_0B36ED2347027C1F75AC528D249C98BD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_C29957EE421C58AD15EE71948BB31E6D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_D7C199B247BEB7ED0ED1DD87B5698964();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_40FD87CF47BEEF6D2853F5BBFFEEB3B0();
    void ExecuteUbergraph_firetank_thread_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x1410

#endif
