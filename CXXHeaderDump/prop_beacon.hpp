#ifndef UE4SS_SDK_prop_beacon_HPP
#define UE4SS_SDK_prop_beacon_HPP

class Aprop_beacon_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UParticleSystemComponent* eff_light2;                                       // 0x0370 (size: 0x8)
    class UParticleSystemComponent* eff_light1;                                       // 0x0378 (size: 0x8)
    class UParticleSystemComponent* eff_light;                                        // 0x0380 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0388 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0390 (size: 0x8)
    class Ubeacon_Skeleton_AnimBlueprint_C* AnimInst;                                 // 0x0398 (size: 0x8)
    bool IsActive;                                                                    // 0x03A0 (size: 0x1)
    bool animat;                                                                      // 0x03A1 (size: 0x1)

    void updRadarComponent();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void Open(bool Condition);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_beacon(int32 EntryPoint);
}; // Size: 0x3A2

#endif
