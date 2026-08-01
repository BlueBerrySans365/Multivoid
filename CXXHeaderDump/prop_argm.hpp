#ifndef UE4SS_SDK_prop_argm_HPP
#define UE4SS_SDK_prop_argm_HPP

class Aprop_argm_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    bool taken;                                                                       // 0x0370 (size: 0x1)
    class UMaterialInstanceDynamic* dynmat_0;                                         // 0x0378 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_1;                                         // 0x0380 (size: 0x8)

    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void setMats();
    void Init();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void UserConstructionScript();
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void set_ignoreSave_trigger(bool NewParam);
    void runTrigger(class AActor* Owner, int32 Index);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void intComs_gamemodeBeginPlay();
    void intComs_propRenderer_finishProps();
    void ExecuteUbergraph_prop_argm(int32 EntryPoint);
}; // Size: 0x388

#endif
