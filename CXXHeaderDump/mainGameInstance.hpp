#ifndef UE4SS_SDK_mainGameInstance_HPP
#define UE4SS_SDK_mainGameInstance_HPP

class UmainGameInstance_C : public UGameInstance
{
    class UsaveSlot_C* save_gameInst;                                                 // 0x01A8 (size: 0x8)
    FString SlotName;                                                                 // 0x01B0 (size: 0x10)
    TArray<class UConstantQNRT*> nrts_GAMEINST;                                       // 0x01C0 (size: 0x10)
    TArray<class UTexture2D*> texs_GAMEINST;                                          // 0x01D0 (size: 0x10)
    bool opened;                                                                      // 0x01E0 (size: 0x1)
    TEnumAsByte<enum_gamemode::Type> GameMode;                                        // 0x01E1 (size: 0x1)
    int32 startDay;                                                                   // 0x01E4 (size: 0x4)
    TArray<class USoundWave*> radios;                                                 // 0x01E8 (size: 0x10)
    TArray<FString> radios_tit;                                                       // 0x01F8 (size: 0x10)
    TArray<float> vols;                                                               // 0x0208 (size: 0x10)
    TArray<class UStaticMesh*> objs;                                                  // 0x0218 (size: 0x10)
    bool isSaveReset;                                                                 // 0x0228 (size: 0x1)
    bool loadObjects;                                                                 // 0x0229 (size: 0x1)
    TArray<Fstruct_save> playerInv_transport;                                         // 0x0230 (size: 0x10)
    TArray<class UTexture2D*> objTexs;                                                // 0x0240 (size: 0x10)
    FVector locationDistance;                                                         // 0x0250 (size: 0xC)
    FName subArea;                                                                    // 0x025C (size: 0x8)
    bool antibreatherKickout;                                                         // 0x0264 (size: 0x1)
    FString dwString;                                                                 // 0x0268 (size: 0x10)
    TArray<FString> dwList;                                                           // 0x0278 (size: 0x10)
    FString dwString_2;                                                               // 0x0288 (size: 0x10)
    TArray<FString> dwList_0;                                                         // 0x0298 (size: 0x10)
    class AmainGamemode_C* gamemode_;                                                 // 0x02A8 (size: 0x8)
    bool NewVar_0;                                                                    // 0x02B0 (size: 0x1)
    TMap<class FName, class FString> patreonList;                                     // 0x02B8 (size: 0x50)
    FString NewVar_1;                                                                 // 0x0308 (size: 0x10)
    Fstruct_gameRules gameRules;                                                      // 0x0318 (size: 0x2C)
    TArray<Fstruct_equipment> playerEquipment_transport;                              // 0x0348 (size: 0x10)
    TArray<Fstruct_equipment> playerHold_transport;                                   // 0x0358 (size: 0x10)
    EGraphicsRHI initialRHI;                                                          // 0x0368 (size: 0x1)
    bool RHIget;                                                                      // 0x0369 (size: 0x1)
    bool NewVar_2;                                                                    // 0x036A (size: 0x1)
    int32 NewVar_3;                                                                   // 0x036C (size: 0x4)
    int32 NewVar_4;                                                                   // 0x0370 (size: 0x4)
    int32 NewVar_5;                                                                   // 0x0374 (size: 0x4)
    FString NewVar_6;                                                                 // 0x0378 (size: 0x10)
    FString NewVar_7;                                                                 // 0x0388 (size: 0x10)

    void setSaveSlotObject(class UsaveSlot_C* save_gameInst, FString SlotName);
    void keepPlayer();
}; // Size: 0x398

#endif
