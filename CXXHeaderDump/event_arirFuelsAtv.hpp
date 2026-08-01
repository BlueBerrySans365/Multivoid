#ifndef UE4SS_SDK_event_arirFuelsAtv_HPP
#define UE4SS_SDK_event_arirFuelsAtv_HPP

class Aevent_arirFuelsAtv_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* cube;                                                 // 0x0250 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0258 (size: 0x8)
    TSubclassOf<class AActor> arir;                                                   // 0x0260 (size: 0x8)
    float fuel;                                                                       // 0x0268 (size: 0x4)
    float health;                                                                     // 0x026C (size: 0x4)

    void checkVisible();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_event_arirFuelsAtv(int32 EntryPoint);
}; // Size: 0x270

#endif
