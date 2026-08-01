#ifndef UE4SS_SDK_prop_scissors_HPP
#define UE4SS_SDK_prop_scissors_HPP

class Aprop_scissors_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x0370 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void playerHoldPre(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_scissors(int32 EntryPoint);
}; // Size: 0x378

#endif
