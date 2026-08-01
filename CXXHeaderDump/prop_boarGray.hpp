#ifndef UE4SS_SDK_prop_boarGray_HPP
#define UE4SS_SDK_prop_boarGray_HPP

class Aprop_boarGray_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0370 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0378 (size: 0x8)
    class UArrowComponent* towards;                                                   // 0x0380 (size: 0x8)
    class UArrowComponent* follow;                                                    // 0x0388 (size: 0x8)
    class UArrowComponent* Forward;                                                   // 0x0390 (size: 0x8)
    class UArrowComponent* Normal;                                                    // 0x0398 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x03A0 (size: 0x8)
    float levitate;                                                                   // 0x03A8 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void BndEvt__prop_boarGray_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_prop_boarGray(int32 EntryPoint);
}; // Size: 0x3AC

#endif
