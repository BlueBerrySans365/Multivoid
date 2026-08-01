#ifndef UE4SS_SDK_prop_box_HPP
#define UE4SS_SDK_prop_box_HPP

class Aprop_box_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBoxComponent* Overlap;                                                     // 0x0370 (size: 0x8)
    class UStaticMeshComponent* papr;                                                 // 0x0378 (size: 0x8)
    class UInstancedStaticMeshComponent* drivesIn;                                    // 0x0380 (size: 0x8)
    bool Copy;                                                                        // 0x0388 (size: 0x1)
    TArray<Fstruct_signal_data> drives_copy;                                          // 0x0390 (size: 0x10)
    TArray<Fstruct_signalDataDynamic> drives;                                         // 0x03A0 (size: 0x10)
    TArray<bool> drives_in;                                                           // 0x03B0 (size: 0x10)
    bool opened;                                                                      // 0x03C0 (size: 0x1)
    bool noOverlap;                                                                   // 0x03C1 (size: 0x1)
    bool noOverlap2;                                                                  // 0x03C2 (size: 0x1)
    FString zipData;                                                                  // 0x03C8 (size: 0x10)
    bool canOverlap;                                                                  // 0x03D8 (size: 0x1)
    int32 Level;                                                                      // 0x03DC (size: 0x4)
    TArray<class UParticleSystemComponent*> effs;                                     // 0x03E0 (size: 0x10)
    TArray<class UPrimitiveComponent*> boxesTr;                                       // 0x03F0 (size: 0x10)
    class AActor* ac;                                                                 // 0x0400 (size: 0x8)

    void fillZipData(class Aprop_floppyDisc_Wh_C* zip);
    void canBeUsedHold(bool& return);
    void putZipOn(class UObject* Object, bool& return);
    void putLidOn(class UObject* Object, bool& return);
    void putDriveIn(class AActor* Object, const class UPrimitiveComponent*& lookAt, bool ignoreNotif, bool& return);
    void Init();
    void settype();
    void preGen();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void upd(FString NewParam);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void loadData(Fstruct_save Data, bool& return);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_prop_box(int32 EntryPoint);
}; // Size: 0x408

#endif
