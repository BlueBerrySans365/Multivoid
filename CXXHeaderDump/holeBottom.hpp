#ifndef UE4SS_SDK_holeBottom_HPP
#define UE4SS_SDK_holeBottom_HPP

class AholeBottom_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* mirror;                                               // 0x0258 (size: 0x8)
    class UStaticMeshComponent* holeBottomRoom_piles;                                 // 0x0260 (size: 0x8)
    class UStaticMeshComponent* holeBottomRoom;                                       // 0x0268 (size: 0x8)
    class UStaticMeshComponent* beamReflector;                                        // 0x0270 (size: 0x8)
    class UStaticMeshComponent* beamReceiver;                                         // 0x0278 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_holeBottom(int32 EntryPoint);
}; // Size: 0x280

#endif
