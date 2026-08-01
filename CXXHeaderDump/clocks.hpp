#ifndef UE4SS_SDK_clocks_HPP
#define UE4SS_SDK_clocks_HPP

class Aclocks_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0370 (size: 0x8)
    bool Tick;                                                                        // 0x0378 (size: 0x1)
    class UMaterialInstanceDynamic* dynmat_min;                                       // 0x0380 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_hr;                                        // 0x0388 (size: 0x8)
    bool Loaded;                                                                      // 0x0390 (size: 0x1)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_clocks(int32 EntryPoint);
}; // Size: 0x391

#endif
