#ifndef UE4SS_SDK_prop_discBox_HPP
#define UE4SS_SDK_prop_discBox_HPP

class Aprop_discBox_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0370 (size: 0x8)
    class UInstancedStaticMeshComponent* disc_2;                                      // 0x0378 (size: 0x8)
    class UInstancedStaticMeshComponent* disc_1;                                      // 0x0380 (size: 0x8)
    TArray<int32> discs;                                                              // 0x0388 (size: 0x10)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void gen();
    void UserConstructionScript();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ExecuteUbergraph_prop_discBox(int32 EntryPoint);
}; // Size: 0x398

#endif
