#ifndef UE4SS_SDK_grayboar_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_grayboar_Skeleton_AnimBlueprint_HPP

class Ugrayboar_Skeleton_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x02F8 (size: 0x80)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0378 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_15;                                 // 0x0398 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x04A0 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_14;                                 // 0x04C0 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13;                                 // 0x05C8 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12;                                 // 0x06D0 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11;                                 // 0x07D8 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10;                                 // 0x08E0 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9;                                  // 0x09E8 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8;                                  // 0x0AF0 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7;                                  // 0x0BF8 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;                                  // 0x0D00 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;                                  // 0x0E08 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x0F10 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x1018 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x1120 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x1228 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x1330 (size: 0x108)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x1438 (size: 0x48)
    class AgrayboarPawn_C* Pawn;                                                      // 0x1480 (size: 0x8)
    class Agrayboar_C* grayboar;                                                      // 0x1488 (size: 0x8)
    float Turn;                                                                       // 0x1490 (size: 0x4)
    float Speed;                                                                      // 0x1494 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_CA4A8C834029D1E8ACA24E921FE5ED26();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_355FC8BC40E8DED30705449ECE451F3C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_E9AFC088409D5F9DC523F5B55FB8FED9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_C91606E34B761FDCFE84F98F91515035();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_37F32B0B45AE7329F17F328E01A862BE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_BB7D726D47A16213744C0D8602A78D6C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_22E918884617AA3E93950E8ACA019259();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_D60A45F94269E4C3F229B7863DDD37FC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_7FB00D314E3C822B8B2884B3D1CF75C6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_0386D6844AC1536B9D989CBB76A143EA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_0C633334498200ABF6965780EA19CBCB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_AC9EE7CF4C2822F6E381CC81FDF1D399();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_A66C639344608BD1B02C2082F0866857();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_B40CF18A488B8A5B51A695BA242103D7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_B7F731D146F3E28DBF0E389ADD43EB7E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_5BF9116C4333B33E38C3FD95310B509E();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_grayboar_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x1498

#endif
