#ifndef UE4SS_SDK_fire_DUPL_1_HPP
#define UE4SS_SDK_fire_DUPL_1_HPP

class Afire_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0250 (size: 0x8)
    float fuel;                                                                       // 0x0258 (size: 0x4)
    float fuelSpeed;                                                                  // 0x025C (size: 0x4)
    float fireSize;                                                                   // 0x0260 (size: 0x4)
    float effectRate;                                                                 // 0x0264 (size: 0x4)
    FVector BoxExtent;                                                                // 0x0268 (size: 0xC)
    class UParticleSystem* Emitter;                                                   // 0x0278 (size: 0x8)
    float Ignite Chance;                                                              // 0x0280 (size: 0x4)

    void ReceiveBeginPlay();
    void extinguished();
    void ExecuteUbergraph_fire(int32 EntryPoint);
}; // Size: 0x284

#endif
