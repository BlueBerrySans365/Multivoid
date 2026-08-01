#ifndef UE4SS_SDK_slapperSummoner_HPP
#define UE4SS_SDK_slapperSummoner_HPP

class UslapperSummoner_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FVector Start;                                                                    // 0x00B8 (size: 0xC)
    float Radius;                                                                     // 0x00C4 (size: 0x4)
    bool spawned;                                                                     // 0x00C8 (size: 0x1)
    float rep;                                                                        // 0x00CC (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_slapperSummoner(int32 EntryPoint);
}; // Size: 0xD0

#endif
