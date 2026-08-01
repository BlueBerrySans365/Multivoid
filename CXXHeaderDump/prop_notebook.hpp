#ifndef UE4SS_SDK_prop_notebook_HPP
#define UE4SS_SDK_prop_notebook_HPP

class Aprop_notebook_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    TArray<FString> Text;                                                             // 0x0370 (size: 0x10)
    TArray<FText> text_u;                                                             // 0x0380 (size: 0x10)
    int32 page;                                                                       // 0x0390 (size: 0x4)
    bool uneditable;                                                                  // 0x0394 (size: 0x1)
    bool skipTextSave;                                                                // 0x0395 (size: 0x1)
    bool canAddPages;                                                                 // 0x0396 (size: 0x1)

    void getPriceMultiplier(float& priceMult);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void UserConstructionScript();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_prop_notebook(int32 EntryPoint);
}; // Size: 0x397

#endif
