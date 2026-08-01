#ifndef UE4SS_SDK_trigger_spawnProp_HPP
#define UE4SS_SDK_trigger_spawnProp_HPP

class Atrigger_spawnProp_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0298 (size: 0x8)
    class AActor* des;                                                                // 0x02A0 (size: 0x8)
    FName prop;                                                                       // 0x02A8 (size: 0x8)
    class AtriggerBase_C* onSpawned_trigger;                                          // 0x02B0 (size: 0x8)
    FString onSpawned_key;                                                            // 0x02B8 (size: 0x10)
    bool checkRendered;                                                               // 0x02C8 (size: 0x1)
    class Adoor_C* door;                                                              // 0x02D0 (size: 0x8)
    FString door_key;                                                                 // 0x02D8 (size: 0x10)
    bool frozen;                                                                      // 0x02E8 (size: 0x1)
    bool Static;                                                                      // 0x02E9 (size: 0x1)
    bool Active;                                                                      // 0x02EA (size: 0x1)
    FName customKey;                                                                  // 0x02EC (size: 0x8)
    class AActor* spawned;                                                            // 0x02F8 (size: 0x8)
    FName spawned_key;                                                                // 0x0300 (size: 0x8)

    void processKeys(bool& return);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void getTriggerData(Fstruct_triggerSave& Data);
    void UserConstructionScript();
    void runTrigger(class AActor* Owner, int32 Index);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_trigger_spawnProp(int32 EntryPoint);
}; // Size: 0x308

#endif
