#ifndef UE4SS_SDK_prop_flag_HPP
#define UE4SS_SDK_prop_flag_HPP

class Aprop_flag_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UvelocityStuck_C* velocityStuck;                                            // 0x0370 (size: 0x8)
    class USkeletalMeshComponent* flag;                                               // 0x0378 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0380 (size: 0x8)
    int32 Index;                                                                      // 0x0388 (size: 0x4)
    FName Filename;                                                                   // 0x038C (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void setTex();
    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void ExecuteUbergraph_prop_flag(int32 EntryPoint);
}; // Size: 0x394

#endif
