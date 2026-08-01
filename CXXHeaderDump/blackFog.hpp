#ifndef UE4SS_SDK_blackFog_HPP
#define UE4SS_SDK_blackFog_HPP

class AblackFog_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float A;                                                                          // 0x0238 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0240 (size: 0x8)
    float spd;                                                                        // 0x0248 (size: 0x4)
    bool M;                                                                           // 0x024C (size: 0x1)
    TArray<class Aeyer_C*> eyes;                                                      // 0x0250 (size: 0x10)
    class AmainGamemode_C* GameMode;                                                  // 0x0260 (size: 0x8)

    void set();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void spawnGhost();
    void ExecuteUbergraph_blackFog(int32 EntryPoint);
}; // Size: 0x268

#endif
