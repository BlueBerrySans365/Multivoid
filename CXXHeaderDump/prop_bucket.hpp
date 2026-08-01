#ifndef UE4SS_SDK_prop_bucket_HPP
#define UE4SS_SDK_prop_bucket_HPP

class Aprop_bucket_C : public Aprop_openContainer_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)
    class UArrowComponent* wobbleArrow;                                               // 0x03B8 (size: 0x8)
    class UParticleSystemComponent* eff_bucketBubbles;                                // 0x03C0 (size: 0x8)
    class UParticleSystemComponent* eff_brewBubble;                                   // 0x03C8 (size: 0x8)
    class UBillboardComponent* poo;                                                   // 0x03D0 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x03D8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03E0 (size: 0x8)
    class UAudioComponent* pouring;                                                   // 0x03E8 (size: 0x8)
    class UParticleSystemComponent* pour;                                             // 0x03F0 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x03F8 (size: 0x8)
    float Height;                                                                     // 0x0400 (size: 0x4)
    FVector bottomPoint;                                                              // 0x0404 (size: 0xC)
    FVector topPoint;                                                                 // 0x0410 (size: 0xC)
    bool Empty;                                                                       // 0x041C (size: 0x1)
    float height_interp;                                                              // 0x0420 (size: 0x4)
    float MaxHeight;                                                                  // 0x0424 (size: 0x4)
    bool alcohol;                                                                     // 0x0428 (size: 0x1)
    float alcoholP;                                                                   // 0x042C (size: 0x4)
    bool alcReady;                                                                    // 0x0430 (size: 0x1)
    int32 soap;                                                                       // 0x0434 (size: 0x4)
    bool canConcrete;                                                                 // 0x0438 (size: 0x1)

    void dipEffect();
    void updSoap();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void deleteAlc();
    void checkAlc();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    bool sleepy();
    void getFromWater(class AmainPlayer_C* NewParam);
    void calcPoints();
    void dipped(class Aprop_sponge_C* sponge, bool& isDipped);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void interpFlow();
    void upd();
    void UserConstructionScript();
    void BndEvt__prop_bucket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_bucket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void checkForAlc();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_bucket(int32 EntryPoint);
}; // Size: 0x439

#endif
