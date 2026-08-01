#ifndef UE4SS_SDK_ticker_mannequinSpawner_HPP
#define UE4SS_SDK_ticker_mannequinSpawner_HPP

class Aticker_mannequinSpawner_C : public Aticker_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ticker_mannequinSpawner(int32 EntryPoint);
}; // Size: 0x240

#endif
