#ifndef UE4SS_SDK_prop_drive_HPP
#define UE4SS_SDK_prop_drive_HPP

class Aprop_drive_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UParticleSystemComponent* P;                                                // 0x0370 (size: 0x8)
    class AdriveSlot_C* Slot;                                                         // 0x0378 (size: 0x8)
    bool kicked_0;                                                                    // 0x0380 (size: 0x1)
    Fstruct_signal_data dataPaste;                                                    // 0x0388 (size: 0x1C8)
    Fstruct_signalDataDynamic Data_0;                                                 // 0x0550 (size: 0x70)

    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void exported();
    void imported();
    void inserted();
    void getData(Fstruct_save& Data);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void isButtonUsed(bool& failed);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void UserConstructionScript();
    void ReceiveDestroyed();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void kicked(bool kick);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void beginHoldingObject(class AmainPlayer_C* Player, FHitResult Hit);
    void driveAction(class AmainPlayer_C* Player, bool collect);
    void driveInSlot(class AdriveSlot_C* Slot);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_drive(int32 EntryPoint);
}; // Size: 0x5C0

#endif
