#ifndef UE4SS_SDK_grayboar_overcharged_HPP
#define UE4SS_SDK_grayboar_overcharged_HPP

class Agrayboar_overcharged_C : public Agrayboar_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0550 (size: 0x8)
    class UParticleSystemComponent* eye_R1;                                           // 0x0558 (size: 0x8)
    class UParticleSystemComponent* eye_R;                                            // 0x0560 (size: 0x8)
    class UAudioComponent* audio_spark3;                                              // 0x0568 (size: 0x8)
    class UAudioComponent* audio_spark2;                                              // 0x0570 (size: 0x8)
    class UAudioComponent* audio_spark1;                                              // 0x0578 (size: 0x8)

    void explosion();
    void ReceiveBeginPlay();
    void zapSfx();
    void deathplosion();
    void killed();
    void objectDamaged(class AActor* Player);
    void ExecuteUbergraph_grayboar_overcharged(int32 EntryPoint);
}; // Size: 0x580

#endif
