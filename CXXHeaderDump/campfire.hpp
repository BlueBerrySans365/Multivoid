#ifndef UE4SS_SDK_campfire_HPP
#define UE4SS_SDK_campfire_HPP

class Acampfire_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* cauldron;                                             // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Base;                                                 // 0x0260 (size: 0x8)
    class UStaticMeshComponent* S;                                                    // 0x0268 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0270 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0278 (size: 0x8)
    bool Active;                                                                      // 0x0280 (size: 0x1)

    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void set_ignoreSave_trigger(bool NewParam);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void intComs_gamemodeBeginPlay();
    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_campfire(int32 EntryPoint);
}; // Size: 0x281

#endif
