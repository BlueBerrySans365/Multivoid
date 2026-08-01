#ifndef UE4SS_SDK_prop_wireComponent_magnet_HPP
#define UE4SS_SDK_prop_wireComponent_magnet_HPP

class Aprop_wireComponent_magnet_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0378 (size: 0x8)
    TArray<class UPrimitiveComponent*> comps;                                         // 0x0380 (size: 0x10)
    float Radius;                                                                     // 0x0390 (size: 0x4)
    float peakForce;                                                                  // 0x0394 (size: 0x4)

    void addObj(class UPrimitiveComponent* InputPin);
    void UserConstructionScript();
    void BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void wirePass(class Awire_C* wire);
    void ExecuteUbergraph_prop_wireComponent_magnet(int32 EntryPoint);
}; // Size: 0x398

#endif
