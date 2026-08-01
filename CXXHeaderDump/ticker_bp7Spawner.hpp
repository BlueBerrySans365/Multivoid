#ifndef UE4SS_SDK_ticker_bp7Spawner_HPP
#define UE4SS_SDK_ticker_bp7Spawner_HPP

class Aticker_bp7Spawner_C : public Aticker_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ticker_bp7Spawner(int32 EntryPoint);
}; // Size: 0x240

#endif
