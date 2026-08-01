#ifndef UE4SS_SDK_dream_run_HPP
#define UE4SS_SDK_dream_run_HPP

class Adream_run_C : public AdreamBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UStaticMeshComponent* doorFr;                                               // 0x0290 (size: 0x8)
    class UBillboardComponent* wallOrigin;                                            // 0x0298 (size: 0x8)
    class UBillboardComponent* roo;                                                   // 0x02A0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02A8 (size: 0x8)
    class UBoxComponent* wok;                                                         // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x02B8 (size: 0x8)
    class UBillboardComponent* wallMov;                                               // 0x02C0 (size: 0x8)
    class UBoxComponent* fin;                                                         // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* doorL;                                                // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* doorR;                                                // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x02E0 (size: 0x8)
    float A;                                                                          // 0x02E8 (size: 0x4)
    float spd;                                                                        // 0x02EC (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void BndEvt__fin_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__wok_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_dream_run(int32 EntryPoint);
}; // Size: 0x2F0

#endif
