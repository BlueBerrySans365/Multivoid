#ifndef UE4SS_SDK_ticker_disher_HPP
#define UE4SS_SDK_ticker_disher_HPP

class Aticker_disher_C : public Aticker_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)

    void ReceiveBeginPlay();
    void do();
    void ExecuteUbergraph_ticker_disher(int32 EntryPoint);
}; // Size: 0x240

#endif
