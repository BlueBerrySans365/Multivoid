#ifndef UE4SS_SDK_ticker_wispSpawner_HPP
#define UE4SS_SDK_ticker_wispSpawner_HPP

class Aticker_wispSpawner_C : public Aticker_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    TMap<TSubclassOf<AActor>, float> wisps;                                           // 0x0240 (size: 0x50)
    bool skipFirst;                                                                   // 0x0290 (size: 0x1)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ticker_wispSpawner(int32 EntryPoint);
}; // Size: 0x291

#endif
