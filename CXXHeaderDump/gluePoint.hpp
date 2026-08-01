#ifndef UE4SS_SDK_gluePoint_HPP
#define UE4SS_SDK_gluePoint_HPP

class AgluePoint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0228 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Root;                                                 // 0x0238 (size: 0x8)
    bool glued;                                                                       // 0x0240 (size: 0x1)
    class AgluePoint_C* gluedTo;                                                      // 0x0248 (size: 0x8)
    class AActor* gluedA;                                                             // 0x0250 (size: 0x8)
    class AActor* gluedB;                                                             // 0x0258 (size: 0x8)
    class UPrimitiveComponent* A;                                                     // 0x0260 (size: 0x8)
    class UPrimitiveComponent* B;                                                     // 0x0268 (size: 0x8)

    void glue(class AgluePoint_C* Point, class AActor* gluedB);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_gluePoint(int32 EntryPoint);
}; // Size: 0x270

#endif
