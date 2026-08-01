#ifndef UE4SS_SDK_prop_radio_internet_HPP
#define UE4SS_SDK_prop_radio_internet_HPP

class Aprop_radio_internet_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x0370 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0378 (size: 0x8)
    Fstruct_tv Data;                                                                  // 0x0380 (size: 0x28)
    int32 playIndex;                                                                  // 0x03A8 (size: 0x4)
    TArray<int32> Indexes;                                                            // 0x03B0 (size: 0x10)
    TEnumAsByte<enum_playlist::Type> PlayMode;                                        // 0x03C0 (size: 0x1)
    bool pausePlayer;                                                                 // 0x03C1 (size: 0x1)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void ReceiveBeginPlay();
    void opened(FString OpenedUrl);
    void openLink(Fstruct_tv Data, bool pausePlayer);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void fin();
    void useRadio(class AmainPlayer_C* Target);
    void ExecuteUbergraph_prop_radio_internet(int32 EntryPoint);
}; // Size: 0x3C2

#endif
