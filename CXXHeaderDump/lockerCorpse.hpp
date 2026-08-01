#ifndef UE4SS_SDK_lockerCorpse_HPP
#define UE4SS_SDK_lockerCorpse_HPP

class AlockerCorpse_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UChildActorComponent* gib20;                                                // 0x0228 (size: 0x8)
    class UChildActorComponent* gib19;                                                // 0x0230 (size: 0x8)
    class UChildActorComponent* gib18;                                                // 0x0238 (size: 0x8)
    class UChildActorComponent* gib17;                                                // 0x0240 (size: 0x8)
    class UChildActorComponent* gib16;                                                // 0x0248 (size: 0x8)
    class UChildActorComponent* gib15;                                                // 0x0250 (size: 0x8)
    class UChildActorComponent* gib14;                                                // 0x0258 (size: 0x8)
    class UChildActorComponent* gib13;                                                // 0x0260 (size: 0x8)
    class UChildActorComponent* gib12;                                                // 0x0268 (size: 0x8)
    class UChildActorComponent* gib11;                                                // 0x0270 (size: 0x8)
    class UChildActorComponent* gib10;                                                // 0x0278 (size: 0x8)
    class UChildActorComponent* gib9;                                                 // 0x0280 (size: 0x8)
    class UChildActorComponent* gib8;                                                 // 0x0288 (size: 0x8)
    class UChildActorComponent* gib7;                                                 // 0x0290 (size: 0x8)
    class UChildActorComponent* gib6;                                                 // 0x0298 (size: 0x8)
    class UChildActorComponent* gib5;                                                 // 0x02A0 (size: 0x8)
    class UChildActorComponent* gib4;                                                 // 0x02A8 (size: 0x8)
    class UChildActorComponent* gib3;                                                 // 0x02B0 (size: 0x8)
    class UChildActorComponent* gib2;                                                 // 0x02B8 (size: 0x8)
    class UChildActorComponent* gib1;                                                 // 0x02C0 (size: 0x8)
    class UChildActorComponent* gib;                                                  // 0x02C8 (size: 0x8)
    class UChildActorComponent* gib21;                                                // 0x02D0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02D8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02E0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_lockerCorpse(int32 EntryPoint);
}; // Size: 0x2E8

#endif
