#ifndef UE4SS_SDK_ui_reactor_HPP
#define UE4SS_SDK_ui_reactor_HPP

class Uui_reactor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* canvas_tempCursor;                                            // 0x0268 (size: 0x8)
    class UHorizontalBox* HorizontalBox;                                              // 0x0270 (size: 0x8)
    class UImage* Image_19;                                                           // 0x0278 (size: 0x8)
    class UImage* img_image;                                                          // 0x0280 (size: 0x8)
    class UTextBlock* txt_avg;                                                        // 0x0288 (size: 0x8)
    class UTextBlock* txt_cri;                                                        // 0x0290 (size: 0x8)
    class UTextBlock* txt_eff;                                                        // 0x0298 (size: 0x8)
    class UTextBlock* txt_temp;                                                       // 0x02A0 (size: 0x8)
    class UTextBlock* txt_tempShift;                                                  // 0x02A8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x02B0 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x02B8 (size: 0x8)
    class Areactor_C* reactor;                                                        // 0x02C0 (size: 0x8)
    TArray<float> rods_heights;                                                       // 0x02C8 (size: 0x10)
    TArray<class Uui_reactorRod_C*> rods;                                             // 0x02D8 (size: 0x10)
    TArray<float> rods_heights_lerp;                                                  // 0x02E8 (size: 0x10)
    float Mid;                                                                        // 0x02F8 (size: 0x4)
    float Temp;                                                                       // 0x02FC (size: 0x4)
    FFloatSpringState spring;                                                         // 0x0300 (size: 0x8)
    float tempShift;                                                                  // 0x0308 (size: 0x4)
    float effic;                                                                      // 0x030C (size: 0x4)
    float crit;                                                                       // 0x0310 (size: 0x4)
    float efficiency;                                                                 // 0x0314 (size: 0x4)
    bool critA;                                                                       // 0x0318 (size: 0x1)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void intComs_signalDeleted();
    void intComs_signalSaved();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_unfoc();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
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
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_ui_reactor(int32 EntryPoint);
}; // Size: 0x319

#endif
