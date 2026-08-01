#ifndef UE4SS_SDK_gameover_HPP
#define UE4SS_SDK_gameover_HPP

class Agameover_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* deadTone;                                                  // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float Alpha;                                                                      // 0x0238 (size: 0x4)
    float Speed;                                                                      // 0x023C (size: 0x4)
    FText Text;                                                                       // 0x0240 (size: 0x18)
    float Delay;                                                                      // 0x0258 (size: 0x4)
    bool delayed;                                                                     // 0x025C (size: 0x1)
    FString String;                                                                   // 0x0260 (size: 0x10)
    class Uui_gameoverScreen_C* Widget;                                               // 0x0270 (size: 0x8)
    int32 N;                                                                          // 0x0278 (size: 0x4)
    FString string_or;                                                                // 0x0280 (size: 0x10)
    float Rand;                                                                       // 0x0290 (size: 0x4)
    bool curs;                                                                        // 0x0294 (size: 0x1)
    int32 last;                                                                       // 0x0298 (size: 0x4)
    bool fin;                                                                         // 0x029C (size: 0x1)
    float PreDelay;                                                                   // 0x02A0 (size: 0x4)
    float postDelay;                                                                  // 0x02A4 (size: 0x4)

    void conv();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_gameover(int32 EntryPoint);
}; // Size: 0x2A8

#endif
