#ifndef UE4SS_SDK_prop_arirGun_HPP
#define UE4SS_SDK_prop_arirGun_HPP

class Aprop_arirGun_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* arirGunSnd;                                                // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0378 (size: 0x8)
    class USkeletalMeshComponent* arirGun2;                                           // 0x0380 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0388 (size: 0x8)
    class UArrowComponent* fire;                                                      // 0x0390 (size: 0x8)
    bool usable;                                                                      // 0x0398 (size: 0x1)
    float reload;                                                                     // 0x039C (size: 0x4)
    bool opened;                                                                      // 0x03A0 (size: 0x1)
    bool Anim;                                                                        // 0x03A1 (size: 0x1)
    bool fired;                                                                       // 0x03A2 (size: 0x1)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void OnNotifyEnd_0B09162B49A54CB47986BFBCC0891E88(FName NotifyName);
    void OnNotifyBegin_0B09162B49A54CB47986BFBCC0891E88(FName NotifyName);
    void OnInterrupted_0B09162B49A54CB47986BFBCC0891E88(FName NotifyName);
    void OnBlendOut_0B09162B49A54CB47986BFBCC0891E88(FName NotifyName);
    void OnCompleted_0B09162B49A54CB47986BFBCC0891E88(FName NotifyName);
    void OnNotifyEnd_23E3CDBB47E01E6EE50CC0B3CDFDD7B4(FName NotifyName);
    void OnNotifyBegin_23E3CDBB47E01E6EE50CC0B3CDFDD7B4(FName NotifyName);
    void OnInterrupted_23E3CDBB47E01E6EE50CC0B3CDFDD7B4(FName NotifyName);
    void OnBlendOut_23E3CDBB47E01E6EE50CC0B3CDFDD7B4(FName NotifyName);
    void OnCompleted_23E3CDBB47E01E6EE50CC0B3CDFDD7B4(FName NotifyName);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void fireBeam();
    void ReceiveTick(float DeltaSeconds);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_prop_arirGun(int32 EntryPoint);
}; // Size: 0x3A3

#endif
