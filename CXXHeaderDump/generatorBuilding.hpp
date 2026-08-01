#ifndef UE4SS_SDK_generatorBuilding_HPP
#define UE4SS_SDK_generatorBuilding_HPP

class AgeneratorBuilding_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0228 (size: 0x8)
    class UStaticMeshComponent* cone;                                                 // 0x0230 (size: 0x8)
    class UChildActorComponent* atm;                                                  // 0x0238 (size: 0x8)
    class USphereComponent* playerArea;                                               // 0x0240 (size: 0x8)
    class UCapsuleComponent* zapper;                                                  // 0x0248 (size: 0x8)
    class UChildActorComponent* lightroot;                                            // 0x0250 (size: 0x8)
    class UChildActorComponent* Light;                                                // 0x0258 (size: 0x8)
    class UChildActorComponent* lightswitch;                                          // 0x0260 (size: 0x8)
    class UChildActorComponent* indoors2;                                             // 0x0268 (size: 0x8)
    class UChildActorComponent* indoors1;                                             // 0x0270 (size: 0x8)
    class UBoxComponent* nonav1;                                                      // 0x0278 (size: 0x8)
    class UBoxComponent* nonav;                                                       // 0x0280 (size: 0x8)
    class UPointLightComponent* signLight;                                            // 0x0288 (size: 0x8)
    class UStaticMeshComponent* generatorBuildingSigns_sign_light;                    // 0x0290 (size: 0x8)
    class UStaticMeshComponent* sign;                                                 // 0x0298 (size: 0x8)
    class UChildActorComponent* light1;                                               // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Frame;                                                // 0x02A8 (size: 0x8)
    class UParticleSystemComponent* eff_genBuildingSmoke;                             // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* vent;                                                 // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* window7;                                              // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* window6;                                              // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* window5;                                              // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* window4;                                              // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* window3;                                              // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* window2;                                              // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* window1;                                              // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* tr;                                                   // 0x02F8 (size: 0x8)
    class UChildActorComponent* door2;                                                // 0x0300 (size: 0x8)
    class UStaticMeshComponent* generatorBuilding;                                    // 0x0308 (size: 0x8)
    class UStaticMeshComponent* generatorBuildingCollision;                           // 0x0310 (size: 0x8)
    class Agenerator_C* transformer;                                                  // 0x0318 (size: 0x8)
    int32 trNum;                                                                      // 0x0320 (size: 0x4)
    bool enterLightDeactivate;                                                        // 0x0324 (size: 0x1)
    class AmainPlayer_C* playerInZone;                                                // 0x0328 (size: 0x8)
    bool noPower;                                                                     // 0x0330 (size: 0x1)

    FVector projectPointOnZapper(FVector Point);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__generatorBuilding_zapper_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void zapEffect();
    void BndEvt__generatorBuilding_playerArea_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__generatorBuilding_playerArea_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void trUpdated();
    void ExecuteUbergraph_generatorBuilding(int32 EntryPoint);
}; // Size: 0x331

#endif
