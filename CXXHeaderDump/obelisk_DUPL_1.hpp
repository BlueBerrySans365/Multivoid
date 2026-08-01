#ifndef UE4SS_SDK_obelisk_DUPL_1_HPP
#define UE4SS_SDK_obelisk_DUPL_1_HPP

class Aobelisk_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0250 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0258 (size: 0x8)
    class USphereComponent* Walk;                                                     // 0x0260 (size: 0x8)
    class UAudioComponent* obelisk_loop;                                              // 0x0268 (size: 0x8)
    class UAudioComponent* obelisk_on;                                                // 0x0270 (size: 0x8)
    class URadialForceComponent* RadialForce;                                         // 0x0278 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0280 (size: 0x8)
    class UParticleSystemComponent* eff_obeliskLand;                                  // 0x0288 (size: 0x8)
    class UBillboardComponent* propLoc;                                               // 0x0290 (size: 0x8)
    class UAudioComponent* obelisk_land;                                              // 0x0298 (size: 0x8)
    class UAudioComponent* obelisk_fall;                                              // 0x02A0 (size: 0x8)
    class UAudioComponent* obelisk_enter;                                             // 0x02A8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x02B8 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02C8 (size: 0x8)
    float a_a_C998E1C741F26E46558BD89743B5C0AC;                                       // 0x02D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_C998E1C741F26E46558BD89743B5C0AC; // 0x02D4 (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x02D8 (size: 0x8)
    bool fallen;                                                                      // 0x02E0 (size: 0x1)
    bool pulledout;                                                                   // 0x02E1 (size: 0x1)
    bool physEvent;                                                                   // 0x02E2 (size: 0x1)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void UserConstructionScript();
    void a__FinishedFunc();
    void a__UpdateFunc();
    void a__preland__EventFunc();
    void a__en__EventFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_obelisk(int32 EntryPoint);
}; // Size: 0x2E3

#endif
