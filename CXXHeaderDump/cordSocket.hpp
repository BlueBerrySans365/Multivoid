#ifndef UE4SS_SDK_cordSocket_HPP
#define UE4SS_SDK_cordSocket_HPP

class AcordSocket_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0250 (size: 0x8)
    class UStaticMeshComponent* head;                                                 // 0x0258 (size: 0x8)
    class UArrowComponent* dir;                                                       // 0x0260 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Root;                                                 // 0x0270 (size: 0x8)
    class Acord_C* cord;                                                              // 0x0278 (size: 0x8)
    bool unplugged;                                                                   // 0x0280 (size: 0x1)
    class Aprop_C* Parent;                                                            // 0x0288 (size: 0x8)
    bool powered;                                                                     // 0x0290 (size: 0x1)
    bool baseSocket;                                                                  // 0x0291 (size: 0x1)

    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void setActiveCord(bool plug);
    void skipPreDelete(bool& Skip);
    void ignoreSave(bool& ignoreSave);
    void ReceiveBeginPlay();
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__cordSocket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void set_ignoreSave_trigger(bool NewParam);
    void runTrigger(class AActor* Owner, int32 Index);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_cordSocket(int32 EntryPoint);
}; // Size: 0x292

#endif
