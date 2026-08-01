#ifndef UE4SS_SDK_prop_arg2_HPP
#define UE4SS_SDK_prop_arg2_HPP

class Aprop_arg2_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* argemusScream;                                             // 0x0370 (size: 0x8)
    int32 Size;                                                                       // 0x0378 (size: 0x4)
    bool used;                                                                        // 0x037C (size: 0x1)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void ReceiveBeginPlay();
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void microwave(class Aprop_microwave_C* microwave);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_arg2(int32 EntryPoint);
}; // Size: 0x37D

#endif
