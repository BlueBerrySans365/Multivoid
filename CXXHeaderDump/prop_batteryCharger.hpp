#ifndef UE4SS_SDK_prop_batteryCharger_HPP
#define UE4SS_SDK_prop_batteryCharger_HPP

class Aprop_batteryCharger_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UBoxComponent* c4;                                                          // 0x03B0 (size: 0x8)
    class UBoxComponent* C3;                                                          // 0x03B8 (size: 0x8)
    class UBoxComponent* C2;                                                          // 0x03C0 (size: 0x8)
    class UBoxComponent* C1;                                                          // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* batt4;                                                // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* batt3;                                                // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* batt2;                                                // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* batt1;                                                // 0x03E8 (size: 0x8)
    float B1;                                                                         // 0x03F0 (size: 0x4)
    float B2;                                                                         // 0x03F4 (size: 0x4)
    float b3;                                                                         // 0x03F8 (size: 0x4)
    float b4;                                                                         // 0x03FC (size: 0x4)
    int32 lookingAt;                                                                  // 0x0400 (size: 0x4)
    TArray<class UStaticMeshComponent*> battArray;                                    // 0x0408 (size: 0x10)
    TArray<class UPrimitiveComponent*> battCArrayy;                                   // 0x0418 (size: 0x10)
    class Acord_C* objCord1;                                                          // 0x0428 (size: 0x8)
    bool powered;                                                                     // 0x0430 (size: 0x1)
    int32 plugged;                                                                    // 0x0434 (size: 0x4)

    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void putIn(class AmainPlayer_C* InputPin);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void upd();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ExecuteUbergraph_prop_batteryCharger(int32 EntryPoint);
}; // Size: 0x438

#endif
