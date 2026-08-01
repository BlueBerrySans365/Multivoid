#ifndef UE4SS_SDK_prop_driveRack_HPP
#define UE4SS_SDK_prop_driveRack_HPP

class Aprop_driveRack_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBoxComponent* Bottom;                                                      // 0x0370 (size: 0x8)
    class USphereComponent* Top;                                                      // 0x0378 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0380 (size: 0x8)
    class UInstancedStaticMeshComponent* drives;                                      // 0x0388 (size: 0x8)
    TArray<class UBoxComponent*> Slots;                                               // 0x0390 (size: 0x10)
    TArray<Fstruct_signalDataDynamic> Data;                                           // 0x03A0 (size: 0x10)
    TArray<bool> has;                                                                 // 0x03B0 (size: 0x10)
    class AActor* Temp;                                                               // 0x03C0 (size: 0x8)
    TArray<class UParticleSystemComponent*> lights;                                   // 0x03C8 (size: 0x10)
    class AActor* ac;                                                                 // 0x03D8 (size: 0x8)

    void putDriveIn(class UObject* lookAt, class AActor* drive, bool ignoreNotif, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void addDrive(class AActor* InputPin);
    void getDrive(class UBoxComponent* comp, class AmainPlayer_C* Target);
    void gen();
    void UserConstructionScript();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void BndEvt__prop_driveRack_bottom_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void Tick();
    void ExecuteUbergraph_prop_driveRack(int32 EntryPoint);
}; // Size: 0x3E0

#endif
