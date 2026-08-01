#ifndef UE4SS_SDK_prop_pizza_HPP
#define UE4SS_SDK_prop_pizza_HPP

class Aprop_pizza_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UStaticMeshComponent* pizzaslices_slice6;                                   // 0x0370 (size: 0x8)
    class UStaticMeshComponent* pizzaslices_slice5;                                   // 0x0378 (size: 0x8)
    class UStaticMeshComponent* pizzaslices_slice4;                                   // 0x0380 (size: 0x8)
    class UStaticMeshComponent* pizzaslices_slice3;                                   // 0x0388 (size: 0x8)
    class UStaticMeshComponent* pizzaslices_slice2;                                   // 0x0390 (size: 0x8)
    class UStaticMeshComponent* pizzaslices_slice1;                                   // 0x0398 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x03A0 (size: 0x8)
    bool Open;                                                                        // 0x03A8 (size: 0x1)
    bool opened;                                                                      // 0x03A9 (size: 0x1)
    int32 health;                                                                     // 0x03AC (size: 0x4)
    TArray<class UStaticMeshComponent*> Slices;                                       // 0x03B0 (size: 0x10)

    void pizzaEaten();
    void getPriceMultiplier(float& priceMult);
    void updSlices();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void UserConstructionScript();
    void OnNotifyEnd_48B260CB4441F19A490ABE87A199EFFE(FName NotifyName);
    void OnNotifyBegin_48B260CB4441F19A490ABE87A199EFFE(FName NotifyName);
    void OnInterrupted_48B260CB4441F19A490ABE87A199EFFE(FName NotifyName);
    void OnBlendOut_48B260CB4441F19A490ABE87A199EFFE(FName NotifyName);
    void OnCompleted_48B260CB4441F19A490ABE87A199EFFE(FName NotifyName);
    void OnNotifyEnd_65498482477B12E33D62FBBDD42CD9F5(FName NotifyName);
    void OnNotifyBegin_65498482477B12E33D62FBBDD42CD9F5(FName NotifyName);
    void OnInterrupted_65498482477B12E33D62FBBDD42CD9F5(FName NotifyName);
    void OnBlendOut_65498482477B12E33D62FBBDD42CD9F5(FName NotifyName);
    void OnCompleted_65498482477B12E33D62FBBDD42CD9F5(FName NotifyName);
    void openanim();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_pizza(int32 EntryPoint);
}; // Size: 0x3C0

#endif
