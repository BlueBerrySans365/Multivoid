#ifndef UE4SS_SDK_ui_boltMinigameTest_HPP
#define UE4SS_SDK_ui_boltMinigameTest_HPP

class Uui_boltMinigameTest_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_nut;                                                        // 0x0268 (size: 0x8)
    class UButton* button_nut_0;                                                      // 0x0270 (size: 0x8)
    class UButton* button_nut_1;                                                      // 0x0278 (size: 0x8)
    class UButton* button_nut_2;                                                      // 0x0280 (size: 0x8)
    class UButton* button_nut_3;                                                      // 0x0288 (size: 0x8)
    class UButton* button_nut_4;                                                      // 0x0290 (size: 0x8)
    class UButton* button_nut_5;                                                      // 0x0298 (size: 0x8)
    class UCanvasPanel* canvas_nutCenter;                                             // 0x02A0 (size: 0x8)
    class UCanvasPanel* canvas_wheel;                                                 // 0x02A8 (size: 0x8)
    class UCanvasPanel* canvas_wrenchOrigin;                                          // 0x02B0 (size: 0x8)
    class UCanvasPanel* canvas_wrenchRotation;                                        // 0x02B8 (size: 0x8)
    class UCanvasPanel* canvas_wrenchRotation_shadow;                                 // 0x02C0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x02C8 (size: 0x8)
    class UImage* Image;                                                              // 0x02D0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02E0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02F0 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02F8 (size: 0x8)
    class UWidgetSwitcher* switcher;                                                  // 0x0300 (size: 0x8)
    TArray<float> nutsRotated;                                                        // 0x0308 (size: 0x10)
    int32 rotatingNutIndex;                                                           // 0x0318 (size: 0x4)
    TArray<class UButton*> nuts;                                                      // 0x0320 (size: 0x10)
    float wrenchRotation;                                                             // 0x0330 (size: 0x4)
    float DeltaTime;                                                                  // 0x0334 (size: 0x4)
    float Len;                                                                        // 0x0338 (size: 0x4)
    bool madeSound;                                                                   // 0x033C (size: 0x1)
    FVector2D res;                                                                    // 0x0340 (size: 0x8)
    bool impactDriver;                                                                // 0x0348 (size: 0x1)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void unscrewNut(int32 Index);
    void begin(bool impactDriver);
    void Exit();
    void checkNuts(bool& complete);
    void setupNuts();
    void setNut(int32 rotatingNutIndex);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
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
    void BndEvt__ui_boltMinigameTest_button_nut_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ui_boltMinigameTest_button_nut_1_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ui_boltMinigameTest_button_nut_2_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ui_boltMinigameTest_button_nut_3_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ui_boltMinigameTest_button_nut_4_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ui_boltMinigameTest_button_nut_5_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ui_boltMinigameTest_button_nut_0_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__ui_boltMinigameTest_button_nut_1_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__ui_boltMinigameTest_button_nut_2_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__ui_boltMinigameTest_button_nut_3_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__ui_boltMinigameTest_button_nut_4_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__ui_boltMinigameTest_button_nut_5_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ui_boltMinigameTest_button_nut_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_ui_boltMinigameTest(int32 EntryPoint);
}; // Size: 0x349

#endif
