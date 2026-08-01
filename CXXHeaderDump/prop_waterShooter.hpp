#ifndef UE4SS_SDK_prop_waterShooter_HPP
#define UE4SS_SDK_prop_waterShooter_HPP

class Aprop_waterShooter_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float Level;                                                                      // 0x0370 (size: 0x4)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x0378 (size: 0x10)
    bool fire;                                                                        // 0x0388 (size: 0x1)
    class AmainPlayer_C* Player;                                                      // 0x0390 (size: 0x8)
    float wasting;                                                                    // 0x0398 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void Get(float& Level);
    void ReceiveBeginPlay();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveTick(float DeltaSeconds);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_waterShooter(int32 EntryPoint);
}; // Size: 0x39C

#endif
