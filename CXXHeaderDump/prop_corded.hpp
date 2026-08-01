#ifndef UE4SS_SDK_prop_corded_HPP
#define UE4SS_SDK_prop_corded_HPP

class Aprop_corded_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UChildActorComponent* cord;                                                 // 0x0370 (size: 0x8)
    FName socket_key;                                                                 // 0x0378 (size: 0x8)
    class AcordSocket_C* Socket;                                                      // 0x0380 (size: 0x8)
    class Acord_C* obj_cord;                                                          // 0x0388 (size: 0x8)
    FVector loadedLocation;                                                           // 0x0390 (size: 0xC)
    FRotator loadedRotation;                                                          // 0x039C (size: 0xC)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void gatherDataFromKeyT(bool& gather);
    void setobjcord();
    void processKeys(bool& return);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void set_ignoreSave_trigger(bool NewParam);
    void runTrigger(class AActor* Owner, int32 Index);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void ReceiveBeginPlay();
    void delayConnect();
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_prop_corded(int32 EntryPoint);
}; // Size: 0x3A8

#endif
