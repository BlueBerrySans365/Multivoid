#ifndef UE4SS_SDK_prop_radArgem_HPP
#define UE4SS_SDK_prop_radArgem_HPP

class Aprop_radArgem_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPointLightComponent* S;                                                    // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0378 (size: 0x8)
    float a_a_5E966E8C4BC9C5219E739AA419A85DD5;                                       // 0x0380 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_5E966E8C4BC9C5219E739AA419A85DD5; // 0x0384 (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x0388 (size: 0x8)
    int32 I;                                                                          // 0x0390 (size: 0x4)

    void ht();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void a__FinishedFunc();
    void a__UpdateFunc();
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_radArgem(int32 EntryPoint);
}; // Size: 0x394

#endif
