#ifndef UE4SS_SDK_prop_eriePlush_HPP
#define UE4SS_SDK_prop_eriePlush_HPP

class Aprop_eriePlush_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* foodM;                                                // 0x03E8 (size: 0x8)
    class UAudioComponent* shovelDig_2;                                               // 0x03F0 (size: 0x8)
    class UStaticMeshComponent* pencil;                                               // 0x03F8 (size: 0x8)
    class UStaticMeshComponent* paper;                                                // 0x0400 (size: 0x8)
    bool hasPaper;                                                                    // 0x0408 (size: 0x1)
    bool hasPencil;                                                                   // 0x0409 (size: 0x1)
    FName food;                                                                       // 0x040C (size: 0x8)
    bool eating;                                                                      // 0x0414 (size: 0x1)
    bool superEater;                                                                  // 0x0415 (size: 0x1)
    int32 angying;                                                                    // 0x0418 (size: 0x4)
    bool MORBING;                                                                     // 0x041C (size: 0x1)
    float fullness;                                                                   // 0x0420 (size: 0x4)
    int32 lone;                                                                       // 0x0424 (size: 0x4)
    int32 pains;                                                                      // 0x0428 (size: 0x4)
    class Aprop_microwave_C* lastMicrowave;                                           // 0x0430 (size: 0x8)
    FTimerHandle timerHandle_shaking;                                                 // 0x0438 (size: 0x8)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void anger();
    void eatCheese();
    void isAlone(bool& alone);
    void munch();
    void setFood();
    void upd();
    void BndEvt__prop_eriePlush_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Write();
    void fuck();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void loneTimer();
    void eatCheeseTimer();
    void microwave(class Aprop_microwave_C* microwave);
    void fireDamage(float Damage);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void Voice();
    void initVoice();
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void freezed(bool frozen);
    void Shake();
    void ExecuteUbergraph_prop_eriePlush(int32 EntryPoint);
}; // Size: 0x440

#endif
