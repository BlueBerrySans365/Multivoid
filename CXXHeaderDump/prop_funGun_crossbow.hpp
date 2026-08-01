#ifndef UE4SS_SDK_prop_funGun_crossbow_HPP
#define UE4SS_SDK_prop_funGun_crossbow_HPP

class Aprop_funGun_crossbow_C : public Aprop_funGun_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F0 (size: 0x8)
    class UParticleSystemComponent* eff_boltSpark;                                    // 0x04F8 (size: 0x8)
    class UAudioComponent* audio_crossbowBoltFizz;                                    // 0x0500 (size: 0x8)
    class UAudioComponent* audio_crossbowBoltClick;                                   // 0x0508 (size: 0x8)
    class UStaticMeshComponent* nailmesh;                                             // 0x0510 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0518 (size: 0x8)
    float Temp;                                                                       // 0x0520 (size: 0x4)
    bool zeus;                                                                        // 0x0524 (size: 0x1)
    class AcrossbowBolt_C* flyingBolt;                                                // 0x0528 (size: 0x8)
    bool useViewCam;                                                                  // 0x0530 (size: 0x1)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void Init();
    void updateMag();
    void reloaded();
    void fireBulletPrimary();
    void ReceiveBeginPlay();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void reloaded_primary();
    void ExecuteUbergraph_prop_funGun_crossbow(int32 EntryPoint);
}; // Size: 0x531

#endif
