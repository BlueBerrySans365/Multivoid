#ifndef UE4SS_SDK_ui_paperDraw_HPP
#define UE4SS_SDK_ui_paperDraw_HPP

class Uui_paperDraw_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* buttonCrumple;                                                     // 0x0268 (size: 0x8)
    class UButton* buttonExport;                                                      // 0x0270 (size: 0x8)
    class UCanvasPanel* canvasPaper;                                                  // 0x0278 (size: 0x8)
    class UComboBoxString* cbs_hue;                                                   // 0x0280 (size: 0x8)
    class UComboBoxString* cbs_sat;                                                   // 0x0288 (size: 0x8)
    class UComboBoxString* cbs_vol;                                                   // 0x0290 (size: 0x8)
    class UImage* Image;                                                              // 0x0298 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_101;                                                          // 0x02B0 (size: 0x8)
    class UImage* Image_179;                                                          // 0x02B8 (size: 0x8)
    class UImage* img_col;                                                            // 0x02C0 (size: 0x8)
    class UImage* img_sat;                                                            // 0x02C8 (size: 0x8)
    class UImage* img_val;                                                            // 0x02D0 (size: 0x8)
    class UImage* paper;                                                              // 0x02D8 (size: 0x8)
    class UCanvasPanel* Pivot;                                                        // 0x02E0 (size: 0x8)
    class USlider* slider_H;                                                          // 0x02E8 (size: 0x8)
    class USlider* slider_jitter;                                                     // 0x02F0 (size: 0x8)
    class USlider* slider_S;                                                          // 0x02F8 (size: 0x8)
    class USlider* slider_size;                                                       // 0x0300 (size: 0x8)
    class USlider* slider_stabil;                                                     // 0x0308 (size: 0x8)
    class USlider* slider_V;                                                          // 0x0310 (size: 0x8)
    class UTextBlock* tex_H;                                                          // 0x0318 (size: 0x8)
    class UTextBlock* tex_jitter;                                                     // 0x0320 (size: 0x8)
    class UTextBlock* tex_perc;                                                       // 0x0328 (size: 0x8)
    class UTextBlock* tex_S;                                                          // 0x0330 (size: 0x8)
    class UTextBlock* tex_size;                                                       // 0x0338 (size: 0x8)
    class UTextBlock* tex_stabil;                                                     // 0x0340 (size: 0x8)
    class UTextBlock* tex_V;                                                          // 0x0348 (size: 0x8)
    class UVerticalBox* vb_settings;                                                  // 0x0350 (size: 0x8)
    FVector2D mouse pos;                                                              // 0x0358 (size: 0x8)
    FVector2D lastMousePos;                                                           // 0x0360 (size: 0x8)
    FVector2D localPos;                                                               // 0x0368 (size: 0x8)
    bool isDraw;                                                                      // 0x0370 (size: 0x1)
    class Aprop_paper_drawable_C* paperDraw;                                          // 0x0378 (size: 0x8)
    class UCanvas* Canvas;                                                            // 0x0380 (size: 0x8)
    FDrawToRenderTargetContext canvasContext;                                         // 0x0388 (size: 0x10)
    FVector2D lastloc;                                                                // 0x0398 (size: 0x8)
    FVector2D drawPos;                                                                // 0x03A0 (size: 0x8)
    FVector2D canvasSize;                                                             // 0x03A8 (size: 0x8)
    FVector2D viewportSize;                                                           // 0x03B0 (size: 0x8)
    bool erase;                                                                       // 0x03B8 (size: 0x1)
    FLinearColor Color;                                                               // 0x03BC (size: 0x10)
    float c_h;                                                                        // 0x03CC (size: 0x4)
    float c_s;                                                                        // 0x03D0 (size: 0x4)
    float c_v;                                                                        // 0x03D4 (size: 0x4)
    float Time;                                                                       // 0x03D8 (size: 0x4)
    float time_h;                                                                     // 0x03DC (size: 0x4)
    float time_s;                                                                     // 0x03E0 (size: 0x4)
    float time_v;                                                                     // 0x03E4 (size: 0x4)
    int32 modeHue;                                                                    // 0x03E8 (size: 0x4)
    int32 modeSat;                                                                    // 0x03EC (size: 0x4)
    int32 modeVol;                                                                    // 0x03F0 (size: 0x4)
    bool straightDir;                                                                 // 0x03F4 (size: 0x1)
    bool straightDraw;                                                                // 0x03F5 (size: 0x1)
    bool straightDirSet;                                                              // 0x03F6 (size: 0x1)
    bool circularDraw;                                                                // 0x03F7 (size: 0x1)
    FVector2D circularPivot;                                                          // 0x03F8 (size: 0x8)
    float circularRadius;                                                             // 0x0400 (size: 0x4)
    bool sunrayDraw;                                                                  // 0x0404 (size: 0x1)
    bool delayDraw;                                                                   // 0x0405 (size: 0x1)
    FKey mouseKey;                                                                    // 0x0408 (size: 0x18)
    float jitter;                                                                     // 0x0420 (size: 0x4)
    float Size;                                                                       // 0x0424 (size: 0x4)
    float stabil;                                                                     // 0x0428 (size: 0x4)
    FVector2D monitorSize;                                                            // 0x042C (size: 0x8)
    float Angle;                                                                      // 0x0434 (size: 0x4)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    bool isInBounds();
    void reduce();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void setColor(bool set, FLinearColor Color, float Size);
    void quit();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Init(class Aprop_paper_drawable_C* paperDraw, float Angle, class Aprop_pencil_C* pencil);
    void updateDraw();
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BndEvt__umg_paperDraw_slider_H_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__umg_paperDraw_slider_S_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__umg_paperDraw_slider_V_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void Construct();
    void BndEvt__umg_paperDraw_cbs_hue_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__umg_paperDraw_cbs_sat_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__umg_paperDraw_cbs_vol_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__umg_paperDraw_buttonCrumple_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_paperDraw_slider_jitter_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__umg_paperDraw_slider_size_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__umg_paperDraw_slider_stabil_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__umg_paperDraw_buttonExport_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void AAA(bool bSuccess);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void intComs_triggerSnow(bool isSnow);
    void intComs_gamemodePostKeys();
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
    void intComs_signalSaved();
    void intComs_signalDeleted();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_ui_paperDraw(int32 EntryPoint);
}; // Size: 0x438

#endif
