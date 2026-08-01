#ifndef UE4SS_SDK_theBody_HPP
#define UE4SS_SDK_theBody_HPP

class AtheBody_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x0228 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__theBody_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_theBody(int32 EntryPoint);
}; // Size: 0x248

#endif
