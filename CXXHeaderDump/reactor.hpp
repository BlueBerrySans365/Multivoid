#ifndef UE4SS_SDK_reactor_HPP
#define UE4SS_SDK_reactor_HPP

class Areactor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* cube;                                                 // 0x0228 (size: 0x8)
    class UBillboardComponent* rot;                                                   // 0x0230 (size: 0x8)
    class UBillboardComponent* Axis;                                                  // 0x0238 (size: 0x8)
    class URectLightComponent* RectLight1;                                            // 0x0240 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0248 (size: 0x8)
    class USceneCaptureComponent2D* cam;                                              // 0x0250 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)
    bool dir;                                                                         // 0x0268 (size: 0x1)
    bool canMove;                                                                     // 0x0269 (size: 0x1)
    float targ;                                                                       // 0x026C (size: 0x4)
    TArray<FVector> locs;                                                             // 0x0270 (size: 0x10)
    TArray<class UStaticMeshComponent*> rods;                                         // 0x0280 (size: 0x10)

    void gen();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_reactor(int32 EntryPoint);
}; // Size: 0x290

#endif
