#ifndef UE4SS_SDK_prop_hacksaw_HPP
#define UE4SS_SDK_prop_hacksaw_HPP

class Aprop_hacksaw_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float complete;                                                                   // 0x0370 (size: 0x4)
    class Aprop_C* sawingProp;                                                        // 0x0378 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0380 (size: 0x8)
    float vol;                                                                        // 0x0388 (size: 0x4)
    FName Drop;                                                                       // 0x038C (size: 0x8)
    int32 Amount;                                                                     // 0x0394 (size: 0x4)
    float Time;                                                                       // 0x0398 (size: 0x4)
    class Uui_linearProgress_C* Widget;                                               // 0x03A0 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x03A8 (size: 0x8)

    void processMat(bool& return);
    void completeSaw();
    void ReceiveTick(float DeltaSeconds);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void sawSound();
    void ReceiveDestroyed();
    void ExecuteUbergraph_prop_hacksaw(int32 EntryPoint);
}; // Size: 0x3B0

#endif
