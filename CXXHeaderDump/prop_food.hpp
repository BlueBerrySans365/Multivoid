#ifndef UE4SS_SDK_prop_food_HPP
#define UE4SS_SDK_prop_food_HPP

class Aprop_food_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* fliesSlow_Cue;                                             // 0x0370 (size: 0x8)
    class UParticleSystemComponent* eff_spoiled;                                      // 0x0378 (size: 0x8)
    class UParticleSystemComponent* eff_steam;                                        // 0x0380 (size: 0x8)
    Fstruct_food foodData;                                                            // 0x0388 (size: 0x1C)
    bool antibreather;                                                                // 0x03A4 (size: 0x1)
    float Temperature;                                                                // 0x03A8 (size: 0x4)
    float Celsius;                                                                    // 0x03AC (size: 0x4)
    float ripeness;                                                                   // 0x03B0 (size: 0x4)
    bool isFrozen;                                                                    // 0x03B4 (size: 0x1)
    float spoilageRate;                                                               // 0x03B8 (size: 0x4)
    bool tempLessThan0;                                                               // 0x03BC (size: 0x1)
    bool useSpoiling;                                                                 // 0x03BD (size: 0x1)
    bool notEdible;                                                                   // 0x03BE (size: 0x1)
    bool ignoreRotting;                                                               // 0x03BF (size: 0x1)
    int32 uses;                                                                       // 0x03C0 (size: 0x4)
    float DeltaSeconds;                                                               // 0x03C4 (size: 0x4)
    float poison_strength;                                                            // 0x03C8 (size: 0x4)
    float poison_delay;                                                               // 0x03CC (size: 0x4)
    class AmainPlayer_C* playerInteracted;                                            // 0x03D0 (size: 0x8)

    void freezed(bool frozen);
    void asFood(class Aprop_food_C*& food);
    void getPriceMultiplier(float& priceMult);
    bool isTooCold();
    bool isTooHot();
    void Init();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void used();
    void getData(Fstruct_save& Data);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void isButtonUsed(bool& failed);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void microwave(class Aprop_microwave_C* microwave);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void addTemperature(float Temperature);
    void accumulateTemperature(float Temperature, float Speed, float DeltaTime);
    void ReceiveTick(float DeltaSeconds);
    void fireDamage(float Damage);
    void bitten(class AmainPlayer_C* Player);
    void eaten(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_food(int32 EntryPoint);
}; // Size: 0x3D8

#endif
