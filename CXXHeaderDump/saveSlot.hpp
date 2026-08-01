#ifndef UE4SS_SDK_saveSlot_HPP
#define UE4SS_SDK_saveSlot_HPP

class UsaveSlot_C : public USaveGame
{
    TArray<Fstruct_signal_data> savedSignals_obs;                                     // 0x0028 (size: 0x10)
    TArray<FName> specials;                                                           // 0x0038 (size: 0x10)
    Fstruct_upgrades upgrades;                                                        // 0x0048 (size: 0x48)
    int32 Points;                                                                     // 0x0090 (size: 0x4)
    TArray<FName> catchedSignals;                                                     // 0x0098 (size: 0x10)
    TArray<Fstruct_signal_data> savedSignals_comp_obs;                                // 0x00A8 (size: 0x10)
    FIntVector savedtime;                                                             // 0x00B8 (size: 0xC)
    TArray<FName> passEvents;                                                         // 0x00C8 (size: 0x10)
    class AmainGamemode_C* GameMode;                                                  // 0x00D8 (size: 0x8)
    float totalTime;                                                                  // 0x00E0 (size: 0x4)
    float food;                                                                       // 0x00E4 (size: 0x4)
    float sleep;                                                                      // 0x00E8 (size: 0x4)
    TArray<FName> allEvents;                                                          // 0x00F0 (size: 0x10)
    float battery;                                                                    // 0x0100 (size: 0x4)
    TArray<FName> forceObjects;                                                       // 0x0108 (size: 0x10)
    TArray<Fstruct_email> emails;                                                     // 0x0118 (size: 0x10)
    Fstruct_task Task;                                                                // 0x0128 (size: 0x70)
    TArray<Fstruct_mObject> GObjStack;                                                // 0x0198 (size: 0x10)
    TArray<bool> musics;                                                              // 0x01A8 (size: 0x10)
    TArray<FName> advancementsNames;                                                  // 0x01B8 (size: 0x10)
    TArray<bool> advancementsCompleted;                                               // 0x01C8 (size: 0x10)
    TArray<Fstruct_achievement> advancements;                                         // 0x01D8 (size: 0x10)
    float carFuel;                                                                    // 0x01E8 (size: 0x4)
    Fstruct_storeOrder droneOrder;                                                    // 0x01F0 (size: 0x18)
    FTransform playerTransform;                                                       // 0x0210 (size: 0x30)
    FTransform def;                                                                   // 0x0240 (size: 0x30)
    FTransform carTransform;                                                          // 0x0270 (size: 0x30)
    FTransform defCar;                                                                // 0x02A0 (size: 0x30)
    TArray<Fstruct_email> emailsDef;                                                  // 0x02D0 (size: 0x10)
    TArray<Fstruct_save> inventoryData;                                               // 0x02E0 (size: 0x10)
    TArray<Fstruct_save> dishData;                                                    // 0x02F0 (size: 0x10)
    TArray<Fstruct_save> objectsData;                                                 // 0x0300 (size: 0x10)
    Fstruct_save drone;                                                               // 0x0310 (size: 0x100)
    float carHealth;                                                                  // 0x0410 (size: 0x4)
    FString Version;                                                                  // 0x0418 (size: 0x10)
    float health;                                                                     // 0x0428 (size: 0x4)
    TArray<FString> soldSignals;                                                      // 0x0430 (size: 0x10)
    TArray<Fstruct_equipment> equipment;                                              // 0x0440 (size: 0x10)
    TArray<Fstruct_equipment> hold;                                                   // 0x0450 (size: 0x10)
    TArray<uint8> Preview;                                                            // 0x0460 (size: 0x10)
    FDateTime lastDate;                                                               // 0x0470 (size: 0x8)
    FDateTime creationDate;                                                           // 0x0478 (size: 0x8)
    TArray<Fstruct_byteImage> photos;                                                 // 0x0480 (size: 0x10)
    TArray<Fstruct_storeOrder> orders;                                                // 0x0490 (size: 0x10)
    TArray<Fstruct_triggerSave> triggers;                                             // 0x04A0 (size: 0x10)
    TArray<Fstruct_equipment> hold_def;                                               // 0x04B0 (size: 0x10)
    TArray<Fstruct_equipment> equipment_def;                                          // 0x04C0 (size: 0x10)
    float coffeePower;                                                                // 0x04D0 (size: 0x4)
    TMap<TEnumAsByte<enum_objectType::Type>, int32> objectsCount;                     // 0x04D8 (size: 0x50)
    Fstruct_loan loan;                                                                // 0x0528 (size: 0x20)
    float loanTime;                                                                   // 0x0548 (size: 0x4)
    Fstruct_signal_spawn downloadPanelSignalSpawn;                                    // 0x054C (size: 0x2C)
    Fstruct_signalDataDynamic processingPanelSignal;                                  // 0x0578 (size: 0x70)
    Fstruct_signalDataDynamic downloadPanelSignal;                                    // 0x05E8 (size: 0x70)
    float p_health;                                                                   // 0x0658 (size: 0x4)
    float Day;                                                                        // 0x065C (size: 0x4)
    FString windowShit;                                                               // 0x0660 (size: 0x10)
    TArray<FTransform> roache;                                                        // 0x0670 (size: 0x10)
    TArray<Fstruct_signalDataDynamic> savedSignals_0;                                 // 0x0680 (size: 0x10)
    TArray<Fstruct_signalDataDynamic> savedSignals_comp_0;                            // 0x0690 (size: 0x10)
    Fstruct_save droneItembox;                                                        // 0x06A0 (size: 0x100)
    TArray<uint8> windowShitBytes;                                                    // 0x07A0 (size: 0x10)
    TArray<Fstruct_byteImage> photos_phys;                                            // 0x07B0 (size: 0x10)
    TArray<FString> food_consumed;                                                    // 0x07C0 (size: 0x10)
    TArray<float> food_tolerance;                                                     // 0x07D0 (size: 0x10)
    TArray<Fstruct_byteImage> drawings;                                               // 0x07E0 (size: 0x10)
    FDateTime lastSavedDate;                                                          // 0x07F0 (size: 0x8)
    FName mainMap;                                                                    // 0x07F8 (size: 0x8)
    bool isReset;                                                                     // 0x0800 (size: 0x1)
    TArray<Fstruct_save> grimeData;                                                   // 0x0808 (size: 0x10)
    TArray<Fstruct_save> trashPilesData;                                              // 0x0818 (size: 0x10)
    FName subArea;                                                                    // 0x0828 (size: 0x8)
    float arirReputation;                                                             // 0x0830 (size: 0x4)
    TArray<FName> arirPranks_mean;                                                    // 0x0838 (size: 0x10)
    TArray<FName> arirPranks_inconv;                                                  // 0x0848 (size: 0x10)
    TArray<FName> arirPranks_neutral;                                                 // 0x0858 (size: 0x10)
    TArray<FName> arirPranks_good;                                                    // 0x0868 (size: 0x10)
    TArray<FName> arirPranks_flirty;                                                  // 0x0878 (size: 0x10)
    float Strength;                                                                   // 0x0888 (size: 0x4)
    float agility;                                                                    // 0x088C (size: 0x4)
    TSubclassOf<class Aprop_batts_C> flashlightBattery;                               // 0x0890 (size: 0x8)
    bool hasFailedWeek;                                                               // 0x0898 (size: 0x1)
    float servertimeBest;                                                             // 0x089C (size: 0x4)
    int32 totalCompletedTaskParts;                                                    // 0x08A0 (size: 0x4)
    float moonPhase;                                                                  // 0x08A4 (size: 0x4)
    class UmainGameInstance_C* gameInst;                                              // 0x08A8 (size: 0x8)
    int32 I;                                                                          // 0x08B0 (size: 0x4)
    float maxHealth;                                                                  // 0x08B4 (size: 0x4)
    TArray<FName> crafts;                                                             // 0x08B8 (size: 0x10)
    TArray<FName> beginEquipment;                                                     // 0x08C8 (size: 0x10)
    TArray<FName> beginEquipment_def;                                                 // 0x08D8 (size: 0x10)
    Fstruct_signalTableState analogPanelsData;                                        // 0x08E8 (size: 0x3B8)
    float gasolinepilled;                                                             // 0x0CA0 (size: 0x4)
    Fstruct_taskNew taskNew;                                                          // 0x0CA8 (size: 0x48)
    bool photosData;                                                                  // 0x0CF0 (size: 0x1)
    TMap<class FName, class Fstruct_multiSave> subLevelData_objects;                  // 0x0CF8 (size: 0x50)
    TMap<class FName, class Fstruct_multiSave_triggers> subLevelData_triggers;        // 0x0D48 (size: 0x50)
    TArray<FTransform> subLevelPlayerPositions;                                       // 0x0D98 (size: 0x10)
    FName Level;                                                                      // 0x0DA8 (size: 0x8)
    Fstruct_gameRules localGameRules;                                                 // 0x0DB0 (size: 0x2C)
    bool NewVar_0;                                                                    // 0x0DDC (size: 0x1)
    TMap<class FName, class Fstruct_multiSave_primitive> subLevelData_primitive;      // 0x0DE0 (size: 0x50)
    TArray<Fstruct_primitiveSave> primitivesData;                                     // 0x0E30 (size: 0x10)
    bool dailyDelivery;                                                               // 0x0E40 (size: 0x1)

