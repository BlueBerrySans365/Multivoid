#ifndef UE4SS_SDK_prop_fish_HPP
#define UE4SS_SDK_prop_fish_HPP

class Aprop_fish_C : public Aprop_cookingFood_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    bool inWater;                                                                     // 0x0410 (size: 0x1)
    float Speed;                                                                      // 0x0414 (size: 0x4)
    class AActor* obj;                                                                // 0x0418 (size: 0x8)
    bool isHit;                                                                       // 0x0420 (size: 0x1)
    int32 Type;                                                                       // 0x0424 (size: 0x4)
    bool dead;                                                                        // 0x0428 (size: 0x1)
    float health;                                                                     // 0x042C (size: 0x4)

    void decimate(bool cook);
    void overlayBoyancy(bool& Overlay, float& boyancy);
    void checkDead();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void Init();
    void enteredTheWater();
    void exitTheWater();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void timerCheckPlayer();
    void BndEvt__prop_fish_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void slice(bool clean);
    void leaveWater(class AwaterVolume_C* Water);
    void cooked();
    void ExecuteUbergraph_prop_fish(int32 EntryPoint);
}; // Size: 0x430

#endif
