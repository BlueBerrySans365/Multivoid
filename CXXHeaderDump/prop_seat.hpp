#ifndef UE4SS_SDK_prop_seat_HPP
#define UE4SS_SDK_prop_seat_HPP

class Aprop_seat_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0370 (size: 0x8)
    class UChildActorComponent* seat;                                                 // 0x0378 (size: 0x8)
    bool pressedLeft;                                                                 // 0x0380 (size: 0x1)
    bool pressedRight;                                                                // 0x0381 (size: 0x1)
    class AmainPlayer_C* Player;                                                      // 0x0388 (size: 0x8)

    void playerSit(class AmainPlayer_C* Player);
    void Left(bool Pressed);
    void Right(bool Pressed);
    void playerUnsit(class AmainPlayer_C* Player);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void sitUp(class AsitBox_C* sit);
    void ExecuteUbergraph_prop_seat(int32 EntryPoint);
}; // Size: 0x390

#endif
