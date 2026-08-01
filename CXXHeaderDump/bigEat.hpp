#ifndef UE4SS_SDK_bigEat_HPP
#define UE4SS_SDK_bigEat_HPP

class AbigEat_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0228 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    float move_a_9D8BC887453A19DA9CB6DC8DACAC47FD;                                    // 0x0240 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> move__Direction_9D8BC887453A19DA9CB6DC8DACAC47FD; // 0x0244 (size: 0x1)
    class UTimelineComponent* move;                                                   // 0x0248 (size: 0x8)
    FString NewVar_0;                                                                 // 0x0250 (size: 0x10)

    void move__FinishedFunc();
    void move__UpdateFunc();
    void OnNotifyEnd_FC9E5B7C47E61ABA5EFA77B4706A7BEE(FName NotifyName);
    void OnNotifyBegin_FC9E5B7C47E61ABA5EFA77B4706A7BEE(FName NotifyName);
    void OnInterrupted_FC9E5B7C47E61ABA5EFA77B4706A7BEE(FName NotifyName);
    void OnBlendOut_FC9E5B7C47E61ABA5EFA77B4706A7BEE(FName NotifyName);
    void OnCompleted_FC9E5B7C47E61ABA5EFA77B4706A7BEE(FName NotifyName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_bigEat(int32 EntryPoint);
}; // Size: 0x260

#endif
