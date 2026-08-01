#ifndef UE4SS_SDK_ticker_insomniacSpawner_HPP
#define UE4SS_SDK_ticker_insomniacSpawner_HPP

class Aticker_insomniacSpawner_C : public Aticker_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void insomniacDest(class AActor* DestroyedActor);
    void ExecuteUbergraph_ticker_insomniacSpawner(int32 EntryPoint);
}; // Size: 0x240

#endif
