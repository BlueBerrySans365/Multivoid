#ifndef UE4SS_SDK_bloodDecalMaster_HPP
#define UE4SS_SDK_bloodDecalMaster_HPP

class AbloodDecalMaster_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    TArray<class USphereComponent*> Particles;                                        // 0x0230 (size: 0x10)
    TArray<FVector> locs;                                                             // 0x0240 (size: 0x10)
    TArray<class UParticleSystemComponent*> decoParticles;                            // 0x0250 (size: 0x10)
    float killZheight;                                                                // 0x0260 (size: 0x4)
    TArray<int32> Types;                                                              // 0x0268 (size: 0x10)

    void addParticle(FVector Location, FVector Velocity, float Size, const int32 Type);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_bloodDecalMaster(int32 EntryPoint);
}; // Size: 0x278

#endif
