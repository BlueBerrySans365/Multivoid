#ifndef UE4SS_SDK_ui_laptop_HPP
#define UE4SS_SDK_ui_laptop_HPP

class Uui_laptop_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UProgressBar* bar;                                                          // 0x0268 (size: 0x8)
    class Uui_breakerComp_C* breakerComp_calc;                                        // 0x0270 (size: 0x8)
    class Uui_breakerComp_C* breakerComp_coord;                                       // 0x0278 (size: 0x8)
    class Uui_breakerComp_C* breakerComp_down;                                        // 0x0280 (size: 0x8)
    class Uui_breakerComp_C* breakerComp_play;                                        // 0x0288 (size: 0x8)
    class Uui_breakerComp_C* breakerComp_util;                                        // 0x0290 (size: 0x8)
    class UButton* Button_29;                                                         // 0x0298 (size: 0x8)
    class UButton* Button_59;                                                         // 0x02A0 (size: 0x8)
    class UButton* Button_112;                                                        // 0x02A8 (size: 0x8)
    class UButton* Button_130;                                                        // 0x02B0 (size: 0x8)
    class UButton* Button_206;                                                        // 0x02B8 (size: 0x8)
    class UButton* Button_220;                                                        // 0x02C0 (size: 0x8)
    class UButton* Button_236;                                                        // 0x02C8 (size: 0x8)
    class UButton* Button_305;                                                        // 0x02D0 (size: 0x8)
    class UButton* Button_487;                                                        // 0x02D8 (size: 0x8)
    class UButton* Button_camC;                                                       // 0x02E0 (size: 0x8)
    class UButton* Button_camFl;                                                      // 0x02E8 (size: 0x8)
    class UButton* Button_camIR;                                                      // 0x02F0 (size: 0x8)
    class UButton* Button_camUpd;                                                     // 0x02F8 (size: 0x8)
    class UButton* button_clearEmails;                                                // 0x0300 (size: 0x8)
    class UButton* button_closeUpgradeDesc;                                           // 0x0308 (size: 0x8)
    class UButton* button_copy;                                                       // 0x0310 (size: 0x8)
    class UButton* button_delete;                                                     // 0x0318 (size: 0x8)
    class UButton* button_floppyEject;                                                // 0x0320 (size: 0x8)
    class UButton* button_focusChar;                                                  // 0x0328 (size: 0x8)
    class UButton* button_focusChar_1;                                                // 0x0330 (size: 0x8)
    class UButton* Button_listen_off;                                                 // 0x0338 (size: 0x8)
    class UButton* Button_listen_on;                                                  // 0x0340 (size: 0x8)
    class UButton* button_mediaPhotos;                                                // 0x0348 (size: 0x8)
    class UButton* button_mediaVid;                                                   // 0x0350 (size: 0x8)
    class UButton* button_moveDown;                                                   // 0x0358 (size: 0x8)
    class UButton* button_moveUp;                                                     // 0x0360 (size: 0x8)
    class UButton* Button_order;                                                      // 0x0368 (size: 0x8)
    class UButton* button_play;                                                       // 0x0370 (size: 0x8)
    class UButton* button_shopCat_deco;                                               // 0x0378 (size: 0x8)
    class UButton* button_shopCat_ess;                                                // 0x0380 (size: 0x8)
    class UButton* button_shopCat_esse;                                               // 0x0388 (size: 0x8)
    class UButton* button_shopCat_favs;                                               // 0x0390 (size: 0x8)
    class UButton* button_shopCat_food;                                               // 0x0398 (size: 0x8)
    class UButton* button_shopCat_machines;                                           // 0x03A0 (size: 0x8)
    class UButton* button_shopCat_misc;                                               // 0x03A8 (size: 0x8)
    class UButton* button_shopCat_seasonal;                                           // 0x03B0 (size: 0x8)
    class UButton* button_shopCat_storage;                                            // 0x03B8 (size: 0x8)
    class UButton* button_shopCat_tools;                                              // 0x03C0 (size: 0x8)
    class UButton* button_shopCat_upgrades;                                           // 0x03C8 (size: 0x8)
    class UButton* button_shopClearSearch;                                            // 0x03D0 (size: 0x8)
    class UButton* button_stop;                                                       // 0x03D8 (size: 0x8)
    class UButton* button_storeDesc_addToCart;                                        // 0x03E0 (size: 0x8)
    class UButton* button_storeDesc_back;                                             // 0x03E8 (size: 0x8)
    class UButton* button_tab_adv;                                                    // 0x03F0 (size: 0x8)
    class UButton* button_tab_cams;                                                   // 0x03F8 (size: 0x8)
    class UButton* button_tab_comps;                                                  // 0x0400 (size: 0x8)
    class UButton* button_tab_email;                                                  // 0x0408 (size: 0x8)
    class UButton* button_tab_floppy;                                                 // 0x0410 (size: 0x8)
    class UButton* button_tab_pics;                                                   // 0x0418 (size: 0x8)
    class UButton* button_tab_signals;                                                // 0x0420 (size: 0x8)
    class UButton* button_tab_store;                                                  // 0x0428 (size: 0x8)
    class UButton* button_tab_upgrades;                                               // 0x0430 (size: 0x8)
    class UButton* button_vidPlayPause;                                               // 0x0438 (size: 0x8)
    class UButton* buttonEA_coordinates;                                              // 0x0440 (size: 0x8)
    class UButton* buttonEA_detector;                                                 // 0x0448 (size: 0x8)
    class UButton* buttonEA_misc;                                                     // 0x0450 (size: 0x8)
    class UButton* buttonEA_radar;                                                    // 0x0458 (size: 0x8)
    class UButton* buttonEA_signalProc;                                               // 0x0460 (size: 0x8)
    class UButton* buttonEA_template;                                                 // 0x0468 (size: 0x8)
    class UCanvasPanel* canv;                                                         // 0x0470 (size: 0x8)
    class UCanvasPanel* canv_1;                                                       // 0x0478 (size: 0x8)
    class UCanvasPanel* canv_2;                                                       // 0x0480 (size: 0x8)
    class UCanvasPanel* canv_3;                                                       // 0x0488 (size: 0x8)
    class UCanvasPanel* canv_4;                                                       // 0x0490 (size: 0x8)
    class UCanvasPanel* canv_5;                                                       // 0x0498 (size: 0x8)
    class UCanvasPanel* canv_6;                                                       // 0x04A0 (size: 0x8)
    class UCanvasPanel* canv_7;                                                       // 0x04A8 (size: 0x8)
    class UCanvasPanel* canv_8;                                                       // 0x04B0 (size: 0x8)
    class UCanvasPanel* canv_9;                                                       // 0x04B8 (size: 0x8)
    class UCanvasPanel* canv_10;                                                      // 0x04C0 (size: 0x8)
    class UCanvasPanel* canv_11;                                                      // 0x04C8 (size: 0x8)
    class UCanvasPanel* canv_12;                                                      // 0x04D0 (size: 0x8)
    class UCanvasPanel* canv_13;                                                      // 0x04D8 (size: 0x8)
    class UCanvasPanel* canv_14;                                                      // 0x04E0 (size: 0x8)
    class UCanvasPanel* canv_15;                                                      // 0x04E8 (size: 0x8)
    class UCanvasPanel* canv_16;                                                      // 0x04F0 (size: 0x8)
    class UCanvasPanel* canv_17;                                                      // 0x04F8 (size: 0x8)
    class UCanvasPanel* canv_18;                                                      // 0x0500 (size: 0x8)
    class UCanvasPanel* canv_19;                                                      // 0x0508 (size: 0x8)
    class UCanvasPanel* canv_20;                                                      // 0x0510 (size: 0x8)
    class UCanvasPanel* canv_activeOrders;                                            // 0x0518 (size: 0x8)
    class UCanvasPanel* canv_cart;                                                    // 0x0520 (size: 0x8)
    class UCanvasPanel* canv_storeItemDesc;                                           // 0x0528 (size: 0x8)
    class UCanvasPanel* canv_storeItemList;                                           // 0x0530 (size: 0x8)
    class UCanvasPanel* canvas_cams;                                                  // 0x0538 (size: 0x8)
    class UCanvasPanel* canvas_cursor;                                                // 0x0540 (size: 0x8)
    class UCanvasPanel* canvas_drone;                                                 // 0x0548 (size: 0x8)
    class UCanvasPanel* canvas_storedesc;                                             // 0x0550 (size: 0x8)
    class UCanvasPanel* canvas_subgame;                                               // 0x0558 (size: 0x8)
    class UCanvasPanel* canvas_upgradeDescription;                                    // 0x0560 (size: 0x8)
    class UCanvasPanel* canvas_windows;                                               // 0x0568 (size: 0x8)
    class UCanvasPanel* CanvasPanel_2;                                                // 0x0570 (size: 0x8)
    class UCanvasPanel* CanvasPanel_3;                                                // 0x0578 (size: 0x8)
    class UCanvasPanel* canvasPhotoPic;                                               // 0x0580 (size: 0x8)
    class UCanvasPanel* canvasPhotoPic_1;                                             // 0x0588 (size: 0x8)
    class UCheckBox* checkbox_globalSearch;                                           // 0x0590 (size: 0x8)
    class UExpandableArea* EA_coordinates;                                            // 0x0598 (size: 0x8)
    class UExpandableArea* EA_detector;                                               // 0x05A0 (size: 0x8)
    class UExpandableArea* EA_misc;                                                   // 0x05A8 (size: 0x8)
    class UExpandableArea* EA_processing;                                             // 0x05B0 (size: 0x8)
    class UExpandableArea* EA_radar;                                                  // 0x05B8 (size: 0x8)
    class UExpandableArea* EA_template;                                               // 0x05C0 (size: 0x8)
    class UEditableTextBox* EditableTextBox;                                          // 0x05C8 (size: 0x8)
    class UEditableTextBox* EditableTextBox_0;                                        // 0x05D0 (size: 0x8)
    class UEditableTextBox* EditableTextBox_search;                                   // 0x05D8 (size: 0x8)
    class UGridPanel* GridPanel_photos;                                               // 0x05E0 (size: 0x8)
    class UGridPanel* GridPanel_vids;                                                 // 0x05E8 (size: 0x8)
    class UHorizontalBox* hbox_subcat;                                                // 0x05F0 (size: 0x8)
    class UHorizontalBox* HorizontalBox;                                              // 0x05F8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_1;                                            // 0x0600 (size: 0x8)
    class UImage* Image_96;                                                           // 0x0608 (size: 0x8)
    class UImage* Image_101;                                                          // 0x0610 (size: 0x8)
    class UImage* Image_124;                                                          // 0x0618 (size: 0x8)
    class UImage* Image_161;                                                          // 0x0620 (size: 0x8)
    class UImage* Image_177;                                                          // 0x0628 (size: 0x8)
    class UImage* Image_213;                                                          // 0x0630 (size: 0x8)
    class UImage* Image_photoView;                                                    // 0x0638 (size: 0x8)
    class UImage* Image_videoView;                                                    // 0x0640 (size: 0x8)
    class UImage* Img_adv;                                                            // 0x0648 (size: 0x8)
    class UImage* img_bar;                                                            // 0x0650 (size: 0x8)
    class UImage* img_charScreen;                                                     // 0x0658 (size: 0x8)
    class UImage* img_charScreen_1;                                                   // 0x0660 (size: 0x8)
    class UImage* img_descImage;                                                      // 0x0668 (size: 0x8)
    class UImage* img_droneBar;                                                       // 0x0670 (size: 0x8)
    class UImage* img_image;                                                          // 0x0678 (size: 0x8)
    class UImage* img_objectImage;                                                    // 0x0680 (size: 0x8)
    class UImage* Img_pfp;                                                            // 0x0688 (size: 0x8)
    class UImage* img_signalImage;                                                    // 0x0690 (size: 0x8)
    class UImage* img_vidButton;                                                      // 0x0698 (size: 0x8)
    class Upcui_file_C* pcui_file;                                                    // 0x06A0 (size: 0x8)
    class UWidgetSwitcher* rootswitch;                                                // 0x06A8 (size: 0x8)
    class URichTextBlock* rtb_emailText;                                              // 0x06B0 (size: 0x8)
    class UScrollBox* scrollbox_adv;                                                  // 0x06B8 (size: 0x8)
    class UScrollBox* scrollbox_advs;                                                 // 0x06C0 (size: 0x8)
    class UScrollBox* scrollbox_cams;                                                 // 0x06C8 (size: 0x8)
    class UScrollBox* scrollbox_cart;                                                 // 0x06D0 (size: 0x8)
    class UScrollBox* scrollbox_emails;                                               // 0x06D8 (size: 0x8)
    class UScrollBox* scrollbox_emailtxt;                                             // 0x06E0 (size: 0x8)
    class UScrollBox* scrollbox_floppy;                                               // 0x06E8 (size: 0x8)
    class UScrollBox* scrollbox_floppyBuffer;                                         // 0x06F0 (size: 0x8)
    class UScrollBox* scrollbox_orders;                                               // 0x06F8 (size: 0x8)
    class UScrollBox* scrollbox_pics;                                                 // 0x0700 (size: 0x8)
    class UScrollBox* ScrollBox_signals;                                              // 0x0708 (size: 0x8)
    class UScrollBox* scrollbox_store;                                                // 0x0710 (size: 0x8)
    class UScrollBox* scrollbox_vids;                                                 // 0x0718 (size: 0x8)
    class USlider* Slider_camX;                                                       // 0x0720 (size: 0x8)
    class USlider* Slider_camY;                                                       // 0x0728 (size: 0x8)
    class USlider* Slider_camZ;                                                       // 0x0730 (size: 0x8)
    class USlider* slider_vid;                                                        // 0x0738 (size: 0x8)
    class UWidgetSwitcher* switcher;                                                  // 0x0740 (size: 0x8)
    class UWidgetSwitcher* switcher_media;                                            // 0x0748 (size: 0x8)
    class UWidgetSwitcher* switcher_mediaViewer;                                      // 0x0750 (size: 0x8)
    class UTextBlock* tex_descName;                                                   // 0x0758 (size: 0x8)
    class UTextBlock* tex_descPrice;                                                  // 0x0760 (size: 0x8)
    class UTextBlock* text_alti;                                                      // 0x0768 (size: 0x8)
    class UTextBlock* text_azim;                                                      // 0x0770 (size: 0x8)
    class UTextBlock* text_beginData_1;                                               // 0x0778 (size: 0x8)
    class UTextBlock* text_floppyName;                                                // 0x0780 (size: 0x8)
    class UTextBlock* text_floppyReadwrites;                                          // 0x0788 (size: 0x8)
    class UTextBlock* text_itemDesc;                                                  // 0x0790 (size: 0x8)
    class UTextBlock* text_name_6;                                                    // 0x0798 (size: 0x8)
    class UTextBlock* text_object;                                                    // 0x07A0 (size: 0x8)
    class UTextBlock* text_SFrequency;                                                // 0x07A8 (size: 0x8)
    class UTextBlock* text_sQuality;                                                  // 0x07B0 (size: 0x8)
    class UTextBlock* text_SSize;                                                     // 0x07B8 (size: 0x8)
    class UTextBlock* text_upgradeDesc;                                               // 0x07C0 (size: 0x8)
    class UTextBlock* text_upgradeName;                                               // 0x07C8 (size: 0x8)
    class UTextBlock* txt_adv;                                                        // 0x07D0 (size: 0x8)
    class UTextBlock* txt_advDesc;                                                    // 0x07D8 (size: 0x8)
    class UTextBlock* txt_cartSize;                                                   // 0x07E0 (size: 0x8)
    class UTextBlock* txt_emailtime;                                                  // 0x07E8 (size: 0x8)
    class UTextBlock* txt_emailtopic;                                                 // 0x07F0 (size: 0x8)
    class UTextBlock* txt_pfp;                                                        // 0x07F8 (size: 0x8)
    class UTextBlock* txt_price;                                                      // 0x0800 (size: 0x8)
    class UTextBlock* txt_progress;                                                   // 0x0808 (size: 0x8)
    class UTextBlock* txt_signalText;                                                 // 0x0810 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_atvsolar;                                    // 0x0818 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_autopolarity;                                // 0x0820 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_autoprocess;                                 // 0x0828 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_breakerSpeed;                                // 0x0830 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_computerLvl;                                 // 0x0838 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_computerSPeed;                               // 0x0840 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_cooldown;                                    // 0x0848 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_coordinateSpeed;                             // 0x0850 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_deteQ;                                       // 0x0858 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_downloadSPeed;                               // 0x0860 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_downloadSPeed_1;                             // 0x0868 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_pingSpeed;                                   // 0x0870 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_pingStrength;                                // 0x0878 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_radarHist;                                   // 0x0880 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_radarSpd;                                    // 0x0888 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_sensor;                                      // 0x0890 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_sensor_fr;                                   // 0x0898 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_sensorDrift;                                 // 0x08A0 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_sensorSpeed;                                 // 0x08A8 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrade_spect;                                       // 0x08B0 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrades_autosave;                                   // 0x08B8 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrades_radarAlarm;                                 // 0x08C0 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrades_radarColor;                                 // 0x08C8 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrades_rc;                                         // 0x08D0 (size: 0x8)
    class Uuicomp_upgradeSlot_C* upgrades_storm;                                      // 0x08D8 (size: 0x8)
    class UVerticalBox* vb_cart;                                                      // 0x08E0 (size: 0x8)
    class UVerticalBox* vb_emails;                                                    // 0x08E8 (size: 0x8)
    class UVerticalBox* vb_signals;                                                   // 0x08F0 (size: 0x8)
    class UVerticalBox* vbox_datablocks;                                              // 0x08F8 (size: 0x8)
    class UVerticalBox* vbox_floppyBuffer;                                            // 0x0900 (size: 0x8)
    class UVerticalBox* VerticalBox_cam;                                              // 0x0908 (size: 0x8)
    TArray<class Uuicomp_signalSlot_C*> Slots;                                        // 0x0910 (size: 0x10)
    class Alaptop_C* laptop;                                                          // 0x0920 (size: 0x8)
    Fstruct_signal_data lastData;                                                     // 0x0928 (size: 0x1C8)
    class Uuicomp_signalSlot_C* activeSlot;                                           // 0x0AF0 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0AF8 (size: 0x8)
    TArray<class Uuicomp_emailSlot_C*> slots_emails;                                  // 0x0B00 (size: 0x10)
    TArray<Fstruct_store> cart;                                                       // 0x0B10 (size: 0x10)
    TArray<class Uuicomp_shopCartSlot_C*> slots_cart;                                 // 0x0B20 (size: 0x10)
    TArray<class Uuicomp_shopOrderSlot_C*> slots_order;                               // 0x0B30 (size: 0x10)
    int32 storePrice;                                                                 // 0x0B40 (size: 0x4)
    int32 orderN;                                                                     // 0x0B44 (size: 0x4)
    TArray<class Uuicomp_advancementSlot_C*> slots_advs;                              // 0x0B48 (size: 0x10)
    class Uuicomp_advancementSlot_C* activeAdv;                                       // 0x0B58 (size: 0x8)
    TArray<class Uuicomp_camSlot_C*> camSlots;                                        // 0x0B60 (size: 0x10)
    class Aprop_camera_bad_C* cam;                                                    // 0x0B70 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x0B78 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_cam;                                       // 0x0B80 (size: 0x8)
    FIntPoint camRes;                                                                 // 0x0B88 (size: 0x8)
    float camUpd;                                                                     // 0x0B90 (size: 0x4)
    class Uuicomp_camSlot_C* camSelect;                                               // 0x0B98 (size: 0x8)
    FString signalText;                                                               // 0x0BA0 (size: 0x10)
    float textLen;                                                                    // 0x0BB0 (size: 0x4)
    class UTextureRenderTarget2D* rt_ligh;                                            // 0x0BB8 (size: 0x8)
    bool isCam;                                                                       // 0x0BC0 (size: 0x1)
    int32 activeSlot_index;                                                           // 0x0BC4 (size: 0x4)
    class Aprop_rdrone_C* drone;                                                      // 0x0BC8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_dronebar;                                  // 0x0BD0 (size: 0x8)
    TArray<class Uuicomp_photoSlot_C*> photosSlots;                                   // 0x0BD8 (size: 0x10)
    int32 picId;                                                                      // 0x0BE8 (size: 0x4)
    TEnumAsByte<enum_shopCats::Type> currentShopCategory;                             // 0x0BEC (size: 0x1)
    TArray<class Uuicomp_shopSlot_C*> storeSlots;                                     // 0x0BF0 (size: 0x10)
    int32 Size;                                                                       // 0x0C00 (size: 0x4)
    class Ap_kerfus_C* kerfur;                                                        // 0x0C08 (size: 0x8)
    class AkerfurOmega_C* kerfur_o;                                                   // 0x0C10 (size: 0x8)
    bool camX_hold;                                                                   // 0x0C18 (size: 0x1)
    bool camY_hold;                                                                   // 0x0C19 (size: 0x1)
    bool camZ_hold;                                                                   // 0x0C1A (size: 0x1)
    FText currentSubcategory;                                                         // 0x0C20 (size: 0x18)
    TArray<FString> subcategories;                                                    // 0x0C38 (size: 0x10)
    TArray<class Uui_shopSubcategoryButton_C*> subcategoriesTabs;                     // 0x0C48 (size: 0x10)
    TArray<TEnumAsByte<enum_shopCats::Type>> Categories;                              // 0x0C58 (size: 0x10)
    FString currentSubcategory_string;                                                // 0x0C68 (size: 0x10)
    bool zoomed;                                                                      // 0x0C78 (size: 0x1)
    TArray<class Uuicomp_shopSlot_C*> activeStoreSlots;                               // 0x0C80 (size: 0x10)
    class Uuicomp_shopSlot_C* hoveredStoreSlot;                                       // 0x0C90 (size: 0x8)
    FText Search;                                                                     // 0x0C98 (size: 0x18)
    bool isFavourites;                                                                // 0x0CB0 (size: 0x1)
    bool beginDisable;                                                                // 0x0CB1 (size: 0x1)
    class ApcWASDtest_C* char;                                                        // 0x0CB8 (size: 0x8)
    FVector2D cursorDelta;                                                            // 0x0CC0 (size: 0x8)
    FVector2D mousePrev;                                                              // 0x0CC8 (size: 0x8)
    bool RC_active;                                                                   // 0x0CD0 (size: 0x1)
    bool inputRC_forward;                                                             // 0x0CD1 (size: 0x1)
    bool inputRC_backward;                                                            // 0x0CD2 (size: 0x1)
    bool inputRC_right;                                                               // 0x0CD3 (size: 0x1)
    bool inputRC_left;                                                                // 0x0CD4 (size: 0x1)
    bool inputRC_up;                                                                  // 0x0CD5 (size: 0x1)
    bool inputRC_down;                                                                // 0x0CD6 (size: 0x1)
    bool inputRC_shift;                                                               // 0x0CD7 (size: 0x1)
    TArray<Fstruct_video> videos;                                                     // 0x0CD8 (size: 0x10)
    TArray<class UGridSlot*> slotsVideo;                                              // 0x0CE8 (size: 0x10)
    TArray<class Uuicomp_videoSlot_C*> slots_video;                                   // 0x0CF8 (size: 0x10)
    bool vidWasPaused;                                                                // 0x0D08 (size: 0x1)
    TArray<class Uui_floppyDatablock_C*> floppyDataBlocks;                            // 0x0D10 (size: 0x10)
    class UMediaTexture* vloppy_mediatex;                                             // 0x0D20 (size: 0x8)
    class UMediaPlayer* vloppy_mediaplayer;                                           // 0x0D28 (size: 0x8)
    int32 uid;                                                                        // 0x0D30 (size: 0x4)
    TArray<class Uui_bufferDatablock_C*> bufferSlots;                                 // 0x0D38 (size: 0x10)
    TArray<int32> bufferUIDs;                                                         // 0x0D48 (size: 0x10)
    TArray<int32> floppyUIDs;                                                         // 0x0D58 (size: 0x10)
    class UMediaSource* Media Source;                                                 // 0x0D68 (size: 0x8)
    class UMediaPlayer* mediaGetLen;                                                  // 0x0D70 (size: 0x8)
    class Avpcmg_controller_C* vpcmgController;                                       // 0x0D78 (size: 0x8)
    class AActor* nearestActor;                                                       // 0x0D80 (size: 0x8)
    bool isListening;                                                                 // 0x0D88 (size: 0x1)
    bool searchGlobal;                                                                // 0x0D89 (size: 0x1)
    FVector2D mousePosition_fromWorld;                                                // 0x0D8C (size: 0x8)
    int32 zClick;                                                                     // 0x0D94 (size: 0x4)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void openUpgradeDescription(FText Name, FText Desc);
    void Update Cam(bool Condition);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void openDescription(class Uuicomp_shopSlot_C* Slot);
    void genFloppyBuffer();
    void removeBuffer(class Uui_bufferDatablock_C* Buffer);
    void transferBuffer(class Uui_bufferDatablock_C* bufferSlot, bool& return);
    void addFloppyBuffer(class Uui_floppyDatablock_C* dataBlock);
    void progressUID();
    void updFloppy();
    void updVidButton();
    void setVideoSeek();
    void openVideo(Fstruct_video Info);
    void loadVideoList();
    void switcherSwitched(int32 Index);
    void moveRC(FVector camMultiply, FVector droneMultiply, FVector kerfurMultiply, FVector kerfurO_Multiply);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void updateFavourites();
    void filterStore();
    void lookAtStoreDesc(class Uuicomp_shopSlot_C* hoveredStoreSlot);
    void generateStore();
    void addPhoto();
    void removeOrderCart();
    void addOrderCart(const Fstruct_storeOrder& NewItem);
    void removeStoreCart(int32 Index);
    void addStoreCart(const Fstruct_store& struct_store);
    void addEmail(Fstruct_email isnew);
    void removeSignal(int32 Index);
    void addSignal(Fstruct_signalDataDynamic Data);
    void updCategory(TEnumAsByte<enum_shopCats::Type> currentShopCategory, FText currentSubcategory);
    void viewPhoto(int32 picId);
    void genPhotos();
    void sortSignal(int32 Add);
    void updCam();
    void setCam(class Aprop_camera_bad_C* cam, class Uuicomp_camSlot_C* camSelect, class Aprop_rdrone_C* drone);
    void genCams();
    void selectAdv(class Uuicomp_advancementSlot_C* activeAdv);
    void updAdvs();
    void makeAnOrder(const Fstruct_storeOrder& NewItem, bool automatic);
    void genStoreCart();
    void delEmail(int32 Index);
    void selectEmail(int32 Index, class Uuicomp_emailSlot_C* Target);
    void updEmails();
    void upd();
    void playSignal(class Uuicomp_signalSlot_C* activeSlot, int32 activeSlot_index);
    void genSignalList();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void intComs_signalDeleted();
    void intComs_signalSaved();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void intComs_gamemodePreLoad();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodeMakeKeys();
    void intComs_propRenderer_finishProps();
    void intComs_applyColor(FLinearColor Color);
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_gamemodePostKeys();
    void intComs_triggerSnow(bool isSnow);
    void BndEvt__button_tab_upgrades_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_tab_signals_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_play_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_stop_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_delete_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void perc(const class USoundWave* PlayingSoundWave, const float PlaybackPercent);
    void BndEvt__button_copy_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_tab_email_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void genStore();
    void BndEvt__button_tab_store_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_order_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_tab_adv_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_tab_cams_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_camUpd_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Slider_camY_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Slider_camX_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Slider_camZ_K2Node_ComponentBoundEvent_15_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Button_camIR_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_moveUp_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_moveDown_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Slider_camX_K2Node_ComponentBoundEvent_18_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__Slider_camY_K2Node_ComponentBoundEvent_19_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__Slider_camZ_K2Node_ComponentBoundEvent_20_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__button_tab_mods_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_tab_pics_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_shopCat_misc_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_shopCat_deco_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_shopCat_ess_5_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_shopCat_favs_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_shopCat_food_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_shopCat_machines_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_shopCat_storage_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_shopCat_tools_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_laptop_Button_camFl_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__umg_laptop_Button_camC_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_laptop_Slider_camY_K2Node_ComponentBoundEvent_33_OnMouseCaptureBeginEvent__DelegateSignature();
    void BndEvt__umg_laptop_Slider_camX_K2Node_ComponentBoundEvent_34_OnMouseCaptureBeginEvent__DelegateSignature();
    void BndEvt__umg_laptop_Slider_camZ_K2Node_ComponentBoundEvent_35_OnMouseCaptureBeginEvent__DelegateSignature();
    void BndEvt__umg_laptop_Button_130_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__umg_laptop_Button_130_K2Node_ComponentBoundEvent_41_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__umg_laptop_EditableTextBox_search_K2Node_ComponentBoundEvent_36_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__umg_laptop_button_shopCat_ess_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_laptop_Button_126_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_laptop_button_shopCat_misc_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_laptop_button_clearEmails_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_laptop_Button_236_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_button_tab_comps_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_Button_220_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature();
    void keyboard(FKey Key, bool Pressed);
    void Mouse(FVector2D mouseXY);
    void BndEvt__ui_laptop_button_focusChar_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature();
    void quitChar();
    void exitLaptop();
    void keyboardRC(FKey Key, bool Pressed);
    void createRC();
    void leaveRC();
    void tick_RC();
    void BndEvt__ui_laptop_Button_59_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_button_shopCat_ess_1_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_button_shopCat_esse_1_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature();
    void connectToMediaPlayer();
    void mediaOpened(FString OpenedUrl);
    void BndEvt__ui_laptop_button_vidPlayPause_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature();
    void mediaPaused();
    void mediaPlayed();
    void mediaEnded();
    void BndEvt__ui_laptop_slider_vid_K2Node_ComponentBoundEvent_51_OnMouseCaptureBeginEvent__DelegateSignature();
    void BndEvt__ui_laptop_slider_vid_K2Node_ComponentBoundEvent_52_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__ui_laptop_button_tab_floppy_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_button_floppyEject_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature();
    void playFloppyVid(class Uuicomp_videoSlotEncrypted_C* videoSlot);
    void encVidEnd();
    void encVidClosed();
    void tstDuration();
    void OnMediaOpened_Event_0(FString OpenedUrl);
    void addToCart(class Uuicomp_shopSlot_C* Target);
    void BndEvt__ui_laptop_button_tab_email_1_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_Button_206_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_Button_305_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent();
    void BndEvt__ui_laptop_Button_112_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_button_storeDesc_addToCart_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_buttonEA_coordinates_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_buttonEA_detector_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_buttonEA_misc_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_buttonEA_radar_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_buttonEA_signalProc_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_Button_487_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_Button_listen_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_Button_listen_on_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature();
    void intComs_gamemodeBeginPlay();
    void intComs_unfoc();
    void intComs_unfocused();
    void BndEvt__ui_laptop_button_shopCat_favs_1_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_checkbox_globalSearch_K2Node_ComponentBoundEvent_69_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__ui_laptop_button_closeUpgradeDesc_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_button_shopClearSearch_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_laptop_Button_29_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_laptop(int32 EntryPoint);
}; // Size: 0xD98

#endif
