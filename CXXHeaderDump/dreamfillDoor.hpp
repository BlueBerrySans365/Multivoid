#ifndef UE4SS_SDK_dreamfillDoor_HPP
#define UE4SS_SDK_dreamfillDoor_HPP

class AdreamfillDoor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class UStaticMeshComponent* doorL;                                                // 0x0230 (size: 0x8)
    class UStaticMeshComponent* doorR;                                                // 0x0238 (size: 0x8)
    class UStaticMeshComponent* doorFr;                                               // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)

    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_dreamfillDoor(int32 EntryPoint);
}; // Size: 0x250

#endif
