#ifndef UE4SS_SDK_prop_gascan_HPP
#define UE4SS_SDK_prop_gascan_HPP

class Aprop_gascan_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0370 (size: 0x8)
    float Amount;                                                                     // 0x0378 (size: 0x4)
    FVector impulse;                                                                  // 0x037C (size: 0xC)
    Fprop_gascan_CPickedup pickedup;                                                  // 0x0388 (size: 0x10)
    void pickedUp();
    float maxFuel;                                                                    // 0x0398 (size: 0x4)

    void gascanFuel(class Aprop_gascan_C* gascan, class AmainPlayer_C* Player, bool back, bool& fueled);
    void getPriceMultiplier(float& priceMult);
    void getFuel(float& currentFuel, float maxFuel, bool& hasFueled, bool& changed);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void broken();
    void broken_fire();
    void BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void crafted();
    void ExecuteUbergraph_prop_gascan(int32 EntryPoint);
    void pickedUp__DelegateSignature();
}; // Size: 0x39C

#endif
