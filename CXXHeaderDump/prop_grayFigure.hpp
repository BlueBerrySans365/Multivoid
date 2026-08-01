#ifndef UE4SS_SDK_prop_grayFigure_HPP
#define UE4SS_SDK_prop_grayFigure_HPP

class Aprop_grayFigure_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0370 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0378 (size: 0x8)
    class UayyLmaoFigure_rigged_Skeleton_AnimBlueprint_C* Anim;                       // 0x0380 (size: 0x8)
    bool R;                                                                           // 0x0388 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_grayFigure(int32 EntryPoint);
}; // Size: 0x389

#endif
