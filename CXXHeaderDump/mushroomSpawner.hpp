#ifndef UE4SS_SDK_mushroomSpawner_HPP
#define UE4SS_SDK_mushroomSpawner_HPP

class AmushroomSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* ren;                                                  // 0x0228 (size: 0x8)
    int32 Type;                                                                       // 0x0230 (size: 0x4)
    float Timer;                                                                      // 0x0234 (size: 0x4)
    bool useRendered;                                                                 // 0x0238 (size: 0x1)
    FName Name;                                                                       // 0x023C (size: 0x8)

    void ReceiveBeginPlay();
    void Spawn();
    void ExecuteUbergraph_mushroomSpawner(int32 EntryPoint);
}; // Size: 0x244

#endif
