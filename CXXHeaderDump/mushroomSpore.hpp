#ifndef UE4SS_SDK_mushroomSpore_HPP
#define UE4SS_SDK_mushroomSpore_HPP

class AmushroomSpore_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0228 (size: 0x8)

    void BndEvt__mushroomSpore_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_mushroomSpore(int32 EntryPoint);
}; // Size: 0x230

#endif
