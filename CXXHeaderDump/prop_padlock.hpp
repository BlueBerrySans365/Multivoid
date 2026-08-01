#ifndef UE4SS_SDK_prop_padlock_HPP
#define UE4SS_SDK_prop_padlock_HPP

class Aprop_padlock_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* grabRadius;                                               // 0x0370 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0378 (size: 0x8)
    class AActor* lock;                                                               // 0x0380 (size: 0x8)
    bool grabNearest;                                                                 // 0x0388 (size: 0x1)
    float Radius;                                                                     // 0x038C (size: 0x4)
    FVector grabOffset;                                                               // 0x0390 (size: 0xC)

    void canBePutInContainer(bool& return);
    void canBeUsedHold(bool& return);
    void UserConstructionScript();
    void broken();
    void broken_fire();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_prop_padlock(int32 EntryPoint);
}; // Size: 0x39C

#endif
