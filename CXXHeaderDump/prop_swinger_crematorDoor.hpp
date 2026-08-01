#ifndef UE4SS_SDK_prop_swinger_crematorDoor_HPP
#define UE4SS_SDK_prop_swinger_crematorDoor_HPP

class Aprop_swinger_crematorDoor_C : public Aprop_swinger_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0430 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__prop_swinger_crematorDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void dmg();
    void ExecuteUbergraph_prop_swinger_crematorDoor(int32 EntryPoint);
}; // Size: 0x438

#endif
