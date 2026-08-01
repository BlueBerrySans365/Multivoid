#ifndef UE4SS_SDK_kerfurOmega_asmodena_HPP
#define UE4SS_SDK_kerfurOmega_asmodena_HPP

class AkerfurOmega_asmodena_C : public AkerfurOmega_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UAudioComponent* audio_flame;                                               // 0x09F8 (size: 0x8)
    class UAudioComponent* audio_eat;                                                 // 0x0A00 (size: 0x8)
    class UParticleSystemComponent* eff_firehand_L;                                   // 0x0A08 (size: 0x8)
    class UParticleSystemComponent* eff_firehand_R;                                   // 0x0A10 (size: 0x8)
    class USphereComponent* seeRadius;                                                // 0x0A18 (size: 0x8)
    class AActor* fireballTarget;                                                     // 0x0A20 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x0A28 (size: 0x10)
    int32 charges;                                                                    // 0x0A38 (size: 0x4)

    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void filterSee(TArray<class AActor*>& Actors);
    void fireball(class AActor* Target);
    void OnNotifyEnd_BA41FECE4BEBAC86460844B8219D7DA2(FName NotifyName);
    void OnNotifyBegin_BA41FECE4BEBAC86460844B8219D7DA2(FName NotifyName);
    void OnInterrupted_BA41FECE4BEBAC86460844B8219D7DA2(FName NotifyName);
    void OnBlendOut_BA41FECE4BEBAC86460844B8219D7DA2(FName NotifyName);
    void OnCompleted_BA41FECE4BEBAC86460844B8219D7DA2(FName NotifyName);
    void throwFireballAt(class AActor* fireballTarget);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void reachedByExplosion(FVector Location, float Damage, class Aexplosion_C* explosion);
    void ignite(float fuel);
    void attemptIgnite();
    void ReceiveBeginPlay();
    void timerFireball();
    void setFireballTimer();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void death();
    void ExecuteUbergraph_kerfurOmega_asmodena(int32 EntryPoint);
}; // Size: 0xA3C

#endif
