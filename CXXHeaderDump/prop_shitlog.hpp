#ifndef UE4SS_SDK_prop_shitlog_HPP
#define UE4SS_SDK_prop_shitlog_HPP

class Aprop_shitlog_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBillboardComponent* Spawn;                                                 // 0x0370 (size: 0x8)
    class UAudioComponent* shitlog;                                                   // 0x0378 (size: 0x8)
    int32 hits;                                                                       // 0x0380 (size: 0x4)
    int32 gifts;                                                                      // 0x0384 (size: 0x4)

    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void ReceiveBeginPlay();
    void newDay(FIntVector Time);
    void ExecuteUbergraph_prop_shitlog(int32 EntryPoint);
}; // Size: 0x388

#endif
