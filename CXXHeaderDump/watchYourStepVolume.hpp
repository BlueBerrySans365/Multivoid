#ifndef UE4SS_SDK_watchYourStepVolume_HPP
#define UE4SS_SDK_watchYourStepVolume_HPP

class AwatchYourStepVolume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UArrowComponent* kickDir;                                                   // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

    void BndEvt__watchYourStepVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_watchYourStepVolume(int32 EntryPoint);
}; // Size: 0x240

#endif
