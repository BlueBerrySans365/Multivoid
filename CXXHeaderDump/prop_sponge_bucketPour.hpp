#ifndef UE4SS_SDK_prop_sponge_bucketPour_HPP
#define UE4SS_SDK_prop_sponge_bucketPour_HPP

class Aprop_sponge_bucketPour_C : public Aprop_sponge_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem_0;                                 // 0x03D0 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x03D8 (size: 0x10)
    float extinguishRadius;                                                           // 0x03E8 (size: 0x4)
    float velocityCleanDiv;                                                           // 0x03EC (size: 0x4)

    void ReceiveBeginPlay();
    void collided(class UPrimitiveComponent* hitcomp, class AActor* otherac, class UPrimitiveComponent* OtherComp, FVector InputPin4, const FHitResult& InputPin5);
    void ExecuteUbergraph_prop_sponge_bucketPour(int32 EntryPoint);
}; // Size: 0x3F0

#endif
