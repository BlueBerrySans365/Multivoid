#ifndef UE4SS_SDK_comp_radarPoint_HPP
#define UE4SS_SDK_comp_radarPoint_HPP

class Ucomp_radarPoint_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class AActor* Owner;                                                              // 0x00B8 (size: 0x8)
    bool important;                                                                   // 0x00C0 (size: 0x1)
    bool Active;                                                                      // 0x00C1 (size: 0x1)
    FLinearColor Color;                                                               // 0x00C4 (size: 0x10)

    void ReceiveBeginPlay();
    void des(class AActor* DestroyedActor);
    void ExecuteUbergraph_comp_radarPoint(int32 EntryPoint);
}; // Size: 0xD4

#endif
