#ifndef UE4SS_SDK_ticker_flickerer_HPP
#define UE4SS_SDK_ticker_flickerer_HPP

class Aticker_flickerer_C : public Aticker_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    TArray<class Atrigger_lightRoot_C*> roots;                                        // 0x0240 (size: 0x10)
    float Min;                                                                        // 0x0250 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_ticker_flickerer(int32 EntryPoint);
}; // Size: 0x254

#endif
