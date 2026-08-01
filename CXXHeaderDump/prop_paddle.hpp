#ifndef UE4SS_SDK_prop_paddle_HPP
#define UE4SS_SDK_prop_paddle_HPP

class Aprop_paddle_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x0378 (size: 0x8)
    class UPrimitiveComponent* paddleComponent;                                       // 0x0380 (size: 0x8)
    class AActor* paddleActor;                                                        // 0x0388 (size: 0x8)

    void OnNotifyEnd_2FF576F74747A1B083FDC9A667A36A94(FName NotifyName);
    void OnNotifyBegin_2FF576F74747A1B083FDC9A667A36A94(FName NotifyName);
    void OnInterrupted_2FF576F74747A1B083FDC9A667A36A94(FName NotifyName);
    void OnBlendOut_2FF576F74747A1B083FDC9A667A36A94(FName NotifyName);
    void OnCompleted_2FF576F74747A1B083FDC9A667A36A94(FName NotifyName);
    void OnNotifyEnd_64A226B04366D844A8691B9E202A467F(FName NotifyName);
    void OnNotifyBegin_64A226B04366D844A8691B9E202A467F(FName NotifyName);
    void OnInterrupted_64A226B04366D844A8691B9E202A467F(FName NotifyName);
    void OnBlendOut_64A226B04366D844A8691B9E202A467F(FName NotifyName);
    void OnCompleted_64A226B04366D844A8691B9E202A467F(FName NotifyName);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_paddle(int32 EntryPoint);
}; // Size: 0x390

#endif
