#ifndef UE4SS_SDK_ambienceMastter_HPP
#define UE4SS_SDK_ambienceMastter_HPP

class AambienceMastter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0228 (size: 0x8)
    TArray<class Atrigger_ambientSound_C*> ambience_triggers;                         // 0x0230 (size: 0x10)
    TArray<FIntVector> bounded;                                                       // 0x0240 (size: 0x10)
    TArray<int32> priorities;                                                         // 0x0250 (size: 0x10)
    TArray<float> A;                                                                  // 0x0260 (size: 0x10)
    TArray<class Atrigger_ambientSound_C*> ambiences;                                 // 0x0270 (size: 0x10)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ambienceMastter(int32 EntryPoint);
}; // Size: 0x280

#endif
