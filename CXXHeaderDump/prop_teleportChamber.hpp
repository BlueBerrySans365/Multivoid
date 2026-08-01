#ifndef UE4SS_SDK_prop_teleportChamber_HPP
#define UE4SS_SDK_prop_teleportChamber_HPP

class Aprop_teleportChamber_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USkeletalMeshComponent* spawn_leg_R;                                        // 0x0370 (size: 0x8)
    class USkeletalMeshComponent* spawn_leg_L;                                        // 0x0378 (size: 0x8)
    class UStaticMeshComponent* sign2_s;                                              // 0x0380 (size: 0x8)
    class UStaticMeshComponent* sign1;                                                // 0x0388 (size: 0x8)
    class UStaticMeshComponent* spawnGrav;                                            // 0x0390 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0398 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x03A0 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x03A8 (size: 0x8)
    bool debug;                                                                       // 0x03B0 (size: 0x1)

    void spawned();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_teleportChamber(int32 EntryPoint);
}; // Size: 0x3B1

#endif
