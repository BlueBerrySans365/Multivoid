#ifndef UE4SS_SDK_prop_fireExt_HPP
#define UE4SS_SDK_prop_fireExt_HPP

class Aprop_fireExt_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0370 (size: 0x8)
    class UAudioComponent* fireExtFire;                                               // 0x0378 (size: 0x8)
    class UParticleSystemComponent* eff_ext;                                          // 0x0380 (size: 0x8)
    class UAudioComponent* fireExtThrust;                                             // 0x0388 (size: 0x8)
    class UParticleSystemComponent* eff_fireExtThr;                                   // 0x0390 (size: 0x8)
    class UPhysicsThrusterComponent* PhysicsThruster;                                 // 0x0398 (size: 0x8)
    float fireTimeSound_a_849D892B46E4CD13F748709AC6DF5D06;                           // 0x03A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> fireTimeSound__Direction_849D892B46E4CD13F748709AC6DF5D06; // 0x03A4 (size: 0x1)
    class UTimelineComponent* fireTimeSound;                                          // 0x03A8 (size: 0x8)
    float life;                                                                       // 0x03B0 (size: 0x4)
    bool Active;                                                                      // 0x03B4 (size: 0x1)
    bool firing;                                                                      // 0x03B5 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x03B8 (size: 0x10)
    TArray<class AActor*> ignores;                                                    // 0x03C8 (size: 0x10)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void extinguishRay(FVector InputPin, FVector InputPin2, float Radius);
    void fire(bool firing);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void fireTimeSound__FinishedFunc();
    void fireTimeSound__UpdateFunc();
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void shoot();
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
    void fireDamage(float Damage);
    void ReceiveTick(float DeltaSeconds);
    void fireSound();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_fireExt(int32 EntryPoint);
}; // Size: 0x3D8

#endif
