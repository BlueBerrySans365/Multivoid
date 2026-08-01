#ifndef UE4SS_SDK_prop_floppyBox_HPP
#define UE4SS_SDK_prop_floppyBox_HPP

class Aprop_floppyBox_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UInstancedStaticMeshComponent* floppy_O;                                    // 0x0370 (size: 0x8)
    class UInstancedStaticMeshComponent* floppy_B;                                    // 0x0378 (size: 0x8)
    class UInstancedStaticMeshComponent* floppy_Wh;                                   // 0x0380 (size: 0x8)
    class UInstancedStaticMeshComponent* floppy_Bl;                                   // 0x0388 (size: 0x8)
    class UInstancedStaticMeshComponent* floppy_Y;                                    // 0x0390 (size: 0x8)
    class UInstancedStaticMeshComponent* floppy_G;                                    // 0x0398 (size: 0x8)
    class UInstancedStaticMeshComponent* floppy_R;                                    // 0x03A0 (size: 0x8)
    TArray<int32> floppyTypes;                                                        // 0x03A8 (size: 0x10)
    TArray<FString> floppyData;                                                       // 0x03B8 (size: 0x10)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getFloppy(class AmainPlayer_C* Player);
    void addFloppy(const int32& Type, class AActor* Object, bool& return);
    void getFloppyFromType(int32 Index, class UInstancedStaticMeshComponent*& inst);
    void gen();
    void UserConstructionScript();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_floppyBox(int32 EntryPoint);
}; // Size: 0x3C8

#endif
