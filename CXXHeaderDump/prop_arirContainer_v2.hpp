#ifndef UE4SS_SDK_prop_arirContainer_v2_HPP
#define UE4SS_SDK_prop_arirContainer_v2_HPP

class Aprop_arirContainer_v2_C : public Aprop_arirContainer_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)
    class UAudioComponent* sparkSh_Cue;                                               // 0x0440 (size: 0x8)
    class UAudioComponent* arirCrateAlarm_s;                                          // 0x0448 (size: 0x8)
    class UAudioComponent* arirCrateAlarm;                                            // 0x0450 (size: 0x8)
    bool alarm;                                                                       // 0x0458 (size: 0x1)
    class AarirSlapper_C* slapper;                                                    // 0x0460 (size: 0x8)

    void D(class AActor* DestroyedActor);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_arirContainer_v2(int32 EntryPoint);
}; // Size: 0x468

#endif
