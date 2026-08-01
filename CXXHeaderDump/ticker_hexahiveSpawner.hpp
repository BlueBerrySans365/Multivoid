#ifndef UE4SS_SDK_ticker_hexahiveSpawner_HPP
#define UE4SS_SDK_ticker_hexahiveSpawner_HPP

class Aticker_hexahiveSpawner_C : public Aticker_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ticker_hexahiveSpawner(int32 EntryPoint);
}; // Size: 0x240

#endif
