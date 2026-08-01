#ifndef UE4SS_SDK_ticker_yellowWispSpawner_HPP
#define UE4SS_SDK_ticker_yellowWispSpawner_HPP

class Aticker_yellowWispSpawner_C : public Aticker_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    FVector P;                                                                        // 0x0240 (size: 0xC)
    TArray<class UPhysicalMaterial*> mats;                                            // 0x0250 (size: 0x10)
    TArray<class TSubclassOf<AActor>> deer;                                           // 0x0260 (size: 0x10)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ticker_yellowWispSpawner(int32 EntryPoint);
}; // Size: 0x270

#endif
