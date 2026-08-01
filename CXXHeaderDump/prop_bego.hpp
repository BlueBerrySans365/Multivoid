#ifndef UE4SS_SDK_prop_bego_HPP
#define UE4SS_SDK_prop_bego_HPP

class Aprop_bego_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0370 (size: 0x8)

    void steppedOn(class AmainPlayer_C* Player, FHitResult Hit);
    void ExecuteUbergraph_prop_bego(int32 EntryPoint);
}; // Size: 0x378

#endif
