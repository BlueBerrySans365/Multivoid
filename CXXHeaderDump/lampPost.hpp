#ifndef UE4SS_SDK_lampPost_HPP
#define UE4SS_SDK_lampPost_HPP

class AlampPost_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem3;                                  // 0x0228 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    bool isOn;                                                                        // 0x0248 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x0250 (size: 0x8)
    bool Shadows;                                                                     // 0x0258 (size: 0x1)

    void upd();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveDestroyed();
    void blink(float Weight);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_lampPost(int32 EntryPoint);
}; // Size: 0x259

#endif
