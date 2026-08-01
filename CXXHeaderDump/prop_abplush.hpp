#ifndef UE4SS_SDK_prop_abplush_HPP
#define UE4SS_SDK_prop_abplush_HPP

class Aprop_abplush_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* qwak;                                                      // 0x0370 (size: 0x8)

    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void ExecuteUbergraph_prop_abplush(int32 EntryPoint);
}; // Size: 0x378

#endif
