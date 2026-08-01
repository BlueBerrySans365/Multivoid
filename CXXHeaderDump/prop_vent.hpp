#ifndef UE4SS_SDK_prop_vent_HPP
#define UE4SS_SDK_prop_vent_HPP

class Aprop_vent_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)

    void gatherDataFromKeyT(bool& gather);
    void ignoreSave_trigger(bool& ignore);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void getTriggerData(Fstruct_triggerSave& Data);
    void set_ignoreSave_trigger(bool NewParam);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_prop_vent(int32 EntryPoint);
}; // Size: 0x378

#endif
