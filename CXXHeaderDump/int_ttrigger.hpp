#ifndef UE4SS_SDK_int_ttrigger_HPP
#define UE4SS_SDK_int_ttrigger_HPP

class Iint_ttrigger_C : public IInterface
{

    void gatherDataFromKeyT(bool& gather);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void set_ignoreSave_trigger(bool NewParam);
    void ignoreSave_trigger(bool& ignore);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void getTriggerData(Fstruct_triggerSave& Data);
    void runTrigger(class AActor* Owner, int32 Index);
}; // Size: 0x28

#endif
