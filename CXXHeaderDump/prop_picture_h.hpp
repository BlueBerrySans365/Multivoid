#ifndef UE4SS_SDK_prop_picture_h_HPP
#define UE4SS_SDK_prop_picture_h_HPP

class Aprop_picture_h_C : public Aprop_wallAttachable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    int32 Index_0;                                                                    // 0x03E0 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x03E8 (size: 0x8)
    int32 Dim;                                                                        // 0x03F0 (size: 0x4)
    bool table;                                                                       // 0x03F4 (size: 0x1)
    FName Filename;                                                                   // 0x03F8 (size: 0x8)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void upd();
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void ExecuteUbergraph_prop_picture_h(int32 EntryPoint);
}; // Size: 0x400

#endif
