#ifndef UE4SS_SDK_ufo_ballfo_HPP
#define UE4SS_SDK_ufo_ballfo_HPP

class Aufo_ballfo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x0228 (size: 0x8)
    class UStaticMeshComponent* b3;                                                   // 0x0230 (size: 0x8)
    class UStaticMeshComponent* B1;                                                   // 0x0238 (size: 0x8)
    class UStaticMeshComponent* B2;                                                   // 0x0240 (size: 0x8)
    class UBillboardComponent* lift;                                                  // 0x0248 (size: 0x8)
    class UBillboardComponent* balls;                                                 // 0x0250 (size: 0x8)
    class UParticleSystemComponent* eff_light3;                                       // 0x0258 (size: 0x8)
    class UParticleSystemComponent* eff_light2;                                       // 0x0260 (size: 0x8)
    class UParticleSystemComponent* eff_light1;                                       // 0x0268 (size: 0x8)
    class UBillboardComponent* A;                                                     // 0x0270 (size: 0x8)
    class UBillboardComponent* B;                                                     // 0x0278 (size: 0x8)
    class UBillboardComponent* Center;                                                // 0x0280 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0288 (size: 0x8)
    float Size;                                                                       // 0x0290 (size: 0x4)
    float Speed;                                                                      // 0x0294 (size: 0x4)
    bool debug;                                                                       // 0x0298 (size: 0x1)

    void set();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_ufo_ballfo(int32 EntryPoint);
}; // Size: 0x299

#endif
