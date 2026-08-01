#ifndef UE4SS_SDK_comp_jetpack_HPP
#define UE4SS_SDK_comp_jetpack_HPP

class Ucomp_jetpack_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x00B8 (size: 0x8)
    class UAudioComponent* snd;                                                       // 0x00C0 (size: 0x8)

    void assign(class AmainPlayer_C* Player);
    void press(bool Pressed);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_comp_jetpack(int32 EntryPoint);
}; // Size: 0xC8

#endif
