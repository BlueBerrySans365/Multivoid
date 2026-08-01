#ifndef UE4SS_SDK_prop_officetape_HPP
#define UE4SS_SDK_prop_officetape_HPP

class Aprop_officetape_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    int32 uses;                                                                       // 0x0378 (size: 0x4)
    class AmainPlayer_C* Player;                                                      // 0x0380 (size: 0x8)
    class AActor* Hit Actor;                                                          // 0x0388 (size: 0x8)
    class Aprop_C* prop;                                                              // 0x0390 (size: 0x8)

    void usesMessage();
    void ReceiveTick(float DeltaSeconds);
    void playerHoldPre(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ReceiveDestroyed();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_officetape(int32 EntryPoint);
}; // Size: 0x398

#endif
