#ifndef UE4SS_SDK_alarmLamp_HPP
#define UE4SS_SDK_alarmLamp_HPP

class AalarmLamp_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UBillboardComponent* Pivot;                                                 // 0x0250 (size: 0x8)
    class UArrowComponent* speen;                                                     // 0x0258 (size: 0x8)
    class USpotLightComponent* sp2;                                                   // 0x0260 (size: 0x8)
    class USpotLightComponent* sp1;                                                   // 0x0268 (size: 0x8)
    class UPointLightComponent* Point;                                                // 0x0270 (size: 0x8)
    class UStaticMeshComponent* cube;                                                 // 0x0278 (size: 0x8)
    bool Active;                                                                      // 0x0280 (size: 0x1)

    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void SetActive(bool Visibility);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_alarmLamp(int32 EntryPoint);
}; // Size: 0x281

#endif
