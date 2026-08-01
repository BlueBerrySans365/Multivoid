#ifndef UE4SS_SDK_prop_equipment_flashlight_c_HPP
#define UE4SS_SDK_prop_equipment_flashlight_c_HPP

class Aprop_equipment_flashlight_c_C : public Aprop_equipment_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UBillboardComponent* textcenter;                                            // 0x0380 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0388 (size: 0x8)
    class USpotLightComponent* light_R;                                               // 0x0390 (size: 0x8)
    float timelineCrank_a_34C96E184A18073F176982A1FA728822;                           // 0x0398 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> timelineCrank__Direction_34C96E184A18073F176982A1FA728822; // 0x039C (size: 0x1)
    class UTimelineComponent* timelineCrank;                                          // 0x03A0 (size: 0x8)
    float Pitch;                                                                      // 0x03A8 (size: 0x4)
    float energy;                                                                     // 0x03AC (size: 0x4)
    class Uui_hovertextNametag_C* Widget;                                             // 0x03B0 (size: 0x8)
    bool holding;                                                                     // 0x03B8 (size: 0x1)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void updateText();
    void equip(bool& deleted);
    void timelineCrank__FinishedFunc();
    void timelineCrank__UpdateFunc();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveBeginPlay();
    void crank();
    void windown();
    void ReceiveTick(float DeltaSeconds);
    void playerUnequip(class AmainPlayer_C* Player);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_equipment_flashlight_c(int32 EntryPoint);
}; // Size: 0x3B9

#endif
