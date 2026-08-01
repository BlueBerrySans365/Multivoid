#ifndef UE4SS_SDK_dreamBurger_coll_HPP
#define UE4SS_SDK_dreamBurger_coll_HPP

class AdreamBurger_coll_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0228 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class Adream_burger_C* dream;                                                     // 0x0240 (size: 0x8)

    void ini(class Adream_burger_C* dream1);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_dreamBurger_coll(int32 EntryPoint);
}; // Size: 0x248

#endif
