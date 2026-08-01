#ifndef UE4SS_SDK_prop_erieHold_good_HPP
#define UE4SS_SDK_prop_erieHold_good_HPP

class Aprop_erieHold_good_C : public Aprop_erieHold_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0398 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x03A0 (size: 0x8)

    void playerHoldPost(class AmainPlayer_C* Player);
    void ReceiveTick(float DeltaSeconds);
    void changed(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    void ExecuteUbergraph_prop_erieHold_good(int32 EntryPoint);
}; // Size: 0x3A8

#endif
