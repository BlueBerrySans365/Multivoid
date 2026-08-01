#ifndef UE4SS_SDK_fprints_HPP
#define UE4SS_SDK_fprints_HPP

class Afprints_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0228 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void show();
    void ExecuteUbergraph_fprints(int32 EntryPoint);
}; // Size: 0x240

#endif
