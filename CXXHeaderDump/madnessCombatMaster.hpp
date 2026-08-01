#ifndef UE4SS_SDK_madnessCombatMaster_HPP
#define UE4SS_SDK_madnessCombatMaster_HPP

class AmadnessCombatMaster_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* MC_music;                                                  // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float spwn;                                                                       // 0x0238 (size: 0x4)
    class Uui_madnessCombat_C* killcount;                                             // 0x0240 (size: 0x8)
    int32 Points;                                                                     // 0x0248 (size: 0x4)

    void spawnGrunt();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__madnessCombatMaster_MC_music_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
    void killed();
    void ExecuteUbergraph_madnessCombatMaster(int32 EntryPoint);
}; // Size: 0x24C

#endif
