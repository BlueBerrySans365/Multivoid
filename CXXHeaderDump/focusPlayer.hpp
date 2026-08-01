#ifndef UE4SS_SDK_focusPlayer_HPP
#define UE4SS_SDK_focusPlayer_HPP

class AfocusPlayer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x0230 (size: 0x8)
    float Alpha;                                                                      // 0x0238 (size: 0x4)
    FRotator rot_A;                                                                   // 0x023C (size: 0xC)
    FFloatSpringState spring;                                                         // 0x0248 (size: 0x8)
    float springFloat;                                                                // 0x0250 (size: 0x4)
    float Delta;                                                                      // 0x0254 (size: 0x4)
    float Stiffness;                                                                  // 0x0258 (size: 0x4)
    float Damping;                                                                    // 0x025C (size: 0x4)
    float Mass;                                                                       // 0x0260 (size: 0x4)
    float InterpolationSpeed;                                                         // 0x0264 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_focusPlayer(int32 EntryPoint);
}; // Size: 0x268

#endif
