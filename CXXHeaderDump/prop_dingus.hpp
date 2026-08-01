#ifndef UE4SS_SDK_prop_dingus_HPP
#define UE4SS_SDK_prop_dingus_HPP

class Aprop_dingus_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UAudioComponent* spk1;                                                      // 0x03E0 (size: 0x8)
    class UAudioComponent* ws1;                                                       // 0x03E8 (size: 0x8)
    class UAudioComponent* spk;                                                       // 0x03F0 (size: 0x8)
    int32 A;                                                                          // 0x03F8 (size: 0x4)
    bool isUsed;                                                                      // 0x03FC (size: 0x1)
    float B;                                                                          // 0x0400 (size: 0x4)
    bool argemwell;                                                                   // 0x0404 (size: 0x1)
    TArray<class UStaticMeshComponent*> bs;                                           // 0x0408 (size: 0x10)
    int32 T;                                                                          // 0x0418 (size: 0x4)
    TArray<class UStaticMeshComponent*> ch;                                           // 0x0420 (size: 0x10)
    TSubclassOf<class Aprop_garbageClump_C> clump;                                    // 0x0430 (size: 0x8)
    int32 dlumpType;                                                                  // 0x0438 (size: 0x4)

    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void enterWater(class AwaterVolume_C* Water);
    void broken();
    void fireDamage(float Damage);
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void Touch();
    void ReceiveTick(float DeltaSeconds);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_dingus(int32 EntryPoint);
}; // Size: 0x43C

#endif
