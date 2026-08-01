#ifndef UE4SS_SDK_growingPlant_grassPatch_HPP
#define UE4SS_SDK_growingPlant_grassPatch_HPP

class AgrowingPlant_grassPatch_C : public AgrowingPlant_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UInstancedStaticMeshComponent* grass5;                                      // 0x0378 (size: 0x8)
    class UInstancedStaticMeshComponent* grass4;                                      // 0x0380 (size: 0x8)
    class UInstancedStaticMeshComponent* grass3;                                      // 0x0388 (size: 0x8)
    class UInstancedStaticMeshComponent* grass2;                                      // 0x0390 (size: 0x8)
    class UBoxComponent* grassSteps;                                                  // 0x0398 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x03A0 (size: 0x8)
    class UInstancedStaticMeshComponent* grass1;                                      // 0x03A8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x03B0 (size: 0x8)
    int32 Size;                                                                       // 0x03B8 (size: 0x4)
    float Scale;                                                                      // 0x03BC (size: 0x4)
    float jitter;                                                                     // 0x03C0 (size: 0x4)
    FVector2D Level;                                                                  // 0x03C4 (size: 0x8)
    float EdgeOffset;                                                                 // 0x03CC (size: 0x4)

    void Build();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_growingPlant_grassPatch(int32 EntryPoint);
}; // Size: 0x3D0

#endif
