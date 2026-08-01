#ifndef UE4SS_SDK_prop_safe_HPP
#define UE4SS_SDK_prop_safe_HPP

class Aprop_safe_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UChildActorComponent* door;                                                 // 0x0370 (size: 0x8)
    class UBoxComponent* spawnBox;                                                    // 0x0378 (size: 0x8)
    TArray<FName> Objects;                                                            // 0x0380 (size: 0x10)
    FString password;                                                                 // 0x0390 (size: 0x10)
    bool Locked;                                                                      // 0x03A0 (size: 0x1)
    class Aprop_safeDoor_C* doorObj;                                                  // 0x03A8 (size: 0x8)

    void hacked();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void opened();
    void updLock();
    void ReceiveBeginPlay();
    void broken();
    void ExecuteUbergraph_prop_safe(int32 EntryPoint);
}; // Size: 0x3B0

#endif
