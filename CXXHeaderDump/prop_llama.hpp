#ifndef UE4SS_SDK_prop_llama_HPP
#define UE4SS_SDK_prop_llama_HPP

class Aprop_llama_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0370 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0378 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0380 (size: 0x8)
    bool yumpskare;                                                                   // 0x0388 (size: 0x1)
    bool H;                                                                           // 0x0389 (size: 0x1)
    FTimerHandle Timer;                                                               // 0x0390 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void Jump();
    void checkJump();
    void ExecuteUbergraph_prop_llama(int32 EntryPoint);
}; // Size: 0x398

#endif
