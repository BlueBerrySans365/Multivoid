#ifndef UE4SS_SDK_ui_keybinds_HPP
#define UE4SS_SDK_ui_keybinds_HPP

class Uui_keybinds_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_exit;                                                       // 0x0268 (size: 0x8)
    class UButton* button_reset;                                                      // 0x0270 (size: 0x8)
    class UExpandableArea* EA_cat_atv;                                                // 0x0278 (size: 0x8)
    class UExpandableArea* EA_cat_coordinatePanel;                                    // 0x0280 (size: 0x8)
    class UExpandableArea* EA_cat_misc;                                               // 0x0288 (size: 0x8)
    class UExpandableArea* EA_cat_playerControls;                                     // 0x0290 (size: 0x8)
    class UExpandableArea* EA_cat_radar;                                              // 0x0298 (size: 0x8)
    class UImage* Image_302;                                                          // 0x02A0 (size: 0x8)
    class UImage* img_overlay;                                                        // 0x02A8 (size: 0x8)
    class UScrollBox* ScrollBox_slots;                                                // 0x02B0 (size: 0x8)
    class Uuicomp_settingsSlot_controller_C* umg_settingsSlot_controller;             // 0x02B8 (size: 0x8)
    class UVerticalBox* vbox_category_atv;                                            // 0x02C0 (size: 0x8)
    class UVerticalBox* vbox_category_coordinatePanel;                                // 0x02C8 (size: 0x8)
    class UVerticalBox* vbox_category_misc;                                           // 0x02D0 (size: 0x8)
    class UVerticalBox* vbox_category_playerControls;                                 // 0x02D8 (size: 0x8)
    class UVerticalBox* vbox_category_radar;                                          // 0x02E0 (size: 0x8)
    TArray<class Uuicomp_keybindSlot_C*> Slots;                                       // 0x02E8 (size: 0x10)
    class Uui_settings_C* Settings;                                                   // 0x02F8 (size: 0x8)
    class Uuicomp_keybindSlot_C* activeBind;                                          // 0x0300 (size: 0x8)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void getSearchName(FName& Name);
    void gen();
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetBind(FKey Key, class Uuicomp_keybindSlot_C* sender);
    void activateOverlay(bool SetActive);
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
    void setIndex(int32 Index);
    void triggerRandom();
    void BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void resume();
    void intComs_gamemodeBeginPlay();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BndEvt__ui_keybinds_button_reset_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_keybinds(int32 EntryPoint);
}; // Size: 0x308

#endif
