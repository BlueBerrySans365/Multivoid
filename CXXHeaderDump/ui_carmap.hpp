#ifndef UE4SS_SDK_ui_carmap_HPP
#define UE4SS_SDK_ui_carmap_HPP

class Uui_carmap_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* Canvas;                                                       // 0x0268 (size: 0x8)
    TArray<class Uui_carmapPoint_C*> Points;                                          // 0x0270 (size: 0x10)
    TArray<class Aprop_beacon_C*> beacons;                                            // 0x0280 (size: 0x10)
    FVector2D bords;                                                                  // 0x0290 (size: 0x8)
    TArray<class Uui_carmapPoint_C*> minimaps;                                        // 0x0298 (size: 0x10)
    class AmainGamemode_C* GameMode;                                                  // 0x02A8 (size: 0x8)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void gen(TArray<class Aprop_beacon_C*>& beacons);
    void intComs_signalDeleted();
    void intComs_signalSaved();
    void intComs_gamemodeBeginPlay();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_unfoc();
    void intComs_unfocused();
    void intComs_gamemodePreLoad();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodeMakeKeys();
    void intComs_propRenderer_finishProps();
    void intComs_applyColor(FLinearColor Color);
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_gamemodePostKeys();
    void intComs_triggerSnow(bool isSnow);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_ui_carmap(int32 EntryPoint);
}; // Size: 0x2B0

#endif
