#ifndef UE4SS_SDK_prop_ruler_HPP
#define UE4SS_SDK_prop_ruler_HPP

class Aprop_ruler_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UStaticMeshComponent* tape;                                                 // 0x0370 (size: 0x8)
    class UBillboardComponent* B;                                                     // 0x0378 (size: 0x8)
    class UBillboardComponent* A;                                                     // 0x0380 (size: 0x8)
    class AmainPlayer_C* P;                                                           // 0x0388 (size: 0x8)

    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_ruler(int32 EntryPoint);
}; // Size: 0x390

#endif
