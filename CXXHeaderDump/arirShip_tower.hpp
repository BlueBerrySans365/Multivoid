#ifndef UE4SS_SDK_arirShip_tower_HPP
#define UE4SS_SDK_arirShip_tower_HPP

class AarirShip_tower_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0298 (size: 0x8)
    class UAudioComponent* gravigun_object_attr_loop;                                 // 0x02A0 (size: 0x8)
    class URadialForceComponent* pressure;                                            // 0x02A8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B8 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Sphere_0;                                             // 0x02C8 (size: 0x8)
    class UBillboardComponent* air;                                                   // 0x02D0 (size: 0x8)
    float press_p_B42E0EE04B03F2191C6B35860C766EF3;                                   // 0x02D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> press__Direction_B42E0EE04B03F2191C6B35860C766EF3; // 0x02DC (size: 0x1)
    class UTimelineComponent* press;                                                  // 0x02E0 (size: 0x8)
    float a_a_E2BAAD1D4B7AD90E35FEA79FCDCF3416;                                       // 0x02E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_E2BAAD1D4B7AD90E35FEA79FCDCF3416; // 0x02EC (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x02F0 (size: 0x8)
    bool Visible;                                                                     // 0x02F8 (size: 0x1)
    bool used;                                                                        // 0x02F9 (size: 0x1)

    void ignoreSave_trigger(bool& ignore);
    void UserConstructionScript();
    void a__FinishedFunc();
    void a__UpdateFunc();
    void a__air_diss__EventFunc();
    void a__air_app__EventFunc();
    void press__FinishedFunc();
    void press__UpdateFunc();
    void ReceiveBeginPlay();
    void appear(bool dir);
    void ExecuteUbergraph_arirShip_tower(int32 EntryPoint);
}; // Size: 0x2FA

#endif
