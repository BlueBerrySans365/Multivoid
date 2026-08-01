#ifndef UE4SS_SDK_prop_mdetect_HPP
#define UE4SS_SDK_prop_mdetect_HPP

class Aprop_mdetect_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Ucomp_metalDetector_C* comp_metalDetector;                                  // 0x0370 (size: 0x8)
    class UParticleSystemComponent* light1;                                           // 0x0378 (size: 0x8)
    class UParticleSystemComponent* Light;                                            // 0x0380 (size: 0x8)
    class UArrowComponent* dir;                                                       // 0x0388 (size: 0x8)
    class UAudioComponent* detectBeep;                                                // 0x0390 (size: 0x8)
    float Time;                                                                       // 0x0398 (size: 0x4)
    TArray<TEnumAsByte<EObjectTypeQuery>> objs;                                       // 0x03A0 (size: 0x10)
    float scan;                                                                       // 0x03B0 (size: 0x4)
    float maxt;                                                                       // 0x03B4 (size: 0x4)
    bool Active;                                                                      // 0x03B8 (size: 0x1)
    float powr;                                                                       // 0x03BC (size: 0x4)

    void upd();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void Closest(TArray<class AActor*>& Array, class AActor*& Output, bool& return);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void playerHoldPost(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_mdetect(int32 EntryPoint);
}; // Size: 0x3C0

#endif
