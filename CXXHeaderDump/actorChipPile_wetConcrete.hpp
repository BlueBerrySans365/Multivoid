#ifndef UE4SS_SDK_actorChipPile_wetConcrete_HPP
#define UE4SS_SDK_actorChipPile_wetConcrete_HPP

class AactorChipPile_wetConcrete_C : public AactorChipPile_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    float dryTimer;                                                                   // 0x0280 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_actorChipPile_wetConcrete(int32 EntryPoint);
}; // Size: 0x284

#endif
