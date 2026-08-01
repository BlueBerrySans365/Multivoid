#ifndef UE4SS_SDK_screamingCorpse_HPP
#define UE4SS_SDK_screamingCorpse_HPP

class AscreamingCorpse_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0228 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    FString NewVar_0;                                                                 // 0x0240 (size: 0x10)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_screamingCorpse(int32 EntryPoint);
}; // Size: 0x250

#endif
