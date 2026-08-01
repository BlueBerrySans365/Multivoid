#ifndef UE4SS_SDK_prop_gdetec_HPP
#define UE4SS_SDK_prop_gdetec_HPP

class Aprop_gdetec_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UParticleSystemComponent* l4;                                               // 0x0370 (size: 0x8)
    class UParticleSystemComponent* l0;                                               // 0x0378 (size: 0x8)
    class UParticleSystemComponent* l1;                                               // 0x0380 (size: 0x8)
    class UParticleSystemComponent* l3;                                               // 0x0388 (size: 0x8)
    class UParticleSystemComponent* l2;                                               // 0x0390 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0398 (size: 0x8)
    class Ucomp_emf_C* comp_emf;                                                      // 0x03A0 (size: 0x8)
    class UAudioComponent* beep;                                                      // 0x03A8 (size: 0x8)
    TArray<class AActor*> ovs;                                                        // 0x03B0 (size: 0x10)
    float T;                                                                          // 0x03C0 (size: 0x4)
    float mt;                                                                         // 0x03C4 (size: 0x4)
    bool Active;                                                                      // 0x03C8 (size: 0x1)
    class USphereComponent* sph;                                                      // 0x03D0 (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void returnSignal(float signalStrength);
    void ExecuteUbergraph_prop_gdetec(int32 EntryPoint);
}; // Size: 0x3D8

#endif
