#ifndef UE4SS_SDK_car1_witch_HPP
#define UE4SS_SDK_car1_witch_HPP

class Acar1_witch_C : public AATV_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08A8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem_0;                                 // 0x08B0 (size: 0x8)
    class UArrowComponent* fire;                                                      // 0x08B8 (size: 0x8)
    class UStaticMeshComponent* witch;                                                // 0x08C0 (size: 0x8)
    bool Fly_0;                                                                       // 0x08C8 (size: 0x1)

    void updUpgrades();
    void SetDamping(bool bPickA);
    void InpActEvt_LeftShift_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_LeftShift_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_car1_witch(int32 EntryPoint);
}; // Size: 0x8C9

#endif
