#ifndef UE4SS_SDK_arirTrasher_HPP
#define UE4SS_SDK_arirTrasher_HPP

class AarirTrasher_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0250 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0258 (size: 0x8)
    int32 Count;                                                                      // 0x0260 (size: 0x4)

    void ReceiveBeginPlay();
    void trash();
    void ExecuteUbergraph_arirTrasher(int32 EntryPoint);
}; // Size: 0x264

#endif
