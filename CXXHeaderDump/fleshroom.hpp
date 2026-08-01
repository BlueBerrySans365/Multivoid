#ifndef UE4SS_SDK_fleshroom_HPP
#define UE4SS_SDK_fleshroom_HPP

class Afleshroom_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0238 (size: 0x8)
    class UStaticMeshComponent* cross;                                                // 0x0240 (size: 0x8)
    class UStaticMeshComponent* wall5;                                                // 0x0248 (size: 0x8)
    class UStaticMeshComponent* wall4;                                                // 0x0250 (size: 0x8)
    class UStaticMeshComponent* wall3;                                                // 0x0258 (size: 0x8)
    class UStaticMeshComponent* wall2;                                                // 0x0260 (size: 0x8)
    class UStaticMeshComponent* wall1;                                                // 0x0268 (size: 0x8)
    class UStaticMeshComponent* wall0;                                                // 0x0270 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0278 (size: 0x8)
    float W_0;                                                                        // 0x0280 (size: 0x4)
    float W_1;                                                                        // 0x0284 (size: 0x4)
    float W_2;                                                                        // 0x0288 (size: 0x4)
    float W_3;                                                                        // 0x028C (size: 0x4)
    float W_4;                                                                        // 0x0290 (size: 0x4)
    float W_5;                                                                        // 0x0294 (size: 0x4)

    FVector Size(float A);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void spitOut();
    void ExecuteUbergraph_fleshroom(int32 EntryPoint);
}; // Size: 0x298

#endif
