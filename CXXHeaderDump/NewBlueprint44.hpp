#ifndef UE4SS_SDK_NewBlueprint44_HPP
#define UE4SS_SDK_NewBlueprint44_HPP

class ANewBlueprint44_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x04C8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x04E0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x04E8 (size: 0x8)
    bool NewVar_0;                                                                    // 0x04F0 (size: 0x1)
    float NewVar_1;                                                                   // 0x04F4 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_NewBlueprint44(int32 EntryPoint);
}; // Size: 0x4F8

#endif
