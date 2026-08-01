#ifndef UE4SS_SDK_fridge_HPP
#define UE4SS_SDK_fridge_HPP

class Afridge_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class Ucomp_paranormal_C* comp_paranormal;                                        // 0x04C8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x04D0 (size: 0x8)
    class UMaterialBillboardComponent* bill;                                          // 0x04D8 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x04E0 (size: 0x8)
    class UBillboardComponent* ro;                                                    // 0x04E8 (size: 0x8)
    class UStaticMeshComponent* rend;                                                 // 0x04F0 (size: 0x8)
    class UTexture2D* NewVar_0;                                                       // 0x04F8 (size: 0x8)
    FString NewVar_1;                                                                 // 0x0500 (size: 0x10)
    FVector inBounds;                                                                 // 0x0510 (size: 0xC)
    float elepor;                                                                     // 0x051C (size: 0x4)
    float offs;                                                                       // 0x0520 (size: 0x4)
    bool process;                                                                     // 0x0524 (size: 0x1)
    float H;                                                                          // 0x0528 (size: 0x4)
    bool escaped;                                                                     // 0x052C (size: 0x1)
    FString NewVar_2;                                                                 // 0x0530 (size: 0x10)
    float totp;                                                                       // 0x0540 (size: 0x4)

    void R(FVector& elepor);
    void G();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_fridge(int32 EntryPoint);
}; // Size: 0x544

#endif
