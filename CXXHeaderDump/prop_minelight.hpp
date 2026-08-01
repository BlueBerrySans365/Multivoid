#ifndef UE4SS_SDK_prop_minelight_HPP
#define UE4SS_SDK_prop_minelight_HPP

class Aprop_minelight_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0370 (size: 0x8)
    class USpotLightComponent* 2;                                                     // 0x0378 (size: 0x8)
    class USpotLightComponent* 1;                                                     // 0x0380 (size: 0x8)
    bool on;                                                                          // 0x0388 (size: 0x1)

    void upd();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_minelight(int32 EntryPoint);
}; // Size: 0x389

#endif
