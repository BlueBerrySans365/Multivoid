#ifndef UE4SS_SDK_dream_boulders_HPP
#define UE4SS_SDK_dream_boulders_HPP

class Adream_boulders_C : public AdreamBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Plane4;                                               // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Plane3;                                               // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Plane2;                                               // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x02A8 (size: 0x8)
    class UArrowComponent* Arrow_0;                                                   // 0x02B0 (size: 0x8)
    float Alpha;                                                                      // 0x02B8 (size: 0x4)

    void ReceiveBeginPlay();
    void spawnBoulder();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_dream_boulders(int32 EntryPoint);
}; // Size: 0x2BC

#endif
