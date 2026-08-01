#ifndef UE4SS_SDK_prop_tableclock_HPP
#define UE4SS_SDK_prop_tableclock_HPP

class Aprop_tableclock_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    class USkeletalMeshComponent* arrows;                                             // 0x0378 (size: 0x8)
    class UtableclockArrows_Skeleton_AnimBlueprint_C* Anim;                           // 0x0380 (size: 0x8)
    bool alarm;                                                                       // 0x0388 (size: 0x1)
    int32 alarmHour;                                                                  // 0x038C (size: 0x4)
    int32 alarmMin;                                                                   // 0x0390 (size: 0x4)
    bool ringing;                                                                     // 0x0394 (size: 0x1)
    bool alarmed;                                                                     // 0x0395 (size: 0x1)
    int32 lastDay;                                                                    // 0x0398 (size: 0x4)

    void setAlarmed();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    int32 conv(int32 Value, int32 Value2);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void upd();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void ActionName(class AmainPlayer_C* Player, FHitResult Hit, FString Name);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_tableclock(int32 EntryPoint);
}; // Size: 0x39C

#endif
