#ifndef UE4SS_SDK_prop_obelisk_HPP
#define UE4SS_SDK_prop_obelisk_HPP

class Aprop_obelisk_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x0370 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0378 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0380 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0388 (size: 0x8)
    class UAudioComponent* obelisk_on;                                                // 0x0390 (size: 0x8)
    class UAudioComponent* obelisk_loop;                                              // 0x0398 (size: 0x8)
    class USphereComponent* Walk;                                                     // 0x03A0 (size: 0x8)

    void hookTension(class Ahook_C* hook);
    void BndEvt__obelisk_walk_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_prop_obelisk(int32 EntryPoint);
}; // Size: 0x3A8

#endif
