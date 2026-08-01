#ifndef UE4SS_SDK_roz_anim_HPP
#define UE4SS_SDK_roz_anim_HPP

class Aroz_anim_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* coll;                                                 // 0x0250 (size: 0x8)
    class UPointLightComponent* lighBig;                                              // 0x0258 (size: 0x8)
    class UAudioComponent* rozbeam_loop;                                              // 0x0260 (size: 0x8)
    class UParticleSystemComponent* eff_rozbeam;                                      // 0x0268 (size: 0x8)
    class UPointLightComponent* wav;                                                  // 0x0270 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0278 (size: 0x8)
    class UPointLightComponent* ligh;                                                 // 0x0280 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0288 (size: 0x8)
    class UBillboardComponent* efff;                                                  // 0x0290 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02D0 (size: 0x8)
    class UAudioComponent* rozhis;                                                    // 0x02D8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x02E0 (size: 0x8)
    float lighGlob_a_69CE8F884639FC18A2BD4EB042080F3C;                                // 0x02E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> lighGlob__Direction_69CE8F884639FC18A2BD4EB042080F3C; // 0x02EC (size: 0x1)
    class UTimelineComponent* lighGlob;                                               // 0x02F0 (size: 0x8)
    float Timeline_0_a_61CDA04B4CE8A43463F971ACE6FD1B12;                              // 0x02F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_61CDA04B4CE8A43463F971ACE6FD1B12; // 0x02FC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0300 (size: 0x8)
    float snd_a_4811F1C64F3B7CE0055F11B753FCC047;                                     // 0x0308 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> snd__Direction_4811F1C64F3B7CE0055F11B753FCC047; // 0x030C (size: 0x1)
    class UTimelineComponent* snd;                                                    // 0x0310 (size: 0x8)
    float A;                                                                          // 0x0318 (size: 0x4)
    float imer;                                                                       // 0x031C (size: 0x4)
    bool eff;                                                                         // 0x0320 (size: 0x1)
    float am;                                                                         // 0x0324 (size: 0x4)
    bool Active;                                                                      // 0x0328 (size: 0x1)
    float lighAnim;                                                                   // 0x032C (size: 0x4)
    float windup;                                                                     // 0x0330 (size: 0x4)
    bool disappeared;                                                                 // 0x0334 (size: 0x1)
    FName Box;                                                                        // 0x0338 (size: 0x8)
    class Atrigger_box_C* TriggerBox;                                                 // 0x0340 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0348 (size: 0x8)

    void gatherDataFromKeyT(bool& gather);
    void ignoreSave_trigger(bool& ignore);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void getTriggerData(Fstruct_triggerSave& Data);
    void canHit(bool& noHit);
    void toolboxFixTime(float& Time);
    void toolboxCanFix(bool& return);
    void isNotSawable(bool& return);
    void getPriceMultiplier(float& priceMult);
    void skipRadial(bool& Skip);
    void gascanFuel(class Aprop_gascan_C* gascan, class AmainPlayer_C* Player, bool back, bool& fueled);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void setPath(const TArray<FVector>& Path, bool& return);
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void GetKey(FName& Key);
    void canBeUsedHold(bool& return);
    void processKeys(bool& return);
    void getOnlyKey(FName& Key);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void skipPreDelete(bool& Skip);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ignoreSave(bool& ignoreSave);
    void snd__FinishedFunc();
    void snd__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void lighGlob__FinishedFunc();
    void lighGlob__UpdateFunc();
    void lighGlob__shake__EventFunc();
    void lighGlob__end__EventFunc();
    void lighGlob__beg__EventFunc();
    void OnNotifyEnd_DDA0A64745A88FA107F01C96C451A154(FName NotifyName);
    void OnNotifyBegin_DDA0A64745A88FA107F01C96C451A154(FName NotifyName);
    void OnInterrupted_DDA0A64745A88FA107F01C96C451A154(FName NotifyName);
    void OnBlendOut_DDA0A64745A88FA107F01C96C451A154(FName NotifyName);
    void OnCompleted_DDA0A64745A88FA107F01C96C451A154(FName NotifyName);
    void set_ignoreSave_trigger(bool NewParam);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void runTrigger(class AActor* Owner, int32 Index);
    void startWindup();
    void ReceiveBeginPlay();
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_roz_anim(int32 EntryPoint);
}; // Size: 0x350

#endif
