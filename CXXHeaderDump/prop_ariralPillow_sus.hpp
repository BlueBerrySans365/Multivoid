#ifndef UE4SS_SDK_prop_ariralPillow_sus_HPP
#define UE4SS_SDK_prop_ariralPillow_sus_HPP

class Aprop_ariralPillow_sus_C : public Aprop_ariralPillow_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UPhysicsConstraintComponent* nocoll;                                        // 0x0390 (size: 0x8)
    class UChildActorComponent* ChildActor_0;                                         // 0x0398 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x03A0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_ariralPillow_sus(int32 EntryPoint);
}; // Size: 0x3A8

#endif
