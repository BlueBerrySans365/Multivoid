#ifndef UE4SS_SDK_prop_gstMaker_HPP
#define UE4SS_SDK_prop_gstMaker_HPP

class Aprop_gstMaker_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UStaticMeshComponent* Ghost;                                                // 0x0370 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x0378 (size: 0x8)
    class AActor* hitActor_a;                                                         // 0x0380 (size: 0x8)
    FVector Loc;                                                                      // 0x0388 (size: 0xC)
    bool Fix A;                                                                       // 0x0394 (size: 0x1)

    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_gstMaker(int32 EntryPoint);
}; // Size: 0x395

#endif
