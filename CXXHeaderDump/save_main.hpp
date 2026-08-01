#ifndef UE4SS_SDK_save_main_HPP
#define UE4SS_SDK_save_main_HPP

class Usave_main_C : public USaveGame
{
    Fstruct_settings1 settings_defaults;                                              // 0x0028 (size: 0x220)
    Fstruct_settings1 Settings;                                                       // 0x0248 (size: 0x220)
    TArray<Fstruct_keybind> keybinds;                                                 // 0x0468 (size: 0x10)
    class AmainGamemode_C* GameMode;                                                  // 0x0478 (size: 0x8)
    class APlayerController* Controller;                                              // 0x0480 (size: 0x8)
    TArray<FName> keybindsNames;                                                      // 0x0488 (size: 0x10)
    bool lockedMouse;                                                                 // 0x0498 (size: 0x1)
    TArray<Fstruct_achievement> achievements;                                         // 0x04A0 (size: 0x10)
    TArray<FName> achievementsNames;                                                  // 0x04B0 (size: 0x10)
    TArray<bool> achievementsCompleted;                                               // 0x04C0 (size: 0x10)
    TArray<FString> keybinds_keys;                                                    // 0x04D0 (size: 0x10)
    int32 maxDays;                                                                    // 0x04E0 (size: 0x4)
    Fstruct_stats Stats;                                                              // 0x04E4 (size: 0x5C)
    TArray<Fstruct_save> mailboxData;                                                 // 0x0540 (size: 0x10)
    TArray<FName> signalsGlossary;                                                    // 0x0550 (size: 0x10)
    TArray<int32> signalsGlossary_lvl;                                                // 0x0560 (size: 0x10)
    TArray<FString> lastPlayed;                                                       // 0x0570 (size: 0x10)
    FString previousVersion;                                                          // 0x0580 (size: 0x10)
    TArray<FName> foundTreasures;                                                     // 0x0590 (size: 0x10)
    TArray<FName> foundFish;                                                          // 0x05A0 (size: 0x10)
    TArray<FName> favouriteStore;                                                     // 0x05B0 (size: 0x10)
    bool NewVar_0;                                                                    // 0x05C0 (size: 0x1)
    bool NewVar_1;                                                                    // 0x05C1 (size: 0x1)
    bool NewVar_2;                                                                    // 0x05C2 (size: 0x1)
    FDateTime NewVar_22;                                                              // 0x05C8 (size: 0x8)
    FTransform defaultPlayerTr;                                                       // 0x05D0 (size: 0x30)
    bool deactivateKey;                                                               // 0x0600 (size: 0x1)
    TArray<FName> tutLvls;                                                            // 0x0608 (size: 0x10)
    TArray<FName> storeItems;                                                         // 0x0618 (size: 0x10)
    bool dontShopSaveDisclaimer;                                                      // 0x0628 (size: 0x1)

    void addToFavourites(const FName& ItemToFind);
    void addFish(const FName& ItemToFind);
    void addTreasure(const FName& ItemToFind);
    void progressAchievement(const FName achievement, bool popup, bool autosave);
    void setObjects(class AmainGamemode_C* GameMode, class APlayerController* Controller);
    void saveKeybinds();
    void setDefaultSettings(Fstruct_settings1& Output);
    void save();
}; // Size: 0x629

#endif
