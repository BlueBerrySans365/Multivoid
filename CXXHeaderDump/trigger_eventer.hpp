#ifndef UE4SS_SDK_trigger_eventer_HPP
#define UE4SS_SDK_trigger_eventer_HPP

class Atrigger_eventer_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class AtriggerBase_C* event_arirShip;                                             // 0x0298 (size: 0x8)
    class AtriggerBase_C* event_solar;                                                // 0x02A0 (size: 0x8)
    class AtriggerBase_C* event_falseEnter;                                           // 0x02A8 (size: 0x8)
    class AtriggerBase_C* event_arirSignal;                                           // 0x02B0 (size: 0x8)
    class AtriggerBase_C* event_vehicletp;                                            // 0x02B8 (size: 0x8)
    class AtriggerBase_C* event_agrav;                                                // 0x02C0 (size: 0x8)
    class AtriggerBase_C* event_mann;                                                 // 0x02C8 (size: 0x8)
    class AtriggerBase_C* event_arirSpk;                                              // 0x02D0 (size: 0x8)
    class AtriggerBase_C* event_arirpicSignal;                                        // 0x02D8 (size: 0x8)
    class AtriggerBase_C* event_peace;                                                // 0x02E0 (size: 0x8)
    class AtriggerBase_C* event_bigmRoar;                                             // 0x02E8 (size: 0x8)
    class AtriggerBase_C* event_wisps;                                                // 0x02F0 (size: 0x8)
    class Atrigger_spawnFollowingArir_C* event_arirFollower;                          // 0x02F8 (size: 0x8)
    class AtriggerBase_C* event_arirEgg;                                              // 0x0300 (size: 0x8)
    class AtriggerBase_C* event_vent;                                                 // 0x0308 (size: 0x8)
    class AtriggerBase_C* event_crys;                                                 // 0x0310 (size: 0x8)
    class AtriggerBase_C* event_fakeGrays;                                            // 0x0318 (size: 0x8)
    class AtriggerBase_C* event_treehouse_0;                                          // 0x0320 (size: 0x8)
    class AtriggerBase_C* event_picnic;                                               // 0x0328 (size: 0x8)
    class AtriggerBase_C* event_breakVictor;                                          // 0x0330 (size: 0x8)
    class AtriggerBase_C* event_break_RomeoSierra;                                    // 0x0338 (size: 0x8)
    class AtriggerBase_C* event_destoyPicnic;                                         // 0x0340 (size: 0x8)
    class AtriggerBase_C* event_toeStab;                                              // 0x0348 (size: 0x8)
    class AtriggerBase_C* event_cookier;                                              // 0x0350 (size: 0x8)
    class AtriggerBase_C* event_susArir;                                              // 0x0358 (size: 0x8)
    class AtriggerBase_C* event_arirSat_0;                                            // 0x0360 (size: 0x8)
    class AtriggerBase_C* event_arirSat_1;                                            // 0x0368 (size: 0x8)
    class AtriggerBase_C* event_arirSat_2;                                            // 0x0370 (size: 0x8)
    class AtriggerBase_C* event_bedEvent;                                             // 0x0378 (size: 0x8)
    class AtriggerBase_C* event_paperGray;                                            // 0x0380 (size: 0x8)
    class AtriggerBase_C* event_treehouse_build_1;                                    // 0x0388 (size: 0x8)
    class AtriggerBase_C* event_treehouse_build_2;                                    // 0x0390 (size: 0x8)
    class AtriggerBase_C* event_treehouse_build_3;                                    // 0x0398 (size: 0x8)
    class AtriggerBase_C* event_treehouse_build_4;                                    // 0x03A0 (size: 0x8)
    class AtriggerBase_C* event_treehouse_build_5;                                    // 0x03A8 (size: 0x8)
    class AtriggerBase_C* event_obelisk;                                              // 0x03B0 (size: 0x8)
    class AtriggerBase_C* event_piramid;                                              // 0x03B8 (size: 0x8)
    class AtriggerBase_C* event_piramid_sig;                                          // 0x03C0 (size: 0x8)
    TArray<class AariralThrowStuff_C*> ariralThrowers_bad;                            // 0x03C8 (size: 0x10)
    TArray<class AariralThrowStuff_C*> ariralThrowers_good;                           // 0x03D8 (size: 0x10)
    bool combat;                                                                      // 0x03E8 (size: 0x1)
    TArray<class AeventSpawnerPivot_C*> eventSpawner;                                 // 0x03F0 (size: 0x10)
    TArray<FName> eventSpawner_tags;                                                  // 0x0400 (size: 0x10)

    FTransform getTagTransform(FName Tag);
    void runSpecialEvent(FName eventName1, bool& return);
    void summonArirPrank();
    void processKeys(bool& return);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void UserConstructionScript();
    void runEvent(FName Event, FName Special);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_trigger_eventer(int32 EntryPoint);
}; // Size: 0x410

#endif
