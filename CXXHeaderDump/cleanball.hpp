#ifndef UE4SS_SDK_cleanball_HPP
#define UE4SS_SDK_cleanball_HPP

class Acleanball_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0228 (size: 0x8)
    FVector fuckyou;                                                                  // 0x0230 (size: 0xC)
    class Ad_window_C* spogen;                                                        // 0x0240 (size: 0x8)
    class Aprop_sponge_C* sponge;                                                     // 0x0248 (size: 0x8)

    void BndEvt__cleanball_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_cleanball(int32 EntryPoint);
}; // Size: 0x250

#endif
