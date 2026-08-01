#ifndef UE4SS_SDK_prop_furfurPaltar_HPP
#define UE4SS_SDK_prop_furfurPaltar_HPP

class Aprop_furfurPAltar_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0370 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0378 (size: 0x8)
    class UBoxComponent* 2;                                                           // 0x0380 (size: 0x8)
    class UBoxComponent* 1;                                                           // 0x0388 (size: 0x8)
    bool has_1;                                                                       // 0x0390 (size: 0x1)
    bool has_2;                                                                       // 0x0391 (size: 0x1)
    bool activated;                                                                   // 0x0392 (size: 0x1)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void BndEvt__prop_furfurPAltar_1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_furfurPAltar_2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_prop_furfurPAltar(int32 EntryPoint);
}; // Size: 0x393

#endif
