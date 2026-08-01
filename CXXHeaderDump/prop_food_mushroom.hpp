#ifndef UE4SS_SDK_prop_food_mushroom_HPP
#define UE4SS_SDK_prop_food_mushroom_HPP

class Aprop_food_mushroom_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class Ucomp_photographic_C* comp_photographic;                                    // 0x03E0 (size: 0x8)

    void Init();
    void spawnedNaturally();
    void Cut();
    void slice(bool clean);
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void ExecuteUbergraph_prop_food_mushroom(int32 EntryPoint);
}; // Size: 0x3E8

#endif
