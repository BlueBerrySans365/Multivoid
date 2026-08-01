#ifndef UE4SS_SDK_ambientLightCurve_HPP
#define UE4SS_SDK_ambientLightCurve_HPP

class AambientLightCurve_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* s_radius1;                                                // 0x0228 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0230 (size: 0x8)
    class UBillboardComponent* Center;                                                // 0x0238 (size: 0x8)
    class USphereComponent* s_radius;                                                 // 0x0240 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    float Radius;                                                                     // 0x0258 (size: 0x4)
    float activeRarius;                                                               // 0x025C (size: 0x4)
    bool IsActive;                                                                    // 0x0260 (size: 0x1)
    FVector CamLoc;                                                                   // 0x0264 (size: 0xC)
    FVector Closest;                                                                  // 0x0270 (size: 0xC)
    float Distance;                                                                   // 0x027C (size: 0x4)
    float intensity_ambient;                                                          // 0x0280 (size: 0x4)
    float Alpha;                                                                      // 0x0284 (size: 0x4)
    class AmainGamemode_C* GameMode;                                                  // 0x0288 (size: 0x8)
    bool Shadows;                                                                     // 0x0290 (size: 0x1)
    bool InBox;                                                                       // 0x0291 (size: 0x1)
    class Amisc_box_C* roomBox;                                                       // 0x0298 (size: 0x8)
    TArray<class Amisc_box_C*> Boxes;                                                 // 0x02A0 (size: 0x10)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void calcInBox();
    void UserConstructionScript();
    void intComs_triggerSnow(bool isSnow);
    void ReceiveTick(float DeltaSeconds);
    void intComs_gamemodePostKeys();
    void ReceiveBeginPlay();
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_applyColor(FLinearColor Color);
    void intComs_propRenderer_finishProps();
    void intComs_gamemodeMakeKeys();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodePreLoad();
    void intComs_unfocused();
    void intComs_unfoc();
    void intComs_gamemodeBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_signalSaved();
    void intComs_signalDeleted();
    void ExecuteUbergraph_ambientLightCurve(int32 EntryPoint);
}; // Size: 0x2B0

#endif
