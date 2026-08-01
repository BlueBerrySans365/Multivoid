#ifndef UE4SS_SDK_ui_consolesAtlas_HPP
#define UE4SS_SDK_ui_consolesAtlas_HPP

class Uui_consolesAtlas_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* canv_nosign;                                                  // 0x0268 (size: 0x8)
    class UCanvasPanel* canvas_cover_comp;                                            // 0x0270 (size: 0x8)
    class UCanvasPanel* canvas_cover_console;                                         // 0x0278 (size: 0x8)
    class UCanvasPanel* canvas_cover_coords;                                          // 0x0280 (size: 0x8)
    class UCanvasPanel* canvas_cover_download;                                        // 0x0288 (size: 0x8)
    class UCanvasPanel* canvas_cover_play;                                            // 0x0290 (size: 0x8)
    class UCanvasPanel* canvas_cover_radar;                                           // 0x0298 (size: 0x8)
    class UCanvasPanel* canvas_signalList;                                            // 0x02A0 (size: 0x8)
    class UImage* Image_6;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_44;                                                           // 0x02B0 (size: 0x8)
    class UImage* Image_125;                                                          // 0x02B8 (size: 0x8)
    class UImage* img_bar_freq;                                                       // 0x02C0 (size: 0x8)
    class UImage* img_bar_pol;                                                        // 0x02C8 (size: 0x8)
    class UImage* img_border;                                                         // 0x02D0 (size: 0x8)
    class UImage* img_border_0;                                                       // 0x02D8 (size: 0x8)
    class UImage* img_border_1;                                                       // 0x02E0 (size: 0x8)
    class UImage* img_border_2;                                                       // 0x02E8 (size: 0x8)
    class UImage* img_border_3;                                                       // 0x02F0 (size: 0x8)
    class UImage* img_border_4;                                                       // 0x02F8 (size: 0x8)
    class UImage* img_border_5;                                                       // 0x0300 (size: 0x8)
    class UImage* img_border_6;                                                       // 0x0308 (size: 0x8)
    class UImage* img_border_7;                                                       // 0x0310 (size: 0x8)
    class UImage* img_border_8;                                                       // 0x0318 (size: 0x8)
    class UImage* img_border_9;                                                       // 0x0320 (size: 0x8)
    class UImage* img_border_10;                                                      // 0x0328 (size: 0x8)
    class UImage* img_border_11;                                                      // 0x0330 (size: 0x8)
    class UImage* img_border_cons_1;                                                  // 0x0338 (size: 0x8)
    class UImage* img_border_cons_2;                                                  // 0x0340 (size: 0x8)
    class UImage* img_border_cons_3;                                                  // 0x0348 (size: 0x8)
    class UImage* img_border_cons_4;                                                  // 0x0350 (size: 0x8)
    class UImage* img_object;                                                         // 0x0358 (size: 0x8)
    class UImage* img_radarBase_0;                                                    // 0x0360 (size: 0x8)
    class UImage* img_radarBase_1;                                                    // 0x0368 (size: 0x8)
    class UImage* img_radarBase_2;                                                    // 0x0370 (size: 0x8)
    class UImage* img_radarBase_3;                                                    // 0x0378 (size: 0x8)
    class UImage* img_signal;                                                         // 0x0380 (size: 0x8)
    class UImage* img_sigsBorder_0;                                                   // 0x0388 (size: 0x8)
    class UImage* img_sigsBorder_1;                                                   // 0x0390 (size: 0x8)
    class UImage* img_sigsBorder_2;                                                   // 0x0398 (size: 0x8)
    class UImage* img_sigsBorder_3;                                                   // 0x03A0 (size: 0x8)
    class UImage* img_visualizer_fr;                                                  // 0x03A8 (size: 0x8)
    class UImage* img_visualizer_spec;                                                // 0x03B0 (size: 0x8)
    class URetainerBox* RetainerBox_68;                                               // 0x03B8 (size: 0x8)
    class URichTextBlock* RichTextBlock_coordLog;                                     // 0x03C0 (size: 0x8)
    class URichTextBlock* rtxt_log_1;                                                 // 0x03C8 (size: 0x8)
    class URichTextBlock* rtxt_log_2;                                                 // 0x03D0 (size: 0x8)
    class URichTextBlock* rtxt_log_3;                                                 // 0x03D8 (size: 0x8)
    class URichTextBlock* rtxt_log_4;                                                 // 0x03E0 (size: 0x8)
    class UScrollBox* scbox_coordLog2;                                                // 0x03E8 (size: 0x8)
    class USizeBox* sizebox_signalText;                                               // 0x03F0 (size: 0x8)
    class UTextBlock* text_base_cons;                                                 // 0x03F8 (size: 0x8)
    class UTextBlock* text_base_data;                                                 // 0x0400 (size: 0x8)
    class UTextBlock* text_base_downl;                                                // 0x0408 (size: 0x8)
    class UTextBlock* text_base_eff;                                                  // 0x0410 (size: 0x8)
    class UTextBlock* text_base_efficiency;                                           // 0x0418 (size: 0x8)
    class UTextBlock* text_base_energy;                                               // 0x0420 (size: 0x8)
    class UTextBlock* text_base_fFr;                                                  // 0x0428 (size: 0x8)
    class UTextBlock* text_base_filesize;                                             // 0x0430 (size: 0x8)
    class UTextBlock* text_base_fPol;                                                 // 0x0438 (size: 0x8)
    class UTextBlock* text_base_object;                                               // 0x0440 (size: 0x8)
    class UTextBlock* text_base_polDir;                                               // 0x0448 (size: 0x8)
    class UTextBlock* text_base_process;                                              // 0x0450 (size: 0x8)
    class UTextBlock* text_base_progress;                                             // 0x0458 (size: 0x8)
    class UTextBlock* text_base_sigF;                                                 // 0x0460 (size: 0x8)
    class UTextBlock* text_base_sigQ;                                                 // 0x0468 (size: 0x8)
    class UTextBlock* text_base_targ;                                                 // 0x0470 (size: 0x8)
    class UTextBlock* text_comp_cons;                                                 // 0x0478 (size: 0x8)
    class UTextBlock* text_comp_data;                                                 // 0x0480 (size: 0x8)
    class UTextBlock* text_comp_eff;                                                  // 0x0488 (size: 0x8)
    class UTextBlock* text_comp_maxlvl;                                               // 0x0490 (size: 0x8)
    class UTextBlock* text_comp_process;                                              // 0x0498 (size: 0x8)
    class UTextBlock* text_comp_progress;                                             // 0x04A0 (size: 0x8)
    class UTextBlock* text_comp_size;                                                 // 0x04A8 (size: 0x8)
    class UTextBlock* text_compConsole;                                               // 0x04B0 (size: 0x8)
    class UTextBlock* text_consum;                                                    // 0x04B8 (size: 0x8)
    class UTextBlock* text_DEffic;                                                    // 0x04C0 (size: 0x8)
    class UTextBlock* text_det;                                                       // 0x04C8 (size: 0x8)
    class UTextBlock* text_detStat;                                                   // 0x04D0 (size: 0x8)
    class UTextBlock* text_FrequencyData;                                             // 0x04D8 (size: 0x8)
    class UTextBlock* text_object;                                                    // 0x04E0 (size: 0x8)
    class UTextBlock* text_playSignalText;                                            // 0x04E8 (size: 0x8)
    class UTextBlock* text_polarityData;                                              // 0x04F0 (size: 0x8)
    class UTextBlock* text_SDir;                                                      // 0x04F8 (size: 0x8)
    class UTextBlock* text_SDownloaded;                                               // 0x0500 (size: 0x8)
    class UTextBlock* text_SFrequency;                                                // 0x0508 (size: 0x8)
    class UTextBlock* text_sQuality;                                                  // 0x0510 (size: 0x8)
    class UTextBlock* txt1_alti_y;                                                    // 0x0518 (size: 0x8)
    class UTextBlock* txt1_azim_x;                                                    // 0x0520 (size: 0x8)
    class UTextBlock* txt1_cooldown;                                                  // 0x0528 (size: 0x8)
    class UTextBlock* txt_filterFR_offset;                                            // 0x0530 (size: 0x8)
    class UTextBlock* txt_filterFR_speed;                                             // 0x0538 (size: 0x8)
    class UTextBlock* txt_filterPO_offset;                                            // 0x0540 (size: 0x8)
    class UTextBlock* txt_filterPO_speed;                                             // 0x0548 (size: 0x8)
    class UTextBlock* txt_sarv;                                                       // 0x0550 (size: 0x8)
    class UTextBlock* txt_signalpage;                                                 // 0x0558 (size: 0x8)
    class UTextBlock* txt_sigsBorder_down;                                            // 0x0560 (size: 0x8)
    class UTextBlock* txt_sigsBorder_side;                                            // 0x0568 (size: 0x8)
    class UTextBlock* txt_sigsBorder_up;                                              // 0x0570 (size: 0x8)
    class UTextBlock* txt_vol;                                                        // 0x0578 (size: 0x8)
    class Uui_atlasDishesStatus_C* ui_atlasDishesStatus;                              // 0x0580 (size: 0x8)
    class Uui_coordinates_C* ui_coordinates;                                          // 0x0588 (size: 0x8)
    class Uui_deathscreen_C* ui_deathscreen;                                          // 0x0590 (size: 0x8)
    class Uui_deathscreen_C* ui_deathscreen_1;                                        // 0x0598 (size: 0x8)
    class Uui_deathscreen_C* ui_deathscreen_2;                                        // 0x05A0 (size: 0x8)
    class Uui_deathscreen_C* ui_deathscreen_3;                                        // 0x05A8 (size: 0x8)
    class Uui_deathscreen_C* ui_deathscreen_5;                                        // 0x05B0 (size: 0x8)
    class Uui_deathscreen_C* ui_deathscreen_6;                                        // 0x05B8 (size: 0x8)
    class Uui_deathscreen_C* ui_deathscreen_7;                                        // 0x05C0 (size: 0x8)
    class Uui_deathscreen_C* ui_deathscreen_9;                                        // 0x05C8 (size: 0x8)
    class Uui_deathscreen_C* ui_deathscreen_10;                                       // 0x05D0 (size: 0x8)
    class Uui_deathscreen_C* ui_deathscreen_11;                                       // 0x05D8 (size: 0x8)
    class Uui_deathscreen_C* ui_deathscreen_12;                                       // 0x05E0 (size: 0x8)
    class Uui_deathscreen_C* ui_deathscreen_13;                                       // 0x05E8 (size: 0x8)
    class Uui_deathscreen_C* ui_deathscreen_14;                                       // 0x05F0 (size: 0x8)
    class Uui_deathscreen_C* ui_deathscreen_15;                                       // 0x05F8 (size: 0x8)
    class Uui_console_C* umg_console;                                                 // 0x0600 (size: 0x8)
    class Uui_radar_C* umg_radar;                                                     // 0x0608 (size: 0x8)
    class UVerticalBox* vbox_bot;                                                     // 0x0610 (size: 0x8)
    class UVerticalBox* vbox_signalList;                                              // 0x0618 (size: 0x8)
    class UVerticalBox* vbox_top;                                                     // 0x0620 (size: 0x8)
    class AanalogDScreenTest_C* panel;                                                // 0x0628 (size: 0x8)
    TArray<class Uuicomp_signalSlot_C*> Slots;                                        // 0x0630 (size: 0x10)
    class UMaterialInstanceDynamic* dynmat_ping;                                      // 0x0640 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_barFreq;                                   // 0x0648 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_barPol;                                    // 0x0650 (size: 0x8)
    TArray<class Uui_deathscreen_C*> virusElements;                                   // 0x0658 (size: 0x10)
    TArray<class Uui_deathscreen_C*> virusBuffer;                                     // 0x0668 (size: 0x10)
    TArray<class UPrimitiveComponent*> virusSoundTo;                                  // 0x0678 (size: 0x10)
    TArray<class UAudioComponent*> Sounds;                                            // 0x0688 (size: 0x10)
    class UMaterialInstanceDynamic* dynmat_mosaic;                                    // 0x0698 (size: 0x8)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void setColors(Fstruct_settings1 Settings);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Create Signal List();
    void setSignalVolume(int32 A);
    void setSignalListPosition();
    void intComs_signalDeleted();
    void intComs_signalSaved();
    void intComs_gamemodeBeginPlay();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_unfoc();
    void intComs_gamemodePreLoad();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodeMakeKeys();
    void intComs_propRenderer_finishProps();
    void intComs_applyColor(FLinearColor Color);
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_gamemodePostKeys();
    void intComs_triggerSnow(bool isSnow);
    void Construct();
    void beginVirus();
    void stopVirus();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void intComs_unfocused();
    void ExecuteUbergraph_ui_consolesAtlas(int32 EntryPoint);
}; // Size: 0x6A0

#endif
