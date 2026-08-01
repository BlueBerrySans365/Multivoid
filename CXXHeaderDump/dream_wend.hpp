#ifndef UE4SS_SDK_dream_wend_HPP
#define UE4SS_SDK_dream_wend_HPP

class Adream_wend_C : public AdreamBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UStaticMeshComponent* w4;                                                   // 0x0290 (size: 0x8)
    class UStaticMeshComponent* w3;                                                   // 0x0298 (size: 0x8)
    class UStaticMeshComponent* w2;                                                   // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* w1;                                                   // 0x02A8 (size: 0x8)
    class USkeletalMeshComponent* 1;                                                  // 0x02B0 (size: 0x8)
    class USkeletalMeshComponent* 4;                                                  // 0x02B8 (size: 0x8)
    class USkeletalMeshComponent* 3;                                                  // 0x02C0 (size: 0x8)
    class USkeletalMeshComponent* 2;                                                  // 0x02C8 (size: 0x8)
    class UBillboardComponent* Billboard1;                                            // 0x02D0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x02E0 (size: 0x8)
    float A;                                                                          // 0x02E8 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_dream_wend(int32 EntryPoint);
}; // Size: 0x2EC

#endif
