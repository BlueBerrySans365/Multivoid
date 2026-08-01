#ifndef UE4SS_SDK_trigger_tpChamberSpawn_HPP
#define UE4SS_SDK_trigger_tpChamberSpawn_HPP

class Atrigger_tpChamberSpawn_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0298 (size: 0x8)
    class UAudioComponent* chamberAppear;                                             // 0x02A0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B0 (size: 0x8)
    float lig_b_AC12800D44E26935E05D849CB645F745;                                     // 0x02B8 (size: 0x4)
    float lig_a_AC12800D44E26935E05D849CB645F745;                                     // 0x02BC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> lig__Direction_AC12800D44E26935E05D849CB645F745; // 0x02C0 (size: 0x1)
    class UTimelineComponent* lig;                                                    // 0x02C8 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x02D0 (size: 0x10)
    class Uui_blur_C* blur;                                                           // 0x02E0 (size: 0x8)
    bool physEvent;                                                                   // 0x02E8 (size: 0x1)

    void lig__FinishedFunc();
    void lig__UpdateFunc();
    void runTrigger(class AActor* Owner, int32 Index);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_trigger_tpChamberSpawn(int32 EntryPoint);
}; // Size: 0x2E9

#endif
