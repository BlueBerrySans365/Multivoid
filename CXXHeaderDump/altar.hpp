#ifndef UE4SS_SDK_altar_HPP
#define UE4SS_SDK_altar_HPP

class Aaltar_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* altarLoop;                                                 // 0x0228 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest19;                                    // 0x0230 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest18;                                    // 0x0238 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest17;                                    // 0x0240 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest16;                                    // 0x0248 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest15;                                    // 0x0250 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest14;                                    // 0x0258 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest13;                                    // 0x0260 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest12;                                    // 0x0268 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest11;                                    // 0x0270 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest20;                                    // 0x0278 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest9;                                     // 0x0280 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest8;                                     // 0x0288 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest7;                                     // 0x0290 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest6;                                     // 0x0298 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest5;                                     // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest4;                                     // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest3;                                     // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest2;                                     // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest1;                                     // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* altarIslandTest10;                                    // 0x02C8 (size: 0x8)
    class USceneComponent* bridge;                                                    // 0x02D0 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x02D8 (size: 0x8)
    class UBillboardComponent* tp;                                                    // 0x02E0 (size: 0x8)
    class UInstancedStaticMeshComponent* bushes1;                                     // 0x02E8 (size: 0x8)
    class UInstancedStaticMeshComponent* bushes4;                                     // 0x02F0 (size: 0x8)
    class UInstancedStaticMeshComponent* bushes3;                                     // 0x02F8 (size: 0x8)
    class UInstancedStaticMeshComponent* bushes2;                                     // 0x0300 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0308 (size: 0x8)
    class UStaticMeshComponent* altar_arch;                                           // 0x0310 (size: 0x8)
    class UStaticMeshComponent* lambSpawn;                                            // 0x0318 (size: 0x8)
    class UStaticMeshComponent* altar_table;                                          // 0x0320 (size: 0x8)
    class UStaticMeshComponent* altar_pillars;                                        // 0x0328 (size: 0x8)
    class UStaticMeshComponent* altar_pentagram;                                      // 0x0330 (size: 0x8)
    class USphereComponent* c_fire;                                                   // 0x0338 (size: 0x8)
    class USphereComponent* c_water;                                                  // 0x0340 (size: 0x8)
    class USphereComponent* c_earth;                                                  // 0x0348 (size: 0x8)
    class USphereComponent* c_air;                                                    // 0x0350 (size: 0x8)
    class USphereComponent* c_sacrifice;                                              // 0x0358 (size: 0x8)
    class UParticleSystemComponent* p_water;                                          // 0x0360 (size: 0x8)
    class UParticleSystemComponent* p_earth;                                          // 0x0368 (size: 0x8)
    class UParticleSystemComponent* p_air;                                            // 0x0370 (size: 0x8)
    class UParticleSystemComponent* p_fire;                                           // 0x0378 (size: 0x8)
    class UStaticMeshComponent* island2;                                              // 0x0380 (size: 0x8)
    class USphereComponent* Bounds;                                                   // 0x0388 (size: 0x8)
    class UStaticMeshComponent* skysphere;                                            // 0x0390 (size: 0x8)
    class UInstancedStaticMeshComponent* grass;                                       // 0x0398 (size: 0x8)
    class UStaticMeshComponent* island1;                                              // 0x03A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03A8 (size: 0x8)
    class Aprop_rune_C* rune_air;                                                     // 0x03B0 (size: 0x8)
    class Aprop_rune_C* rune_earth;                                                   // 0x03B8 (size: 0x8)
    class Aprop_rune_C* rune_water;                                                   // 0x03C0 (size: 0x8)
    class Aprop_rune_C* rune_fire;                                                    // 0x03C8 (size: 0x8)
    TArray<class USceneComponent*> sLoc;                                              // 0x03D0 (size: 0x10)
    TArray<class Aprop_rune_C*> runesObj;                                             // 0x03E0 (size: 0x10)
    FVector Point;                                                                    // 0x03F0 (size: 0xC)
    class AActor* tpOut;                                                              // 0x0400 (size: 0x8)

    void Grass Gen();
    void snd();
    void updRunesArray();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__altar_c_air_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void grabbed_air();
    void BndEvt__altar_c_earth_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void grabbed_earth();
    void BndEvt__altar_c_water_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void grabbed_water();
    void BndEvt__altar_c_fire_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void grabbed_fire();
    void ReceiveBeginPlay();
    void check();
    void BndEvt__altar_bounds_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_altar(int32 EntryPoint);
}; // Size: 0x408

#endif
