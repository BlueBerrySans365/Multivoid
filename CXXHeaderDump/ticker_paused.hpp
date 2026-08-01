#ifndef UE4SS_SDK_ticker_paused_HPP
#define UE4SS_SDK_ticker_paused_HPP

class Aticker_paused_C : public Aticker_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    float A;                                                                          // 0x0240 (size: 0x4)

    void Replace();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ticker_paused(int32 EntryPoint);
}; // Size: 0x244

#endif
