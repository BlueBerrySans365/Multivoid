#ifndef UE4SS_SDK_prop_balloon_HPP
#define UE4SS_SDK_prop_balloon_HPP

class Aprop_balloon_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPhysicsThrusterComponent* PhysicsThruster;                                 // 0x0370 (size: 0x8)
    class UParticleSystemComponent* eff_string;                                       // 0x0378 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0380 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0388 (size: 0x8)
    class Anail_C* nail;                                                              // 0x0390 (size: 0x8)
    FName nailKey;                                                                    // 0x0398 (size: 0x8)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void processKeys(bool& return);
    void ReceiveTick(float DeltaSeconds);
    void makeDes();
    void dess(class AActor* DestroyedActor);
    void setNail(class Anail_C* nail);
    void ExecuteUbergraph_prop_balloon(int32 EntryPoint);
}; // Size: 0x3A0

#endif
