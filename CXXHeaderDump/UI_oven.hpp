#ifndef UE4SS_SDK_UI_oven_HPP
#define UE4SS_SDK_UI_oven_HPP

class UUI_oven_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Background;                                                         // 0x0268 (size: 0x8)
    class UButton* button_lid;                                                        // 0x0270 (size: 0x8)
    class UButton* button_screw_BL;                                                   // 0x0278 (size: 0x8)
    class UButton* button_screw_BR;                                                   // 0x0280 (size: 0x8)
    class UButton* button_screw_TL;                                                   // 0x0288 (size: 0x8)
    class UButton* button_screw_TR;                                                   // 0x0290 (size: 0x8)
    class UCanvasPanel* canvas_background;                                            // 0x0298 (size: 0x8)
    class UCanvasPanel* canvas_foreground;                                            // 0x02A0 (size: 0x8)
    class UCanvasPanel* canvas_lid;                                                   // 0x02A8 (size: 0x8)
    class UCanvasPanel* canvas_pins;                                                  // 0x02B0 (size: 0x8)
    class UCanvasPanel* canvas_pipes;                                                 // 0x02B8 (size: 0x8)
    class UCanvasPanel* canvas_wires;                                                 // 0x02C0 (size: 0x8)
    class UImage* foreground;                                                         // 0x02C8 (size: 0x8)
    class UImage* Image;                                                              // 0x02D0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02E0 (size: 0x8)
    class UImage* Image_105;                                                          // 0x02E8 (size: 0x8)
    class UImage* Image_161;                                                          // 0x02F0 (size: 0x8)
    class UImage* img_pin1;                                                           // 0x02F8 (size: 0x8)
    class UImage* img_pin2;                                                           // 0x0300 (size: 0x8)
    class UImage* img_pin3;                                                           // 0x0308 (size: 0x8)
    class UImage* img_pin4;                                                           // 0x0310 (size: 0x8)
    class UImage* img_pin5;                                                           // 0x0318 (size: 0x8)
    class UButton* pinI_1;                                                            // 0x0320 (size: 0x8)
    class UButton* pinI_2;                                                            // 0x0328 (size: 0x8)
    class UButton* pinI_3;                                                            // 0x0330 (size: 0x8)
    class UButton* pinI_4;                                                            // 0x0338 (size: 0x8)
    class UButton* pinI_5;                                                            // 0x0340 (size: 0x8)
    class UButton* pinO_1;                                                            // 0x0348 (size: 0x8)
    class UButton* pinO_2;                                                            // 0x0350 (size: 0x8)
    class UButton* pinO_3;                                                            // 0x0358 (size: 0x8)
    class UButton* pinO_4;                                                            // 0x0360 (size: 0x8)
    class UButton* pinO_5;                                                            // 0x0368 (size: 0x8)
    class UImage* pipes;                                                              // 0x0370 (size: 0x8)
    FVector2D res;                                                                    // 0x0378 (size: 0x8)
    FVector2D moveNoise;                                                              // 0x0380 (size: 0x8)
    float A;                                                                          // 0x0388 (size: 0x4)
    bool TL_unscrewed;                                                                // 0x038C (size: 0x1)
    bool TR_unscrewed;                                                                // 0x038D (size: 0x1)
    bool BL_unscrewed;                                                                // 0x038E (size: 0x1)
    bool BR_unscrewed;                                                                // 0x038F (size: 0x1)
    bool lid_taken;                                                                   // 0x0390 (size: 0x1)
    class UButton* activePin;                                                         // 0x0398 (size: 0x8)
    class Uui_ovenWire_C* currentWire;                                                // 0x03A0 (size: 0x8)
    class UCanvasPanelSlot* currentWireSlot;                                          // 0x03A8 (size: 0x8)
    FVector2D currentWirePosition;                                                    // 0x03B0 (size: 0x8)
    FVector2D mousePos;                                                               // 0x03B8 (size: 0x8)
    TArray<class UButton*> busyPins;                                                  // 0x03C0 (size: 0x10)
    TArray<FIntPoint> currentPairs;                                                   // 0x03D0 (size: 0x10)
    TArray<FIntPoint> requiredPairs;                                                  // 0x03E0 (size: 0x10)
    int32 activeIndex;                                                                // 0x03F0 (size: 0x4)
    TArray<class Uui_ovenWire_C*> wires;                                              // 0x03F8 (size: 0x10)
    TArray<class UButton*> busyOutPins;                                               // 0x0408 (size: 0x10)
    int32 tool;                                                                       // 0x0418 (size: 0x4)
    class UButton* unscrewButton;                                                     // 0x0420 (size: 0x8)
    float unscrewAlpha;                                                               // 0x0428 (size: 0x4)
    TEnumAsByte<enum_ovenTool::Type> playerTool;                                      // 0x042C (size: 0x1)
    bool fixedPin_1;                                                                  // 0x042D (size: 0x1)
    bool fixedPin_2;                                                                  // 0x042E (size: 0x1)
    bool fixedPin_3;                                                                  // 0x042F (size: 0x1)
    bool fixedPin_4;                                                                  // 0x0430 (size: 0x1)
    bool fixedPin_5;                                                                  // 0x0431 (size: 0x1)
    class Akitchen_C* kitchen;                                                        // 0x0438 (size: 0x8)
    FVector2D screenCenter;                                                           // 0x0440 (size: 0x8)

    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void checkPins();
    void resetWirePin(bool removeWire);
    void doWirePin(int32 ind, bool pick);
    void fixPin(int32 Pin);
    void disconnectedWire();
    void wrongTool();
    void unscrew(class UButton* Button, bool& return);
    bool checkValidPair(int32 A, int32 B);
    void quit();
    void preparePairs();
    void setWireTransform(class Uui_ovenWire_C* wire, FVector2D A, FVector2D B);
    void makeWire(class UButton* Button, bool pick, int32 Index);
    void upd();
    void Enter(TEnumAsByte<enum_ovenTool::Type> tool);
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void intComs_triggerSnow(bool isSnow);
    void intComs_gamemodePostKeys();
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_applyColor(FLinearColor Color);
    void intComs_propRenderer_finishProps();
    void intComs_gamemodeMakeKeys();
    void intComs_anyKey(FKey Key, bool Pressed);
    void BndEvt__UI_oven_button_screw_BL_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_oven_button_screw_BR_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_oven_button_screw_TL_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_oven_button_screw_TR_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_oven_button_lid_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_oven_pinI_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_oven_pinI_2_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_oven_pinI_3_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_oven_pinI_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_oven_pinI_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_oven_pinO_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_oven_pinO_2_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_oven_pinO_3_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_oven_pinO_4_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_oven_pinO_5_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__UI_oven_button_back_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void delayFinish();
    void delayedQuit();
    void intComs_gamemodePreLoad();
    void intComs_unfocused();
    void intComs_unfoc();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_gamemodeBeginPlay();
    void intComs_signalSaved();
    void intComs_signalDeleted();
    void ExecuteUbergraph_UI_oven(int32 EntryPoint);
}; // Size: 0x448

#endif
