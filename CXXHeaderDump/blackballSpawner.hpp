#ifndef UE4SS_SDK_blackballSpawner_HPP
#define UE4SS_SDK_blackballSpawner_HPP

class AblackballSpawner_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0250 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0258 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0260 (size: 0x8)
    float Angle;                                                                      // 0x0268 (size: 0x4)
    int32 laps;                                                                       // 0x026C (size: 0x4)
    FVector vec;                                                                      // 0x0270 (size: 0xC)
    float MinRadius;                                                                  // 0x027C (size: 0x4)
    int32 maxlaps;                                                                    // 0x0280 (size: 0x4)

    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void skipPreDelete(bool& Skip);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_blackballSpawner(int32 EntryPoint);
}; // Size: 0x284

#endif
