#ifndef UE4SS_SDK_prop_waspnest_HPP
#define UE4SS_SDK_prop_waspnest_HPP

class Aprop_waspnest_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* wasps_Cue;                                                 // 0x0370 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0378 (size: 0x8)
    float Duration;                                                                   // 0x0380 (size: 0x4)
    bool chunk;                                                                       // 0x0384 (size: 0x1)
    bool Active;                                                                      // 0x0385 (size: 0x1)
    bool bees;                                                                        // 0x0386 (size: 0x1)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void broken();
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
    void hitted();
    void digUp();
    void enterWater(class AwaterVolume_C* Water);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_waspnest(int32 EntryPoint);
}; // Size: 0x387

#endif
