#ifndef UE4SS_SDK_soltomiaCleaning_HPP
#define UE4SS_SDK_soltomiaCleaning_HPP

class AsoltomiaCleaning_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x0228 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0230 (size: 0x8)
    class UAudioComponent* talk1;                                                     // 0x0238 (size: 0x8)
    class UAudioComponent* talk2;                                                     // 0x0240 (size: 0x8)
    class UAudioComponent* Voice;                                                     // 0x0248 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0250 (size: 0x8)
    class UAudioComponent* squeak;                                                    // 0x0258 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0260 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0268 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0270 (size: 0x8)
    class USkeletalMeshComponent* solt;                                               // 0x0278 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0280 (size: 0x8)
    FVector Loc;                                                                      // 0x0288 (size: 0xC)
    FVector dir;                                                                      // 0x0294 (size: 0xC)
    FName doorOpen;                                                                   // 0x02A0 (size: 0x8)
    class Adoor_C* door;                                                              // 0x02A8 (size: 0x8)
    class AATV_C* ATV;                                                                // 0x02B0 (size: 0x8)
    FName doorJam1;                                                                   // 0x02B8 (size: 0x8)
    FName doorJam2;                                                                   // 0x02C0 (size: 0x8)
    FName doorJam3;                                                                   // 0x02C8 (size: 0x8)
    class Adoor_C* jammedDoor;                                                        // 0x02D0 (size: 0x8)
    class Adoor_C* jammedDoor2;                                                       // 0x02D8 (size: 0x8)
    class Adoor_C* jammedDoor3;                                                       // 0x02E0 (size: 0x8)
    int32 iTalk;                                                                      // 0x02E8 (size: 0x4)
    bool Active;                                                                      // 0x02EC (size: 0x1)
    bool debug;                                                                       // 0x02ED (size: 0x1)

    void talk(int32 iTalk);
    void OnNotifyEnd_CC1C802A418B8136B4D73DA13F1FA965(FName NotifyName);
    void OnNotifyBegin_CC1C802A418B8136B4D73DA13F1FA965(FName NotifyName);
    void OnInterrupted_CC1C802A418B8136B4D73DA13F1FA965(FName NotifyName);
    void OnBlendOut_CC1C802A418B8136B4D73DA13F1FA965(FName NotifyName);
    void OnCompleted_CC1C802A418B8136B4D73DA13F1FA965(FName NotifyName);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void opened();
    void ReceiveDestroyed();
    void BndEvt__soltomiaCleaning_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void repeat();
    void talking();
    void ExecuteUbergraph_soltomiaCleaning(int32 EntryPoint);
}; // Size: 0x2EE

#endif
