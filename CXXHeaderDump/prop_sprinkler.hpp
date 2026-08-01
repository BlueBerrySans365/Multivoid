#ifndef UE4SS_SDK_prop_sprinkler_HPP
#define UE4SS_SDK_prop_sprinkler_HPP

class Aprop_sprinkler_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    class USphereComponent* wateringRadius;                                           // 0x0378 (size: 0x8)
    class UParticleSystemComponent* eff_water;                                        // 0x0380 (size: 0x8)
    class UStaticMeshComponent* head;                                                 // 0x0388 (size: 0x8)
    bool Active;                                                                      // 0x0390 (size: 0x1)
    class AgroundHose_C* hose;                                                        // 0x0398 (size: 0x8)
    float spd;                                                                        // 0x03A0 (size: 0x4)
    FName hose_key;                                                                   // 0x03A4 (size: 0x8)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void processKeys(bool& return);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void connectHose(class AgroundHose_C* hose, bool& return);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void dowater();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void ExecuteUbergraph_prop_sprinkler(int32 EntryPoint);
}; // Size: 0x3AC

#endif
