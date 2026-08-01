#ifndef UE4SS_SDK_kerfusPossessor_HPP
#define UE4SS_SDK_kerfusPossessor_HPP

class AkerfusPossessor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    class Ap_kerfus_C* kerfu;                                                         // 0x0230 (size: 0x8)
    class AkerfurOmega_C* kerfuOm;                                                    // 0x0238 (size: 0x8)
    class AbaseWindow_C* window;                                                      // 0x0240 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0248 (size: 0x8)
    class AmainGamemode_C* GameMode;                                                  // 0x0250 (size: 0x8)

    void possssss();
    void spawnSkerfuro();
    void poss();
    void skerfuro();
    void checkKerfuro();
    void ReceiveBeginPlay();
    void kerfusTimer();
    void kerfuroTimer();
    void manualSpawnMurderfur();
    void ExecuteUbergraph_kerfusPossessor(int32 EntryPoint);
}; // Size: 0x258

#endif
