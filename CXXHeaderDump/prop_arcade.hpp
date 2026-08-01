#ifndef UE4SS_SDK_prop_arcade_HPP
#define UE4SS_SDK_prop_arcade_HPP

class Aprop_arcade_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0370 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0378 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0380 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0388 (size: 0x8)
    class UBillboardComponent* stand;                                                 // 0x0390 (size: 0x8)
    class UBillboardComponent* Axis;                                                  // 0x0398 (size: 0x8)
    class UBillboardComponent* cam;                                                   // 0x03A0 (size: 0x8)
    class UBillboardComponent* screen;                                                // 0x03A8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x03B0 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x03B8 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x03C0 (size: 0x10)
    class Amg_invaders_C* inv;                                                        // 0x03D0 (size: 0x8)
    class Uui_arcade_invaders_C* scrWidge;                                            // 0x03D8 (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void ini();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void ReceiveBeginPlay();
    void makeDelegate();
    void beep(class USoundBase* Sound, float Volume, float Pitch);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void intComs_gamemodePreLoad();
    void ExecuteUbergraph_prop_arcade(int32 EntryPoint);
}; // Size: 0x3E0

#endif
