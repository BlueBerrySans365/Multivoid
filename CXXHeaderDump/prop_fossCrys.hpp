#ifndef UE4SS_SDK_prop_fossCrys_HPP
#define UE4SS_SDK_prop_fossCrys_HPP

class Aprop_fossCrys_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Ucomp_paranormal_C* pnormal;                                                // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0378 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0380 (size: 0x8)

    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveBeginPlay();
    void timerJump();
    void ExecuteUbergraph_prop_fossCrys(int32 EntryPoint);
}; // Size: 0x388

#endif
