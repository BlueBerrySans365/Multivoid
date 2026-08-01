#ifndef UE4SS_SDK_prop_sled_HPP
#define UE4SS_SDK_prop_sled_HPP

class Aprop_sled_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0370 (size: 0x8)
    class UStaticMeshComponent* Bottom;                                               // 0x0378 (size: 0x8)
    bool pressedForward;                                                              // 0x0380 (size: 0x1)
    bool pressedBackward;                                                             // 0x0381 (size: 0x1)
    class AmainPlayer_C* Player;                                                      // 0x0388 (size: 0x8)
    bool pressedRight;                                                                // 0x0390 (size: 0x1)
    bool pressedLeft;                                                                 // 0x0391 (size: 0x1)

    void playerSit(class AmainPlayer_C* Player);
    void playerUnsit(class AmainPlayer_C* Player);
    void ReceiveTick(float DeltaSeconds);
    void MoveForward(bool Pressed);
    void moveBackward(bool Pressed);
    void MoveRight(bool Pressed);
    void moveLeft(bool Pressed);
    void BndEvt__prop_sled_bottom_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_sled(int32 EntryPoint);
}; // Size: 0x392

#endif
