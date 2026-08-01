#ifndef UE4SS_SDK_furfurAltarSpawner_HPP
#define UE4SS_SDK_furfurAltarSpawner_HPP

class AfurfurAltarSpawner_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0250 (size: 0x8)
    class Adirthole_item_C* hole;                                                     // 0x0258 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void Dest(class AActor* DestroyedActor);
    void ExecuteUbergraph_furfurAltarSpawner(int32 EntryPoint);
}; // Size: 0x260

#endif
