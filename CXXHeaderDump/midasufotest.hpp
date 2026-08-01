#ifndef UE4SS_SDK_midasufotest_HPP
#define UE4SS_SDK_midasufotest_HPP

class Amidasufotest_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UChildActorComponent* radar;                                                // 0x0250 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0258 (size: 0x8)
    class UParticleSystemComponent* eff_light3;                                       // 0x0260 (size: 0x8)
    class UParticleSystemComponent* eff_light2;                                       // 0x0268 (size: 0x8)
    class UParticleSystemComponent* eff_light1;                                       // 0x0270 (size: 0x8)
    class UArrowComponent* tiltSide;                                                  // 0x0278 (size: 0x8)
    class UArrowComponent* tiltForward;                                               // 0x0280 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0288 (size: 0x8)
    class UArrowComponent* Forward;                                                   // 0x0290 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0298 (size: 0x8)
    float A;                                                                          // 0x02A0 (size: 0x4)
    float Speed;                                                                      // 0x02A4 (size: 0x4)
    FVector lastloc;                                                                  // 0x02A8 (size: 0xC)
    FVector Velocity;                                                                 // 0x02B4 (size: 0xC)
    bool Active;                                                                      // 0x02C0 (size: 0x1)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void gatherDataFromKeyT(bool& gather);
    void SetActive(bool Active);
    void skipPreDelete(bool& Skip);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void set_ignoreSave_trigger(bool NewParam);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void ReceiveTick(float DeltaSeconds);
    void runTrigger(class AActor* Owner, int32 Index);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_midasufotest(int32 EntryPoint);
}; // Size: 0x2C1

#endif
