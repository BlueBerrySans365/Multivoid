#ifndef UE4SS_SDK_prop_atvcarbattery_HPP
#define UE4SS_SDK_prop_atvcarbattery_HPP

class Aprop_atvcarbattery_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* coll_B;                                                   // 0x0370 (size: 0x8)
    class USphereComponent* coll_R;                                                   // 0x0378 (size: 0x8)
    class UBillboardComponent* connectPin_Blue;                                       // 0x0380 (size: 0x8)
    class UBillboardComponent* connectPin_Red;                                        // 0x0388 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0390 (size: 0x8)
    float battery;                                                                    // 0x0398 (size: 0x4)
    float heat;                                                                       // 0x039C (size: 0x4)
    bool lookingAt_red;                                                               // 0x03A0 (size: 0x1)
    bool lookingAt_blue;                                                              // 0x03A1 (size: 0x1)
    bool plugged_red;                                                                 // 0x03A2 (size: 0x1)
    bool plugged_blue;                                                                // 0x03A3 (size: 0x1)

    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getPriceMultiplier(float& priceMult);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveTick(float DeltaSeconds);
    void fireDamage(float Damage);
    void ExecuteUbergraph_prop_atvcarbattery(int32 EntryPoint);
}; // Size: 0x3A4

#endif
