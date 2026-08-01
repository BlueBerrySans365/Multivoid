#ifndef UE4SS_SDK_centipedeSegmet_HPP
#define UE4SS_SDK_centipedeSegmet_HPP

class AcentipedeSegmet_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0240 (size: 0x8)
    float Speed;                                                                      // 0x0248 (size: 0x4)
    float Pos;                                                                        // 0x024C (size: 0x4)
    bool neck;                                                                        // 0x0250 (size: 0x1)
    int32 I;                                                                          // 0x0254 (size: 0x4)

    void set();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_centipedeSegmet(int32 EntryPoint);
}; // Size: 0x258

#endif