    void reset_atv_equipment();
    void reset_atv_stats(bool checkForAtv);
    void reset_atv_position();
    void reset_player_hand();
    void reset_player_effects();
    void reset_player_equipment();
    void reset_player_inventory();
    void reset_player_stats();
    void reset_player_position();
    void addRecipe(const FName& ItemToFind);
    void savePlayerOnly();
    void Duplicate(FString Name);
    void regenerate(FString InputName);
    void setGameinst(class UmainGameInstance_C* gameInst);
    void cleanBaseDirt(TSubclassOf<class AbaseCleaner_C> cleanerClass, bool& return);
    void reset_printerObjects();
    bool saveToSlot(bool quicksave, bool overwriteSubsave, bool isForcedSave);
    void maxDay(int32& OutputPin);
    void reset_grime();
    void reset_garb();
    void getSigObj(const TEnumAsByte<enum_objectType::Type>& Key, int32& Value);
    void reset_car();
    void reset_player();
    void reset_levels();
    void reset_points();
    void reset_objects();
    void reset_days(int32 Day);
    void prAdvanc(const FName& InputPin, bool disablePopup, bool& Finished, FName& Name);
    int32 conv(const FIntVector& IntVector);
    void setGamemode(class AmainGamemode_C* GameMode);
    void settime(FIntVector NewTime, FIntVector& Output_Get, bool& new_min, bool& new_hour, bool& new_day);
    void save(bool quicksave, bool overwriteSubsave, bool isForcedSave);
}; // Size: 0xE41

#endif
