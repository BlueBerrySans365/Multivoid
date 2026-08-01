#ifndef UE4SS_SDK_ui_UI_HPP
#define UE4SS_SDK_ui_UI_HPP

class Uui_UI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* borders;                                                      // 0x0268 (size: 0x8)
    class UCanvasPanel* canv_NGOUD;                                                   // 0x0270 (size: 0x8)
    class UCanvasPanel* canvas_actionList;                                            // 0x0278 (size: 0x8)
    class UCanvasPanel* canvas_ammos;                                                 // 0x0280 (size: 0x8)
    class UCanvasPanel* canvas_clock;                                                 // 0x0288 (size: 0x8)
    class UCanvasPanel* canvas_compass;                                               // 0x0290 (size: 0x8)
    class UCanvasPanel* canvas_hideBoundingbox;                                       // 0x0298 (size: 0x8)
    class UCanvasPanel* canvas_hitbarPivotNest;                                       // 0x02A0 (size: 0x8)
    class UCanvasPanel* canvas_holdBar;                                               // 0x02A8 (size: 0x8)
    class UCanvasPanel* canvas_hotbar;                                                // 0x02B0 (size: 0x8)
    class UCanvasPanel* canvas_hotbarCompassSwap;                                     // 0x02B8 (size: 0x8)
    class UCanvasPanel* canvas_hotbarNest;                                            // 0x02C0 (size: 0x8)
    class UCanvasPanel* canvas_hotbarPivot;                                           // 0x02C8 (size: 0x8)
    class UCanvasPanel* canvas_hovertext_bottomtext;                                  // 0x02D0 (size: 0x8)
    class UCanvasPanel* canvas_hovertext_bottomtextBorder;                            // 0x02D8 (size: 0x8)
    class UCanvasPanel* canvas_lookatBounds;                                          // 0x02E0 (size: 0x8)
    class UCanvasPanel* canvas_lookatP;                                               // 0x02E8 (size: 0x8)
    class UCanvasPanel* canvas_radial;                                                // 0x02F0 (size: 0x8)
    class UCanvasPanel* canvas_radialtexts;                                           // 0x02F8 (size: 0x8)
    class UCanvasPanel* canvas_rotateRadial;                                          // 0x0300 (size: 0x8)
    class UCanvasPanel* canvas_scubaAir;                                              // 0x0308 (size: 0x8)
    class UImage* cur;                                                                // 0x0310 (size: 0x8)
    class UImage* cur_2;                                                              // 0x0318 (size: 0x8)
    class UImage* cur_3;                                                              // 0x0320 (size: 0x8)
    class UImage* cur_6;                                                              // 0x0328 (size: 0x8)
    class UImage* cur_8;                                                              // 0x0330 (size: 0x8)
    class UImage* cur_9;                                                              // 0x0338 (size: 0x8)
    class UImage* cur_1_c;                                                            // 0x0340 (size: 0x8)
    class UImage* cur_4_c;                                                            // 0x0348 (size: 0x8)
    class UImage* cur_7_c;                                                            // 0x0350 (size: 0x8)
    class UBackgroundBlur* dreamBlur;                                                 // 0x0358 (size: 0x8)
    class UBackgroundBlur* glassesBlur;                                               // 0x0360 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0368 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0370 (size: 0x8)
    class UImage* Image_42;                                                           // 0x0378 (size: 0x8)
    class UImage* Image_44;                                                           // 0x0380 (size: 0x8)
    class UImage* Image_100;                                                          // 0x0388 (size: 0x8)
    class UImage* Image_186;                                                          // 0x0390 (size: 0x8)
    class UImage* Image_256;                                                          // 0x0398 (size: 0x8)
    class UImage* image_holdBar;                                                      // 0x03A0 (size: 0x8)
    class UImage* image_stuck;                                                        // 0x03A8 (size: 0x8)
    class UImage* img_compass;                                                        // 0x03B0 (size: 0x8)
    class UImage* img_flashlightIcon;                                                 // 0x03B8 (size: 0x8)
    class UImage* img_hovertext;                                                      // 0x03C0 (size: 0x8)
    class UImage* img_radial;                                                         // 0x03C8 (size: 0x8)
    class UImage* img_slot_0;                                                         // 0x03D0 (size: 0x8)
    class UImage* img_slot_1;                                                         // 0x03D8 (size: 0x8)
    class UImage* img_slot_2;                                                         // 0x03E0 (size: 0x8)
    class UImage* img_slot_3;                                                         // 0x03E8 (size: 0x8)
    class UImage* img_slot_4;                                                         // 0x03F0 (size: 0x8)
    class UImage* img_slot_5;                                                         // 0x03F8 (size: 0x8)
    class UImage* img_slot_6;                                                         // 0x0400 (size: 0x8)
    class UImage* img_slot_7;                                                         // 0x0408 (size: 0x8)
    class UImage* img_slot_8;                                                         // 0x0410 (size: 0x8)
    class UImage* img_slot_9;                                                         // 0x0418 (size: 0x8)
    class UCanvasPanel* pivot_objectDrag;                                             // 0x0420 (size: 0x8)
    class URetainerBox* RetainerBox_66;                                               // 0x0428 (size: 0x8)
    class UWidgetSwitcher* switcher_crosshair;                                        // 0x0430 (size: 0x8)
    class UTextBlock* text_ammo;                                                      // 0x0438 (size: 0x8)
    class UTextBlock* text_ammoSec;                                                   // 0x0440 (size: 0x8)
    class UTextBlock* text_battery;                                                   // 0x0448 (size: 0x8)
    class UTextBlock* text_clockTime;                                                 // 0x0450 (size: 0x8)
    class UTextBlock* text_clockTime_colon;                                           // 0x0458 (size: 0x8)
    class UTextBlock* text_heal;                                                      // 0x0460 (size: 0x8)
    class UTextBlock* text_hotbarItemName;                                            // 0x0468 (size: 0x8)
    class UTextBlock* text_hoverItemHelp;                                             // 0x0470 (size: 0x8)
    class UTextBlock* text_hoverItemName;                                             // 0x0478 (size: 0x8)
    class UTextBlock* text_hovertext_bottom;                                          // 0x0480 (size: 0x8)
    class UTextBlock* text_hunger;                                                    // 0x0488 (size: 0x8)
    class UTextBlock* text_points;                                                    // 0x0490 (size: 0x8)
    class UTextBlock* text_scubaAir;                                                  // 0x0498 (size: 0x8)
    class UTextBlock* text_sleep;                                                     // 0x04A0 (size: 0x8)
    class UTextBlock* TextBlock_9;                                                    // 0x04A8 (size: 0x8)
    class UTextBlock* TextBlock_61;                                                   // 0x04B0 (size: 0x8)
    class UTextBlock* TextBlock_45_w;                                                 // 0x04B8 (size: 0x8)
    class UTextBlock* txt_amSlot_0;                                                   // 0x04C0 (size: 0x8)
    class UTextBlock* txt_amSlot_1;                                                   // 0x04C8 (size: 0x8)
    class UTextBlock* txt_amSlot_2;                                                   // 0x04D0 (size: 0x8)
    class UTextBlock* txt_amSlot_3;                                                   // 0x04D8 (size: 0x8)
    class UTextBlock* txt_amSlot_4;                                                   // 0x04E0 (size: 0x8)
    class UTextBlock* txt_amSlot_5;                                                   // 0x04E8 (size: 0x8)
    class UTextBlock* txt_amSlot_6;                                                   // 0x04F0 (size: 0x8)
    class UTextBlock* txt_amSlot_7;                                                   // 0x04F8 (size: 0x8)
    class UTextBlock* txt_amSlot_8;                                                   // 0x0500 (size: 0x8)
    class UTextBlock* txt_amSlot_9;                                                   // 0x0508 (size: 0x8)
    class UTextBlock* txt_fps;                                                        // 0x0510 (size: 0x8)
    class Uui_carmap_C* umg_carmap;                                                   // 0x0518 (size: 0x8)
    class Uui_cheatMenu_C* umg_cheatMenu;                                             // 0x0520 (size: 0x8)
    class Uui_damageIndicator_C* umg_damageIndicator;                                 // 0x0528 (size: 0x8)
    class U00000000ui_C* umg_inventory;                                               // 0x0530 (size: 0x8)
    class Uui_quicksave_C* umg_quicksave;                                             // 0x0538 (size: 0x8)
    class Uui_signalName_C* umg_signalName;                                           // 0x0540 (size: 0x8)
    class Uui_subtitles_C* umg_subtitles;                                             // 0x0548 (size: 0x8)
    class UVerticalBox* vbox_actionList;                                              // 0x0550 (size: 0x8)
    class UVerticalBox* VerticalBox_achievements;                                     // 0x0558 (size: 0x8)
    FVector2D hovertextSize;                                                          // 0x0560 (size: 0x8)
    FVector hovertextLoc;                                                             // 0x0568 (size: 0xC)
    bool isHovertextActive;                                                           // 0x0574 (size: 0x1)
    bool changeHovertext;                                                             // 0x0575 (size: 0x1)
    class UPrimitiveComponent* hovertextComp;                                         // 0x0578 (size: 0x8)
    bool hovTxt_actorCenter;                                                          // 0x0580 (size: 0x1)
    float fpss;                                                                       // 0x0584 (size: 0x4)
    bool mirror;                                                                      // 0x0588 (size: 0x1)
    FVector2D Viewport;                                                               // 0x058C (size: 0x8)
    TArray<class Uui_objectActionButton_C*> actionSlots;                              // 0x0598 (size: 0x10)
    TArray<TEnumAsByte<enum_interactionActions::Type>> actions;                       // 0x05A8 (size: 0x10)
    bool Hidden;                                                                      // 0x05B8 (size: 0x1)
    bool disableBoundingBox;                                                          // 0x05B9 (size: 0x1)
    TArray<class UImage*> slotInv;                                                    // 0x05C0 (size: 0x10)
    int32 maxAvailableItem;                                                           // 0x05D0 (size: 0x4)
    int32 selec;                                                                      // 0x05D4 (size: 0x4)
    TArray<FString> Names;                                                            // 0x05D8 (size: 0x10)
    bool isNames;                                                                     // 0x05E8 (size: 0x1)
    bool hideInterface;                                                               // 0x05E9 (size: 0x1)
    class UMaterialInstanceDynamic* dynmat_radial;                                    // 0x05F0 (size: 0x8)
    int32 maxIndex;                                                                   // 0x05F8 (size: 0x4)
    FVector2D radAngle;                                                               // 0x05FC (size: 0x8)
    TArray<class Uui_radialText_C*> radialTexts;                                      // 0x0608 (size: 0x10)
    TArray<class UTextBlock*> slotTexts;                                              // 0x0618 (size: 0x10)
    TArray<int32> ind;                                                                // 0x0628 (size: 0x10)
    bool stacking;                                                                    // 0x0638 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x0640 (size: 0x8)
    FVector compassLocation;                                                          // 0x0648 (size: 0xC)
    bool P;                                                                           // 0x0654 (size: 0x1)
    bool hideHotbar;                                                                  // 0x0655 (size: 0x1)
    bool selectingAction;                                                             // 0x0656 (size: 0x1)
    class UMaterialInstanceDynamic* dynmat_holdBar;                                   // 0x0658 (size: 0x8)
    bool isValidComponent;                                                            // 0x0660 (size: 0x1)
    float grabAlpha;                                                                  // 0x0664 (size: 0x4)
    bool swapHotbarCompass;                                                           // 0x0668 (size: 0x1)
    bool hideInteractionHint;                                                         // 0x0669 (size: 0x1)
    bool showBoundingBox;                                                             // 0x066A (size: 0x1)
    bool showActionList;                                                              // 0x066B (size: 0x1)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void setLeftSideText(FText InText);
    bool isActionsValid();
    bool isActionsOne();
    void setSwapHotbarCompass();
    void setHoldbar();
    void removeEquipmentByName(FName Name, bool Drop);
    void setFungunValues(bool Enabled, int32 ammo, int32 maxAmmo, int32 sec);
    void NewFunction_0();
    FString processInt(TArray<uint8>& dasasdasd);
    FLinearColor C(int32 Index);
    void updRadialText();
    void angleWheel(FVector2D Mouse);
    void cusSelectHotbarSlot(int32 ind);
    void updateSlotInv();
    void updHovertext(FText InText);
    void clearActions();
    void buildActions(TArray<TEnumAsByte<enum_interactionActions::Type>>& actions_enums, TArray<FString>& actions_names, TArray<FText>& actions_overlays, bool isPhys, class AActor* Object, class UPrimitiveComponent* Component);
    void updSelect();
    void bbox(class UObject* Object, FVector& ReturnValue_Origin, FVector& ReturnValue_BoxExtent);
    void projectClamped(FVector WorldLocation, FVector2D& vec);
    void calcSize(FVector2D& Size, FVector2D& Min, FVector2D& Max, FVector2D& Origin);
    float compassAngle();
    void addHint(FText InText);
    void openHovertext(class UPrimitiveComponent* hovertextLoc, bool settActive, FText InText, bool isActor, bool hide, FText Name, class AmainPlayer_C* Player, bool cursorBox);
    void intComs_signalDeleted();
    void selectedHotbar();
    void Construct();
    void intComs_signalSaved();
    void timeDsplay();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void intComs_triggerSnow(bool isSnow);
    void intComs_gamemodePostKeys();
    void heavyObjPull();
    void heavyObjDrop();
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_applyColor(FLinearColor Color);
    void intComs_propRenderer_finishProps();
    void intComs_gamemodeMakeKeys();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodePreLoad();
    void intComs_unfocused();
    void intComs_unfoc();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_gamemodeBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_ui_UI(int32 EntryPoint);
}; // Size: 0x66C

#endif
