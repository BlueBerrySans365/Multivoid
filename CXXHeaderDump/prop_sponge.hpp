#ifndef UE4SS_SDK_prop_sponge_HPP
#define UE4SS_SDK_prop_sponge_HPP

class Aprop_sponge_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UParticleSystemComponent* eff_bubbles;                                      // 0x0370 (size: 0x8)
    float power;                                                                      // 0x0378 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0380 (size: 0x8)
    float col;                                                                        // 0x0388 (size: 0x4)
    float Strength;                                                                   // 0x038C (size: 0x4)
    float Size;                                                                       // 0x0390 (size: 0x4)
    bool Anim;                                                                        // 0x0394 (size: 0x1)
    class AmainPlayer_C* Player;                                                      // 0x0398 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> objs;                                       // 0x03A0 (size: 0x10)
    class UMaterialInterface* drawmat;                                                // 0x03B0 (size: 0x8)
    bool washCollision;                                                               // 0x03B8 (size: 0x1)
    float soapAmount;                                                                 // 0x03BC (size: 0x4)
    float cleanRadius;                                                                // 0x03C0 (size: 0x4)

    void getStrength(float& Strength);
    void cleanBubbles();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void collided(class UPrimitiveComponent* hitcomp, class AActor* otherac, class UPrimitiveComponent* OtherComp, FVector InputPin4, const FHitResult& InputPin5);
    void Clamp();
    void enteredTheWater();
    void wash(float Replace, float Sub, float& FloatOut, class UMaterialInstanceDynamic*& dynmat, float& Size);
    void OnNotifyEnd_D7F53866450AC44C2E9A9EA70ECE8CE0(FName NotifyName);
    void OnNotifyBegin_D7F53866450AC44C2E9A9EA70ECE8CE0(FName NotifyName);
    void OnInterrupted_D7F53866450AC44C2E9A9EA70ECE8CE0(FName NotifyName);
    void OnBlendOut_D7F53866450AC44C2E9A9EA70ECE8CE0(FName NotifyName);
    void OnCompleted_D7F53866450AC44C2E9A9EA70ECE8CE0(FName NotifyName);
    void OnNotifyEnd_7AB3ADC64B1C9C34BB990BA811472BD6(FName NotifyName);
    void OnNotifyBegin_7AB3ADC64B1C9C34BB990BA811472BD6(FName NotifyName);
    void OnInterrupted_7AB3ADC64B1C9C34BB990BA811472BD6(FName NotifyName);
    void OnBlendOut_7AB3ADC64B1C9C34BB990BA811472BD6(FName NotifyName);
    void OnCompleted_7AB3ADC64B1C9C34BB990BA811472BD6(FName NotifyName);
    void ReceiveBeginPlay();
    void enterWater(class AwaterVolume_C* Water);
    void BndEvt__prop_sponge_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_sponge(int32 EntryPoint);
}; // Size: 0x3C4

#endif
