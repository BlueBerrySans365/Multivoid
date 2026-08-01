#ifndef UE4SS_SDK_prop_bananaHusk_HPP
#define UE4SS_SDK_prop_bananaHusk_HPP

class Aprop_bananaHusk_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03E0 (size: 0x8)

    void steppedOn(class AmainPlayer_C* Player, FHitResult Hit);
    void ExecuteUbergraph_prop_bananaHusk(int32 EntryPoint);
}; // Size: 0x3E8

#endif
