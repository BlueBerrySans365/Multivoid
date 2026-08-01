#ifndef UE4SS_SDK_dreamBoulder_HPP
#define UE4SS_SDK_dreamBoulder_HPP

class AdreamBoulder_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    class Adream_boulders_C* dreamer;                                                 // 0x0238 (size: 0x8)
    FVector vel;                                                                      // 0x0240 (size: 0xC)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__dreamBoulder_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_dreamBoulder(int32 EntryPoint);
}; // Size: 0x24C

#endif
