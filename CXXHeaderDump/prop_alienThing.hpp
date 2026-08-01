#ifndef UE4SS_SDK_prop_alienThing_HPP
#define UE4SS_SDK_prop_alienThing_HPP

class Aprop_alienThing_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0370 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0378 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0380 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0388 (size: 0x8)
    float Radius;                                                                     // 0x0390 (size: 0x4)
    TArray<class UPrimitiveComponent*> comps;                                         // 0x0398 (size: 0x10)

    void addObj(class UPrimitiveComponent* InputPin);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_prop_alienThing(int32 EntryPoint);
}; // Size: 0x3A8

#endif
