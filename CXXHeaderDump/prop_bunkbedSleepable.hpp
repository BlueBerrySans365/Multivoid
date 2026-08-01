#ifndef UE4SS_SDK_prop_bunkbedSleepable_HPP
#define UE4SS_SDK_prop_bunkbedSleepable_HPP

class Aprop_bunkbedSleepable_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UStaticMeshComponent* mattressTop;                                          // 0x0370 (size: 0x8)
    class UStaticMeshComponent* mattressBottom;                                       // 0x0378 (size: 0x8)
    class UStaticMeshComponent* nail7;                                                // 0x0380 (size: 0x8)
    class UStaticMeshComponent* nail6;                                                // 0x0388 (size: 0x8)
    class UStaticMeshComponent* nail3;                                                // 0x0390 (size: 0x8)
    class UStaticMeshComponent* nail5;                                                // 0x0398 (size: 0x8)
    class UStaticMeshComponent* nail8;                                                // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* nail2;                                                // 0x03A8 (size: 0x8)
    class UStaticMeshComponent* nail1;                                                // 0x03B0 (size: 0x8)
    class UStaticMeshComponent* nail;                                                 // 0x03B8 (size: 0x8)
    class UStaticMeshComponent* nail4;                                                // 0x03C0 (size: 0x8)
    class UBillboardComponent* nails;                                                 // 0x03C8 (size: 0x8)
    bool lookAtBottom;                                                                // 0x03D0 (size: 0x1)
    bool lookAtTop;                                                                   // 0x03D1 (size: 0x1)

    void putMattressOn(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class Aprop_sleepingbag_C* sleepingbag, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ExecuteUbergraph_prop_bunkbedSleepable(int32 EntryPoint);
}; // Size: 0x3D2

#endif
