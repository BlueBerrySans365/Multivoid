#ifndef UE4SS_SDK_shitDuende_HPP
#define UE4SS_SDK_shitDuende_HPP

class AshitDuende_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* eyes;                                                  // 0x0228 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    float a_a_E54BBBF4492F7FDD58AAE083ADD786C4;                                       // 0x0248 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_E54BBBF4492F7FDD58AAE083ADD786C4; // 0x024C (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x0250 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0258 (size: 0x8)
    bool afdsfdgdgd;                                                                  // 0x0260 (size: 0x1)

    void a__FinishedFunc();
    void a__UpdateFunc();
    void ReceiveBeginPlay();
    void diss();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_shitDuende(int32 EntryPoint);
}; // Size: 0x261

#endif
