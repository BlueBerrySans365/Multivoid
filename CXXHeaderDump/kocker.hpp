#ifndef UE4SS_SDK_kocker_HPP
#define UE4SS_SDK_kocker_HPP

class Akocker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    int32 I;                                                                          // 0x0238 (size: 0x4)

    void knock();
    void BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_kocker(int32 EntryPoint);
}; // Size: 0x23C

#endif
