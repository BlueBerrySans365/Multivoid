#ifndef UE4SS_SDK_prop_easteregg_HPP
#define UE4SS_SDK_prop_easteregg_HPP

class Aprop_easteregg_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UParticleSystemComponent* eff_glow;                                         // 0x03E0 (size: 0x8)
    class AeasterEggSpawn_C* spawnedBySpawner;                                        // 0x03E8 (size: 0x8)

    void checkBunnyEars();
    void ReceiveBeginPlay();
    void playerEquipmentUpdated(class AmainPlayer_C* Player);
    void ReceiveDestroyed();
    void ExecuteUbergraph_prop_easteregg(int32 EntryPoint);
}; // Size: 0x3F0

#endif
