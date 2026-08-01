#ifndef UE4SS_SDK_prop_radioNew_HPP
#define UE4SS_SDK_prop_radioNew_HPP

class Aprop_radioNew_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x0370 (size: 0x8)
    bool A_0;                                                                         // 0x0378 (size: 0x1)

    void openMedia(FString OpenedUrl);
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void fail(FString FailedUrl);
    void ExecuteUbergraph_prop_radioNew(int32 EntryPoint);
}; // Size: 0x379

#endif
