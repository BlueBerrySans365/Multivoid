#ifndef UE4SS_SDK_wendussy_HPP
#define UE4SS_SDK_wendussy_HPP

class Awendussy_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* seebox;                                                      // 0x0228 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0230 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0238 (size: 0x8)
    class Ucomp_paranormal_C* pnormal;                                                // 0x0240 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0248 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0250 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0258 (size: 0x8)
    float vis_a_74148DAC464373695AC69988B6E0F135;                                     // 0x0260 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> vis__Direction_74148DAC464373695AC69988B6E0F135; // 0x0264 (size: 0x1)
    class UTimelineComponent* vis;                                                    // 0x0268 (size: 0x8)
    class Uwendussy_Skeleton_AnimBlueprint_C* Anim;                                   // 0x0270 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0278 (size: 0x8)
    float Timer;                                                                      // 0x0280 (size: 0x4)
    bool haveRifle;                                                                   // 0x0284 (size: 0x1)
    float ray_height;                                                                 // 0x0288 (size: 0x4)
    FVector Radius;                                                                   // 0x028C (size: 0xC)
    float DCheck_height;                                                              // 0x0298 (size: 0x4)
    float Delay;                                                                      // 0x029C (size: 0x4)
    float chance;                                                                     // 0x02A0 (size: 0x4)
    TArray<class UPhysicalMaterial*> mats_spawn;                                      // 0x02A8 (size: 0x10)
    float maxTimer;                                                                   // 0x02B8 (size: 0x4)
    bool rendered;                                                                    // 0x02BC (size: 0x1)
    TArray<class UPhysicalMaterial*> mats_look;                                       // 0x02C0 (size: 0x10)
    bool oneTime;                                                                     // 0x02D0 (size: 0x1)
    TArray<class UPhysicalMaterial*> totemSurfaces;                                   // 0x02D8 (size: 0x10)
    bool noNeedRifle;                                                                 // 0x02E8 (size: 0x1)

    void spawnTotem();
    void vis__FinishedFunc();
    void vis__UpdateFunc();
    void ReceiveBeginPlay();
    void move();
    void disappear();
    void appear();
    void sens();
    void sens_b();
    void ReceiveDestroyed();
    void ExecuteUbergraph_wendussy(int32 EntryPoint);
}; // Size: 0x2E9

#endif
