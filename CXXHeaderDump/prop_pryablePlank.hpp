#ifndef UE4SS_SDK_prop_pryablePlank_HPP
#define UE4SS_SDK_prop_pryablePlank_HPP

class Aprop_pryablePlank_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UChildActorComponent* pryingCrowbar3;                                       // 0x0370 (size: 0x8)
    class UChildActorComponent* pryingCrowbar2;                                       // 0x0378 (size: 0x8)
    class UChildActorComponent* pryingCrowbar1;                                       // 0x0380 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0388 (size: 0x8)
    class UChildActorComponent* pryingCrowbar;                                        // 0x0390 (size: 0x8)
    int32 hits;                                                                       // 0x0398 (size: 0x4)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void crowbarOpen(class ApryingCrowbar_C* pryingCrowbar);
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void ExecuteUbergraph_prop_pryablePlank(int32 EntryPoint);
}; // Size: 0x39C

#endif
