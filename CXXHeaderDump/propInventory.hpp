#ifndef UE4SS_SDK_propInventory_HPP
#define UE4SS_SDK_propInventory_HPP

class UpropInventory_C : public UActorComponent
{
    int32 Index;                                                                      // 0x00B0 (size: 0x4)
    float maxVol;                                                                     // 0x00B4 (size: 0x4)
    float currVol;                                                                    // 0x00B8 (size: 0x4)
    class UStaticMeshComponent* obj;                                                  // 0x00C0 (size: 0x8)
    float Mass;                                                                       // 0x00C8 (size: 0x4)
    class Aprop_container_C* Owner;                                                   // 0x00D0 (size: 0x8)
    float ownMass;                                                                    // 0x00D8 (size: 0x4)
    FName lootTableEntry;                                                             // 0x00DC (size: 0x8)
    TArray<Fstruct_lootWeighted> randomLoot;                                          // 0x00E8 (size: 0x10)
    bool infinite;                                                                    // 0x00F8 (size: 0x1)
    bool Player;                                                                      // 0x00F9 (size: 0x1)
    float volumeMult;                                                                 // 0x00FC (size: 0x4)
    float customVolume;                                                               // 0x0100 (size: 0x4)
    TArray<class TSubclassOf<AActor>> Filter;                                         // 0x0108 (size: 0x10)
    int32 NewVar_0;                                                                   // 0x0118 (size: 0x4)
    int32 maxLoot;                                                                    // 0x011C (size: 0x4)
    class AmainGamemode_C* gam;                                                       // 0x0120 (size: 0x8)

    void recalculateNames();
    void isClassInInventory(TSubclassOf<class AActor> Class, bool checkParentClass, bool& return);
    void isObjectInInventory(class AActor* Object, bool& return);
    void checkObjectsVolume();
    void getObj(int32 Index, bool& return, Fstruct_save& Output);
    void addLoot();
    void moveIndex(int32 ID, int32 Add, bool& return);
    void removeVol(class UStaticMeshComponent* Target);
    void takeObj(int32 Index, bool removeVol, bool& return, Fstruct_save& Output, class AActor*& Object);
    void addObject(class AActor* Actor, int32 insertIndex1, bool& return, FString& err);
    void Init(class UStaticMeshComponent* Target, class Aprop_container_C* Owner);
}; // Size: 0x128

#endif
