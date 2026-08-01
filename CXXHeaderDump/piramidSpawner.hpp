#ifndef UE4SS_SDK_piramidSpawner_HPP
#define UE4SS_SDK_piramidSpawner_HPP

class ApiramidSpawner_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UBillboardComponent* walkFinish;                                            // 0x0250 (size: 0x8)
    class UBillboardComponent* walkLeave;                                             // 0x0258 (size: 0x8)
    class Apiramid2_C* piramid;                                                       // 0x0260 (size: 0x8)

    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void set_ignoreSave_trigger(bool NewParam);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_piramidSpawner(int32 EntryPoint);
}; // Size: 0x268

#endif
