#ifndef UE4SS_SDK_prop_radioHL_HPP
#define UE4SS_SDK_prop_radioHL_HPP

class Aprop_radioHL_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    bool A_0;                                                                         // 0x0378 (size: 0x1)

    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void ExecuteUbergraph_prop_radioHL(int32 EntryPoint);
}; // Size: 0x379

#endif
