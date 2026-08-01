#ifndef UE4SS_SDK_prop_xmastree_HPP
#define UE4SS_SDK_prop_xmastree_HPP

class Aprop_xmastree_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0370 (size: 0x8)
    bool sleptThroughMidnight;                                                        // 0x0378 (size: 0x1)
    int32 lastHour;                                                                   // 0x037C (size: 0x4)
    FVector spawnLoc;                                                                 // 0x0380 (size: 0xC)

    void fillBoots();
    void spawnGifts();
    void ReceiveBeginPlay();
    void woken();
    void ReceiveTick(float DeltaSeconds);
    void spawnKrampus(FIntVector Time);
    void ExecuteUbergraph_prop_xmastree(int32 EntryPoint);
}; // Size: 0x38C

#endif
