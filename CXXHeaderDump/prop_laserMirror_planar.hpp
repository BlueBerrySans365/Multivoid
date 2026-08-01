#ifndef UE4SS_SDK_prop_laserMirror_planar_HPP
#define UE4SS_SDK_prop_laserMirror_planar_HPP

class Aprop_laserMirror_planar_C : public Aprop_laserMirror_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0370 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0378 (size: 0x8)
    class UPlanarReflectionComponent* PlanarReflection;                               // 0x0380 (size: 0x8)

    void BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_laserMirror_planar_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_laserMirror_planar(int32 EntryPoint);
}; // Size: 0x388

#endif
