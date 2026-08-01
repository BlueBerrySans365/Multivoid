#ifndef UE4SS_SDK_hoelUfoAttack_HPP
#define UE4SS_SDK_hoelUfoAttack_HPP

class AhoelUfoAttack_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* thunder1;                                                  // 0x0228 (size: 0x8)
    class UAudioComponent* thunder;                                                   // 0x0230 (size: 0x8)
    class URadialForceComponent* RadialForce;                                         // 0x0238 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    class AActor* Target;                                                             // 0x0250 (size: 0x8)
    FVector Loc;                                                                      // 0x0258 (size: 0xC)

    void ReceiveBeginPlay();
    void BndEvt__hoelUfoAttack_thunder1_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
    void ExecuteUbergraph_hoelUfoAttack(int32 EntryPoint);
}; // Size: 0x264

#endif
