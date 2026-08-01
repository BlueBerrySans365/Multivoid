#ifndef UE4SS_SDK_prop_gascan_big_HPP
#define UE4SS_SDK_prop_gascan_big_HPP

class Aprop_gascan_big_C : public Aprop_gascan_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x03A8 (size: 0x8)
    class UPhysicsThrusterComponent* PhysicsThruster;                                 // 0x03B0 (size: 0x8)
    class UChildActorComponent* flame;                                                // 0x03B8 (size: 0x8)
    class Aflamethrower_C* flamethrower;                                              // 0x03C0 (size: 0x8)

    void ReceiveBeginPlay();
    void ignite(float fuel);
    void extinguished();
    void ReceiveTick(float DeltaSeconds);
    void fireDamage(float Damage);
    void ExecuteUbergraph_prop_gascan_big(int32 EntryPoint);
}; // Size: 0x3C8

#endif
