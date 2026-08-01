#ifndef UE4SS_SDK_ticker_treeSpawner_HPP
#define UE4SS_SDK_ticker_treeSpawner_HPP

class Aticker_treeSpawner_C : public Aticker_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ticker_treeSpawner(int32 EntryPoint);
}; // Size: 0x240

#endif
