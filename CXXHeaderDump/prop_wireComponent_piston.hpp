#ifndef UE4SS_SDK_prop_wireComponent_piston_HPP
#define UE4SS_SDK_prop_wireComponent_piston_HPP

class Aprop_wireComponent_piston_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UAudioComponent* doorSlide1;                                                // 0x0378 (size: 0x8)
    class UStaticMeshComponent* Mid;                                                  // 0x0380 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0388 (size: 0x8)
    class UChildActorComponent* head;                                                 // 0x0390 (size: 0x8)
    bool Active;                                                                      // 0x0398 (size: 0x1)
    float Alpha;                                                                      // 0x039C (size: 0x4)
    class UPrimitiveComponent* headComponent;                                         // 0x03A0 (size: 0x8)
    float Speed;                                                                      // 0x03A8 (size: 0x4)
    bool snd;                                                                         // 0x03AC (size: 0x1)

    void wirePass(class Awire_C* wire);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Tick();
    void ExecuteUbergraph_prop_wireComponent_piston(int32 EntryPoint);
}; // Size: 0x3AD

#endif
