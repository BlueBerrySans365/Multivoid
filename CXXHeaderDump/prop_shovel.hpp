#ifndef UE4SS_SDK_prop_shovel_HPP
#define UE4SS_SDK_prop_shovel_HPP

class Aprop_shovel_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UvelocityStuck_C* velocityStuck;                                            // 0x0370 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x0378 (size: 0x8)

    void afterplay();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void playerHitWith(FHitResult Hit, class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_shovel(int32 EntryPoint);
}; // Size: 0x380

#endif
