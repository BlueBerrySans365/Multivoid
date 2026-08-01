#ifndef UE4SS_SDK_carDropperFence_HPP
#define UE4SS_SDK_carDropperFence_HPP

class AcarDropperFence_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* fence2;                                               // 0x0258 (size: 0x8)
    class UStaticMeshComponent* fence1;                                               // 0x0260 (size: 0x8)

    void reachedByExplosion(FVector Location, float Damage, class Aexplosion_C* explosion);
    void ExecuteUbergraph_carDropperFence(int32 EntryPoint);
}; // Size: 0x268

#endif
