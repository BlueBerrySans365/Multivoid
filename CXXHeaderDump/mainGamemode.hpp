#ifndef UE4SS_SDK_mainGamemode_HPP
#define UE4SS_SDK_mainGamemode_HPP

class AmainGamemode_C : public AGameModeBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02C8 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x02D0 (size: 0x8)
    class USceneCaptureComponent2D* cam_w;                                            // 0x02D8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02E0 (size: 0x8)
    float Timeline_1_a_1C4FE9404A705F577D93B8A630D23E67;                              // 0x02E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_1C4FE9404A705F577D93B8A630D23E67; // 0x02EC (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x02F0 (size: 0x8)
    float Timeline_0_a_090C33B641AFC02C693DCDA8660A74F3;                              // 0x02F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_090C33B641AFC02C693DCDA8660A74F3; // 0x02FC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0300 (size: 0x8)
    float rulesSLideOut_a_D056B3314FEEFE1DF4F34AB2993572B8;                           // 0x0308 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> rulesSLideOut__Direction_D056B3314FEEFE1DF4F34AB2993572B8; // 0x030C (size: 0x1)
    class UTimelineComponent* rulesSLideOut;                                          // 0x0310 (size: 0x8)
    float threatAmb_a_3E4EBBC347AD0664443D8FBFE3E75C48;                               // 0x0318 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> threatAmb__Direction_3E4EBBC347AD0664443D8FBFE3E75C48; // 0x031C (size: 0x1)
    class UTimelineComponent* threatAmb;                                              // 0x0320 (size: 0x8)
    class Uui_UI_C* playerInterface;                                                  // 0x0328 (size: 0x8)
    TArray<class Adish_C*> dishs;                                                     // 0x0330 (size: 0x10)
    class AspaceRenderer_C* master_spaceRenderer;                                     // 0x0340 (size: 0x8)
    class UObject* Coordinates;                                                       // 0x0348 (size: 0x8)
    TArray<bool> activeDishes;                                                        // 0x0350 (size: 0x10)
    class UObject* widget_signal;                                                     // 0x0360 (size: 0x8)
    FmainGamemode_CDishesStop dishesStop;                                             // 0x0368 (size: 0x10)
    void dishesStop();
    class AobjectRenderer_C* objectRenderer;                                          // 0x0378 (size: 0x8)
    class UObject* signalDownload;                                                    // 0x0380 (size: 0x8)
    TArray<Fstruct_signal_data> savedSignals;                                         // 0x0388 (size: 0x10)
    class UObject* decoder;                                                           // 0x0398 (size: 0x8)
    class Uui_console_C* Console;                                                     // 0x03A0 (size: 0x8)
    class UObject* radar;                                                             // 0x03A8 (size: 0x8)
    float power_calculating;                                                          // 0x03B0 (size: 0x4)
    float power_downloading;                                                          // 0x03B4 (size: 0x4)
    float power_coordinates;                                                          // 0x03B8 (size: 0x4)
    float power_playing;                                                              // 0x03BC (size: 0x4)
    float power_light;                                                                // 0x03C0 (size: 0x4)
    float totalPower;                                                                 // 0x03C4 (size: 0x4)
    float usedPower;                                                                  // 0x03C8 (size: 0x4)
    float powerRatio;                                                                 // 0x03CC (size: 0x4)
    float powerUsage;                                                                 // 0x03D0 (size: 0x4)
    bool usesp_calc;                                                                  // 0x03D4 (size: 0x1)
    bool usesp_downl;                                                                 // 0x03D5 (size: 0x1)
    bool usesp_coords;                                                                // 0x03D6 (size: 0x1)
    bool usesp_play;                                                                  // 0x03D7 (size: 0x1)
    bool usesp_light;                                                                 // 0x03D8 (size: 0x1)
    FmainGamemode_CPowerChanged powerChanged;                                         // 0x03E0 (size: 0x10)
    void powerChanged(bool active_calc, bool active_downl, bool active_coords, bool active_play, bool active_light);
    TArray<class AserverBox_C*> servers;                                              // 0x03F0 (size: 0x10)
    float serverEfficiency_calc;                                                      // 0x0400 (size: 0x4)
    float serverEfficiency_downl;                                                     // 0x0404 (size: 0x4)
    class AActor* compassTarget;                                                      // 0x0408 (size: 0x8)
    TArray<FName> list_objects;                                                       // 0x0410 (size: 0x10)
    int32 NewVar_0;                                                                   // 0x0420 (size: 0x4)
    TArray<FName> allObjectsNames;                                                    // 0x0428 (size: 0x10)
    TArray<float> W_objects;                                                          // 0x0438 (size: 0x10)
    class Uui_laptop_C* laptop;                                                       // 0x0448 (size: 0x8)
    class AdaynightCycle_C* daynightCycle;                                            // 0x0450 (size: 0x8)
    TArray<class USoundBase*> toNrts;                                                 // 0x0458 (size: 0x10)
    TArray<TSoftObjectPtr<UObject>> signalsSoftRefs;                                  // 0x0468 (size: 0x10)
    TArray<class UConstantQNRT*> allNRTS;                                             // 0x0478 (size: 0x10)
    int32 nrtLoadId;                                                                  // 0x0488 (size: 0x4)
    class UObject* urrSoft;                                                           // 0x0490 (size: 0x8)
    class ApowerControl_C* powerControl;                                              // 0x0498 (size: 0x8)
    class AambienceMastter_C* ambMaster;                                              // 0x04A0 (size: 0x8)
    class Uui_menu_C* pause_mainMenu;                                                 // 0x04A8 (size: 0x8)
    class UsaveSlot_C* saveSlot;                                                      // 0x04B0 (size: 0x8)
    TArray<Fstruct_weightedName> objectsWeighted;                                     // 0x04B8 (size: 0x10)
    TArray<float> br_weights;                                                         // 0x04C8 (size: 0x10)
    class Atrigger_eventer_C* eventer;                                                // 0x04D8 (size: 0x8)
    FIntVector Time;                                                                  // 0x04E0 (size: 0xC)
    bool isSleep;                                                                     // 0x04EC (size: 0x1)
    class ACameraActor* sleepCam;                                                     // 0x04F0 (size: 0x8)
    class APawn* origPawn;                                                            // 0x04F8 (size: 0x8)
    class Agearer_C* gearer;                                                          // 0x0500 (size: 0x8)
    class Usave_main_C* save_main;                                                    // 0x0508 (size: 0x8)
    class UmainGameInstance_C* GameInstance;                                          // 0x0510 (size: 0x8)
    class ApropProcessor_C* propRenderer;                                             // 0x0518 (size: 0x8)
    bool showHovertext;                                                               // 0x0520 (size: 0x1)
    class Uui_serverMinigame_C* serverMinigame;                                       // 0x0528 (size: 0x8)
    bool hasWeapon;                                                                   // 0x0530 (size: 0x1)
    FString ae;                                                                       // 0x0538 (size: 0x10)
    class AorderPlace_C* orderPlace;                                                  // 0x0548 (size: 0x8)
    class Uui_reactor_C* reactor_umg;                                                 // 0x0550 (size: 0x8)
    class Areactor_C* reactor;                                                        // 0x0558 (size: 0x8)
    class Adrone_C* drone;                                                            // 0x0560 (size: 0x8)
    bool dreaming;                                                                    // 0x0568 (size: 0x1)
    FTransform playerPreDream;                                                        // 0x0570 (size: 0x30)
    class AdreamBase_C* dream;                                                        // 0x05A0 (size: 0x8)
    class Abed_C* bed;                                                                // 0x05A8 (size: 0x8)
    class Atelescope_C* telescope;                                                    // 0x05B0 (size: 0x8)
    TMap<class FString, class FString> actionEnums;                                   // 0x05B8 (size: 0x50)
    class AATV_C* car;                                                                // 0x0608 (size: 0x8)
    bool apoc;                                                                        // 0x0610 (size: 0x1)
    int32 Boxes;                                                                      // 0x0614 (size: 0x4)
    TArray<class Aprop_camera_bad_C*> cams;                                           // 0x0618 (size: 0x10)
    int32 autosaveDelay;                                                              // 0x0628 (size: 0x4)
    class AmainPlayer_C* mainPlayer;                                                  // 0x0630 (size: 0x8)
    class Uui_hints_C* hints;                                                         // 0x0638 (size: 0x8)
    class Uui_notebook_C* clipboard;                                                  // 0x0640 (size: 0x8)
    TArray<FText> dishes_names;                                                       // 0x0648 (size: 0x10)
    TEnumAsByte<enum_difficulty::Type> difficulty;                                    // 0x0658 (size: 0x1)
    FIntPoint res;                                                                    // 0x065C (size: 0x8)
    TArray<class Aprop_beacon_C*> allBeacons;                                         // 0x0668 (size: 0x10)
    class Uui_minimap_C* minimap;                                                     // 0x0678 (size: 0x8)
    class Uui_playerInventory_C* propInventory;                                       // 0x0680 (size: 0x8)
    TArray<class AActor*> radarObjects;                                               // 0x0688 (size: 0x10)
    int32 startDay;                                                                   // 0x0698 (size: 0x4)
    class Ainsomniac_C* insomniac;                                                    // 0x06A0 (size: 0x8)
    TArray<class UTexture2D*> pics_H;                                                 // 0x06A8 (size: 0x10)
    TArray<class UTexture2D*> pics_S;                                                 // 0x06B8 (size: 0x10)
    TArray<class UTexture2D*> pics_v;                                                 // 0x06C8 (size: 0x10)
    TArray<class UTexture2D*> pics_t;                                                 // 0x06D8 (size: 0x10)
    TArray<class Aprop_rdrone_C*> drones;                                             // 0x06E8 (size: 0x10)
    class Amg_invaders_C* invaders;                                                   // 0x06F8 (size: 0x8)
    TArray<class Acheat_place_C*> cheat_places;                                       // 0x0700 (size: 0x10)
    TArray<FString> cheat_places_names;                                               // 0x0710 (size: 0x10)
    class AhalloweenMaster_C* halloweenMaster;                                        // 0x0720 (size: 0x8)
    bool isHalloween;                                                                 // 0x0728 (size: 0x1)
    TArray<bool> eventsActive;                                                        // 0x0730 (size: 0x10)
    TArray<Fstruct_keybind> keybindsDefault;                                          // 0x0740 (size: 0x10)
    TArray<FKey> keysDefaults;                                                        // 0x0750 (size: 0x10)
    TArray<Fstruct_undo> undoList;                                                    // 0x0760 (size: 0x10)
    TArray<FString> dishes_techNames;                                                 // 0x0770 (size: 0x10)
    class Aprop_inventoryContainer_player_C* playerContainer;                         // 0x0780 (size: 0x8)
    class Uui_deathscreen_C* redScreen;                                               // 0x0788 (size: 0x8)
    bool virus;                                                                       // 0x0790 (size: 0x1)
    class AtheEvil_C* evil;                                                           // 0x0798 (size: 0x8)
    TArray<class Aprop_drive_C*> allDrives;                                           // 0x07A0 (size: 0x10)
    TArray<class Aprop_box_C*> allDriveBoxes;                                         // 0x07B0 (size: 0x10)
    TArray<int32> W_objectsAm;                                                        // 0x07C0 (size: 0x10)
    TArray<FName> copyObjs;                                                           // 0x07D0 (size: 0x10)
    TArray<float> w_objectsChs;                                                       // 0x07E0 (size: 0x10)
    TArray<class Aprop_C*> allProps;                                                  // 0x07F0 (size: 0x10)
    TArray<class Aprop_container_C*> allContainers;                                   // 0x0800 (size: 0x10)
    TArray<class Aprop_driveRack_C*> allDriveracks;                                   // 0x0810 (size: 0x10)
    class Aroz_anim_C* rozShip;                                                       // 0x0820 (size: 0x8)
    TArray<FName> keyObj_key;                                                         // 0x0828 (size: 0x10)
    TArray<class AActor*> keyObj_obj;                                                 // 0x0838 (size: 0x10)
    class Apanel_SATconsole_C* rootConsole;                                           // 0x0848 (size: 0x8)
    class AwaterFloatMaster_C* waterFloatMaster;                                      // 0x0850 (size: 0x8)
    TArray<class AriverFlow_C*> riverFlows;                                           // 0x0858 (size: 0x10)
    TArray<class UTexture2D*> photos;                                                 // 0x0868 (size: 0x10)
    class Abirber_C* birber;                                                          // 0x0878 (size: 0x8)
    class AblackFog_C* blackFog;                                                      // 0x0880 (size: 0x8)
    class AredSkyEvent_C* redSky;                                                     // 0x0888 (size: 0x8)
    int32 slappers;                                                                   // 0x0890 (size: 0x4)
    class UObject* passwordLock;                                                      // 0x0898 (size: 0x8)
    int32 brokenServers;                                                              // 0x08A0 (size: 0x4)
    bool IsFlying;                                                                    // 0x08A4 (size: 0x1)
    TArray<class USoundWave*> radioMusics;                                            // 0x08A8 (size: 0x10)
    TArray<FString> radioMusics_tit;                                                  // 0x08B8 (size: 0x10)
    class AdigcamMaster_C* digcamMaster;                                              // 0x08C8 (size: 0x8)
    class Aeg_C* eg;                                                                  // 0x08D0 (size: 0x8)
    bool protoReload;                                                                 // 0x08D8 (size: 0x1)
    bool backroomsEnabled;                                                            // 0x08D9 (size: 0x1)
    TArray<class Aprop_food_shrimp_C*> shrimps;                                       // 0x08E0 (size: 0x10)
    TArray<class Aprop_food_C*> food;                                                 // 0x08F0 (size: 0x10)
    bool canDamage;                                                                   // 0x0900 (size: 0x1)
    class Ad_window_C* poopWindow;                                                    // 0x0908 (size: 0x8)
    class AcockroachMaster_C* cockroachMaster;                                        // 0x0910 (size: 0x8)
    class AjellyfishPath_C* jellyfishPath;                                            // 0x0918 (size: 0x8)
    TArray<class AsignalCam_C*> signalCams;                                           // 0x0920 (size: 0x10)
    TArray<class UTexture2D*> Flags;                                                  // 0x0930 (size: 0x10)
    class UTexture2D* trollface;                                                      // 0x0940 (size: 0x8)
    TArray<FName> signalNames_default;                                                // 0x0948 (size: 0x10)
    TArray<Fstruct_signal_data> signalData_default;                                   // 0x0958 (size: 0x10)
    TArray<Fstruct_signalDataDynamic> savedSignals_0;                                 // 0x0968 (size: 0x10)
    TArray<float> allObjectsWeights;                                                  // 0x0978 (size: 0x10)
    TArray<bool> signalUniques;                                                       // 0x0988 (size: 0x10)
    TArray<class UTexture2D*> rugs;                                                   // 0x0998 (size: 0x10)
    TArray<Fstruct_customMesh> Meshes;                                                // 0x09A8 (size: 0x10)
    TArray<FString> meshesNames;                                                      // 0x09B8 (size: 0x10)
    TArray<class UTexture2D*> meshTex;                                                // 0x09C8 (size: 0x10)
    class Uui_printer_C* printer;                                                     // 0x09D8 (size: 0x8)
    class Uui_radioInterface_C* onlineRadio;                                          // 0x09E0 (size: 0x8)
    TArray<Fstruct_tv> tvVids;                                                        // 0x09E8 (size: 0x10)
    class Uui_tvInterface_C* offlineTv;                                               // 0x09F8 (size: 0x8)
    FmainGamemode_CWokenUp wokenUp;                                                   // 0x0A00 (size: 0x10)
    void wokenUp();
    TArray<class Agenerator_C*> Generators;                                           // 0x0A10 (size: 0x10)
    class AgeneratorFuckuper_C* generatorCond;                                        // 0x0A20 (size: 0x8)
    bool arirFeeding;                                                                 // 0x0A28 (size: 0x1)
    TArray<class Usvtarget_C*> svTargets;                                             // 0x0A30 (size: 0x10)
    TArray<class UTexture2D*> posters;                                                // 0x0A40 (size: 0x10)
    class Aborders_C* borders;                                                        // 0x0A50 (size: 0x8)
    TArray<class Akillerwisp_C*> killerWisps;                                         // 0x0A58 (size: 0x10)
    TArray<Fstruct_tv> radioLinks;                                                    // 0x0A68 (size: 0x10)
    FString bufferName;                                                               // 0x0A78 (size: 0x10)
    TArray<Fstruct_tv> radioLinks_offlin;                                             // 0x0A88 (size: 0x10)
    TArray<FString> NewVar_1;                                                         // 0x0A98 (size: 0x10)
    TArray<class UTexture2D*> NewVar_2;                                               // 0x0AA8 (size: 0x10)
    TArray<class UTexture2D*> texs;                                                   // 0x0AB8 (size: 0x10)
    FmainGamemode_CFellAsleep fellAsleep;                                             // 0x0AC8 (size: 0x10)
    void fellAsleep();
    class AbadSun_C* badSun;                                                          // 0x0AD8 (size: 0x8)
    float mannDest;                                                                   // 0x0AE0 (size: 0x4)
    TArray<class UTexture2D*> stickers;                                               // 0x0AE8 (size: 0x10)
    TArray<FName> filenames_stickers;                                                 // 0x0AF8 (size: 0x10)
    TArray<class AserverBox_C*> kerfusPendingServers;                                 // 0x0B08 (size: 0x10)
    TArray<class AprintedObject_C*> printedMeshes;                                    // 0x0B18 (size: 0x10)
    TArray<class UTexture2D*> meshTex_PBR;                                            // 0x0B28 (size: 0x10)
    TArray<class UTexture2D*> meshTex_normal;                                         // 0x0B38 (size: 0x10)
    TArray<class Aprop_photo_C*> photosPrinted;                                       // 0x0B48 (size: 0x10)
    TArray<class AcordSocket_C*> baseSockets;                                         // 0x0B58 (size: 0x10)
    TArray<class TSubclassOf<Adreamer_C>> dreamers_C;                                 // 0x0B68 (size: 0x10)
    TArray<class Adreamer_C*> dreamers;                                               // 0x0B78 (size: 0x10)
    class Uui_paperDraw_C* paperDraw;                                                 // 0x0B88 (size: 0x8)
    bool Editor;                                                                      // 0x0B90 (size: 0x1)
    class Uui_hsvWindow_C* hsvPicker;                                                 // 0x0B98 (size: 0x8)
    FmainGamemode_CSleepTriggered sleepTriggered;                                     // 0x0BA0 (size: 0x10)
    void sleepTriggered();
    TArray<class Ucomp_radiation_C*> radiationComps;                                  // 0x0BB0 (size: 0x10)
    class AariralRepEventHandler_C* ariralRepHandler;                                 // 0x0BC0 (size: 0x8)
    FmainGamemode_CPhotoTaken photoTaken;                                             // 0x0BC8 (size: 0x10)
    void photoTaken();
    bool arirHit;                                                                     // 0x0BD8 (size: 0x1)
    float sleepTime;                                                                  // 0x0BDC (size: 0x4)
    class Uui_handradar_C* handRadar;                                                 // 0x0BE0 (size: 0x8)
    TArray<class Adirthole_item_C*> allDirtholeItems;                                 // 0x0BE8 (size: 0x10)
    bool Immortal;                                                                    // 0x0BF8 (size: 0x1)
    class Aradiotower_C* radiotower;                                                  // 0x0C00 (size: 0x8)
    class AindoorAmbienceMaster_C* indoorAmbientMaster;                               // 0x0C08 (size: 0x8)
    FString Result;                                                                   // 0x0C10 (size: 0x10)
    float dryAlpha;                                                                   // 0x0C20 (size: 0x4)
    bool ripBozo;                                                                     // 0x0C24 (size: 0x1)
    bool puffballNuclear;                                                             // 0x0C25 (size: 0x1)
    TArray<class AActor*> validityStack;                                              // 0x0C28 (size: 0x10)
    FString NewVar_3;                                                                 // 0x0C38 (size: 0x10)
    bool backroomsPass;                                                               // 0x0C48 (size: 0x1)
    FString assetFolder;                                                              // 0x0C50 (size: 0x10)
    class Alakeglow_C* event_lakeglow;                                                // 0x0C60 (size: 0x8)
    class AundergroundGarbageSpawner_C* undergroundSpawnerMaster;                     // 0x0C68 (size: 0x8)
    TMap<FName, float> fishingItems;                                                  // 0x0C70 (size: 0x50)
    class Uui_texturePicker_C* texturePicker;                                         // 0x0CC0 (size: 0x8)
    class AActor* texPickerObject;                                                    // 0x0CC8 (size: 0x8)
    TArray<class Aeffect_C*> Effects;                                                 // 0x0CD0 (size: 0x10)
    TArray<FName> effects_names;                                                      // 0x0CE0 (size: 0x10)
    TArray<int32> effect_amount;                                                      // 0x0CF0 (size: 0x10)
    TArray<Fstruct_save> loadedGatherers;                                             // 0x0D00 (size: 0x10)
    TArray<FName> loadedGatherersKeys;                                                // 0x0D10 (size: 0x10)
    TArray<class AActor*> existingGatherers;                                          // 0x0D20 (size: 0x10)
    TArray<FName> existingGatherersKeys;                                              // 0x0D30 (size: 0x10)
    TArray<Fstruct_triggerSave> loadedGatherers_T;                                    // 0x0D40 (size: 0x10)
    TArray<FName> loadedGatherersKeys_T;                                              // 0x0D50 (size: 0x10)
    TArray<class AActor*> existingGatherers_T;                                        // 0x0D60 (size: 0x10)
    TArray<FName> existingGatherersKeys_T;                                            // 0x0D70 (size: 0x10)
    TArray<class AburiedItemsArea_C*> allBuriedItemAreas;                             // 0x0D80 (size: 0x10)
    bool isSnowyFootsteps;                                                            // 0x0D90 (size: 0x1)
    bool isSnowyFootsteps_0;                                                          // 0x0D91 (size: 0x1)
    FString A_0;                                                                      // 0x0D98 (size: 0x10)
    TArray<FString> NewVar_4;                                                         // 0x0DA8 (size: 0x10)
    TArray<class AceilingLamp_C*> allCeilingLights;                                   // 0x0DB8 (size: 0x10)
    TArray<class AlampPost_C*> allLampPosts;                                          // 0x0DC8 (size: 0x10)
    bool disablePlayerFloat;                                                          // 0x0DD8 (size: 0x1)
    TArray<class Ap_kerfus_C*> allKerfurs;                                            // 0x0DE0 (size: 0x10)
    TArray<class AkerfurOmega_C*> allKerfuros;                                        // 0x0DF0 (size: 0x10)
    TArray<class Agrayboar_C*> allGrayboars;                                          // 0x0E00 (size: 0x10)
    class AwaterVolume_basementFlooder_C* basementFlooderWater;                       // 0x0E10 (size: 0x8)
    TArray<class AActor*> allBurningObjects;                                          // 0x0E18 (size: 0x10)
    class UMaterialInstanceDynamic* NewVar_5;                                         // 0x0E28 (size: 0x8)
    TArray<class UTexture2D*> meshTex_emissive;                                       // 0x0E30 (size: 0x10)
    bool disableSave;                                                                 // 0x0E40 (size: 0x1)
    TArray<class UStaticMesh*> prop_meshes;                                           // 0x0E48 (size: 0x10)
    TArray<float> prop_volumes;                                                       // 0x0E58 (size: 0x10)
    int32 activeEvents;                                                               // 0x0E68 (size: 0x4)
    TArray<class UObject*> activeEvents_senders;                                      // 0x0E70 (size: 0x10)
    TArray<float> prop_volumes_0;                                                     // 0x0E80 (size: 0x10)
    class UPrimitiveComponent* camAttach;                                             // 0x0E90 (size: 0x8)
    int32 disableEventTrack;                                                          // 0x0E98 (size: 0x4)
    bool isMainMenu;                                                                  // 0x0E9C (size: 0x1)
    FString plist;                                                                    // 0x0EA0 (size: 0x10)
    TArray<FString> plist_0;                                                          // 0x0EB0 (size: 0x10)
    class AanalogDScreenTest_C* analogPanels;                                         // 0x0EC0 (size: 0x8)
    bool isWinter;                                                                    // 0x0EC8 (size: 0x1)
    TMap<FName, float> xmasStore;                                                     // 0x0ED0 (size: 0x50)
    bool isChristmas;                                                                 // 0x0F20 (size: 0x1)
    TArray<class TSubclassOf<Aprop_tv2_C>> spawnedTVclasses;                          // 0x0F28 (size: 0x10)
    class A3dPrinterProcessor_C* 3dPrinterProcessor;                                  // 0x0F38 (size: 0x8)
    FString dl;                                                                       // 0x0F40 (size: 0x10)
    class Uui_colorPicker_C* colorPicker;                                             // 0x0F50 (size: 0x8)
    class ALandscape* Landscape;                                                      // 0x0F58 (size: 0x8)
    int32 Last Index;                                                                 // 0x0F60 (size: 0x4)
    bool check2;                                                                      // 0x0F64 (size: 0x1)
    class AbloodDecalMaster_C* masteBloodDecals;                                      // 0x0F68 (size: 0x8)
    class AdirectionalWind_C* directionalWind;                                        // 0x0F70 (size: 0x8)
    bool bloodLake;                                                                   // 0x0F78 (size: 0x1)
    TArray<class Aprop_wMannequin_C*> allWManns;                                      // 0x0F80 (size: 0x10)
    TArray<class Aprop_mannequin_C*> allManns;                                        // 0x0F90 (size: 0x10)
    TArray<class AwMannequinSpawn_C*> allMannsSpawns;                                 // 0x0FA0 (size: 0x10)
    TArray<FName> filenames_picsH;                                                    // 0x0FB0 (size: 0x10)
    TArray<FName> filenames_picsS;                                                    // 0x0FC0 (size: 0x10)
    TArray<FName> filenames_picsV;                                                    // 0x0FD0 (size: 0x10)
    TArray<FName> filenames_picsT;                                                    // 0x0FE0 (size: 0x10)
    TArray<FName> filenames_flags;                                                    // 0x0FF0 (size: 0x10)
    TArray<FName> filenames_rugs;                                                     // 0x1000 (size: 0x10)
    TArray<FName> filenames_posters;                                                  // 0x1010 (size: 0x10)
    class ARCM_cameraManager_C* rcm_manager;                                          // 0x1020 (size: 0x8)
    class ARCM_camera_C* RCM_camera;                                                  // 0x1028 (size: 0x8)
    float dreamProbability;                                                           // 0x1030 (size: 0x4)
    class Uui_atm_C* atm;                                                             // 0x1038 (size: 0x8)
    TArray<class Ucomp_photographic_C*> photographicEntities;                         // 0x1040 (size: 0x10)
    Fstruct_photoEntity debugCamData;                                                 // 0x1050 (size: 0x28)
    class Uui_crafting_C* ui_crafting;                                                // 0x1078 (size: 0x8)
    FString metaPLog;                                                                 // 0x1080 (size: 0x10)
    TArray<FString> wrms;                                                             // 0x1090 (size: 0x10)
    int32 wmi;                                                                        // 0x10A0 (size: 0x4)
    TArray<FString> wrids;                                                            // 0x10A8 (size: 0x10)
    TArray<class Uuicomp_settingsSlot_C*> settingsSlotCopy;                           // 0x10B8 (size: 0x10)
    bool CANVAS_signalPlayback;                                                       // 0x10C8 (size: 0x1)
    bool canvas_window;                                                               // 0x10C9 (size: 0x1)
    bool CANVAS_radarPath;                                                            // 0x10CA (size: 0x1)
    FmainGamemode_CGameSaved gameSaved;                                               // 0x10D0 (size: 0x10)
    void gameSaved();
    class AobjectViewer_C* objectViewer;                                              // 0x10E0 (size: 0x8)
    class Uui_alarmClock_C* ui_alarmClock;                                            // 0x10E8 (size: 0x8)
    class Uui_safe_C* ui_safe;                                                        // 0x10F0 (size: 0x8)
    bool fridgeIsOpen;                                                                // 0x10F8 (size: 0x1)
    int32 NewVar_6;                                                                   // 0x10FC (size: 0x4)
    bool useMetaPAudio;                                                               // 0x1100 (size: 0x1)
    TArray<class AcoordRadarDish_C*> coordinateRadars;                                // 0x1108 (size: 0x10)
    bool craftRecipeUnrolled;                                                         // 0x1118 (size: 0x1)
    bool UiSlideAnimation;                                                            // 0x1119 (size: 0x1)
    TMap<TEnumAsByte<enum_seasons::Type>, Fstruct_landscapeSeasonsTemplate> seasonsParams; // 0x1120 (size: 0x50)
    class UMaterialInstanceDynamic* dynmat_grass;                                     // 0x1170 (size: 0x8)
    bool isSummer;                                                                    // 0x1178 (size: 0x1)
    bool isAutumn;                                                                    // 0x1179 (size: 0x1)
    bool isSpring;                                                                    // 0x117A (size: 0x1)
    TEnumAsByte<enum_seasons::Type> currentSeason;                                    // 0x117B (size: 0x1)
    FmainGamemode_CSeasonUpdated seasonUpdated;                                       // 0x1180 (size: 0x10)
    void seasonUpdated(TEnumAsByte<enum_seasons::Type> newSeason);
    TArray<class AautumnLeafSpawner_C*> autumnLeafSpawner;                            // 0x1190 (size: 0x10)
    class AtutorialHint_C* activeTutorialHint;                                        // 0x11A0 (size: 0x8)
    bool april1st;                                                                    // 0x11A8 (size: 0x1)
    class Uui_hovertextPropHealth_C* ui_propHealth;                                   // 0x11B0 (size: 0x8)
    class Aticker_surveilanceMaster_C* ticker_securityMaster;                         // 0x11B8 (size: 0x8)
    TArray<class Aprop_camera_bad_C*> allSecurityCameras;                             // 0x11C0 (size: 0x10)
    TArray<class UMediaPlayer*> activeMediaChannels;                                  // 0x11D0 (size: 0x10)
    TArray<class Aprop_tv2_C*> allTVs;                                                // 0x11E0 (size: 0x10)
    int32 jailtps;                                                                    // 0x11F0 (size: 0x4)
    bool isInGayBabyJail;                                                             // 0x11F4 (size: 0x1)
    class AgayBabyJail_C* gayBabyJail_obj;                                            // 0x11F8 (size: 0x8)
    bool unlockFungunsInStory;                                                        // 0x1200 (size: 0x1)
    TArray<FName> keybindsNames_default;                                              // 0x1208 (size: 0x10)
    FmainGamemode_CTheItemWasBuried theItemWasBuried;                                 // 0x1218 (size: 0x10)
    void theItemWasBuried(class Adirthole_C* dirtHole, class AActor* Actor);
    bool isEaster;                                                                    // 0x1228 (size: 0x1)
    FmainGamemode_CGamemodeSettingsApplied gamemodeSettingsApplied;                   // 0x1230 (size: 0x10)
    void gamemodeSettingsApplied(class AmainGamemode_C* GameMode, Fstruct_settings1 Settings);
    bool cheatEnableBackrooms;                                                        // 0x1240 (size: 0x1)
    TArray<FString> availableAudioDevices;                                            // 0x1248 (size: 0x10)
    class AplayerSleepingPawn_C* sleepingPawn;                                        // 0x1258 (size: 0x8)
    bool nightmaresEnabled;                                                           // 0x1260 (size: 0x1)
    class Uui_boltMinigameTest_C* ui_wheelNuts;                                       // 0x1268 (size: 0x8)
    bool debugLight_noLight;                                                          // 0x1270 (size: 0x1)
    bool debugLight_noParticle;                                                       // 0x1271 (size: 0x1)
    bool debugLight_noFlash;                                                          // 0x1272 (size: 0x1)
    bool debugLight_noExplosion;                                                      // 0x1273 (size: 0x1)
    bool debugLight_noEnvDamage;                                                      // 0x1274 (size: 0x1)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void fromGamemode_processSaveNameIntoSubsave(FString saveSlotName, bool& isSubsave, FString& mainSaveName);
    void itemBuried(class AActor* Actor, class Adirthole_C* dirtHole);
    void filterLocalLinks(TArray<Fstruct_tv>& In, TArray<Fstruct_tv>& Out);
    void updateLandscapeVT();
    void setJolly();
    void Gamerule Is Permanent Black Hole(bool& permanentBlackhole);
    void removeMediaChannel(int32 Index, bool& removed);
    void getMediaChannel(int32 Index, class UMediaPlayer*& Media, class UMediaTexture*& Texture);
    void Take Media Channel(int32 Index, class UMediaPlayer*& MediaPlayer, class UMediaTexture*& MediaTexture, bool& isChannelFree);
    class AdupeError_C* spawnErrorObject(FTransform SpawnTransform);
    void Save Primitives();
    void Load Primitives(bool in_canLoad, bool in_isSubData, bool in_loadingSubLevel);
    FString getCurrentLevelFromGamemode();
    void loadObjects();
    void getSeason(TEnumAsByte<enum_seasons::Type>& currentSeason);
    void getSeasonFromTime(bool weekly, TEnumAsByte<enum_seasons::Type>& season);
    void slideAnim_saveRules(float Alpha);
    void slideAnim_mainMenuSaveList(float Alpha);
    void slideAnim_crafting(float InputPin);
    void getRandomServerMinigameType(int32& minigame, bool& Skip);
    void transformToPlayer(FTransform Transform);
    void playerPositionToTransform(FTransform& Transform);
    void F();
    void outputMetaPLogger(bool& success, FString& Path);
    void addToMetaPLog(FString B);
    void removeUndoDuplicates();
    float bedSleepProb();
    void setLake(class UMaterialInterface* WaterMaterial, class UMaterialInterface* waterPostProcess);
    void setBloodLake(bool blood);
    void removeEffect(const FName InputPin);
    void Update Season(bool updateLandscape);
    void Add Hint from Gamemode(FText InText, TEnumAsByte<enum_notifyType::Type> Type, bool debug);
    void NewFunction_1();
    void getList_0(FString downloaded);
    void returnList(FString& T3_2, FString& T3_1, FString& T2_2, FString& T2_1, FString& T1_2, FString& T1_1, FString& B_B, FString& B_A, FString& Former, FString& Platinum, FString& B_S);
    void getList(FString downloaded);
    void NewFunction_0(bool& NewParam);
    void calculateAreaError_0(int32& errorMargin);
    void calculateAreaError(int32& errorMargin);
    void findBuriedArea(FVector Location, class AburiedItemsArea_C*& Array Element);
    void setGatherers();
    void addEffect(FName effect, float Strength, float Time, bool incrementStrength, bool incrementTime);
    void openPicker(TArray<class UTexture2D*>& texArray, class AActor* objectApplyTo, TArray<FName>& FileNames);
    void chckcy();
    void setDryness(float Add);
    void spawnPropThroughGamemode(FName prop, FTransform InputPin, int32 Amount, class AActor*& actor );
    void calcRads();
    void saveHoldObj();
    void enterDrawPaper(class Aprop_paper_drawable_C* paperDraw, class Aprop_pencil_C* pencil);
    class AActor* processDream(TSubclassOf<class AActor> customDream);
    void Spawn Bad Sun();
    void launchServerMinigame(class AserverBox_C* server, bool isLol, bool isDeath, class Uui_serverMinigame_C*& return);
    void loadPrinterMesh(FString Name, bool skipMessages, bool importConfig, Fstruct_multisectionCustomMesh& multisectionMesh, bool& succ);
    void getRadioStations();
    void getPrinterMeshesNames(FString A);
    void canBackrooms(bool& return);
    FString makeItemNames(const TArray<uint8>& ByteArray);
    void saveTriggers();
    void loadTriggers(bool in_canLoad, bool in_isSubData, bool in_loadingSubLevel);
    void leavePassword();
    void enterPassword(class ApasswordLock_C* passlock);
    void spawnRedSky();
    void spawnBlackFog();
    void makePhoto(class UTextureRenderTarget2D*& Output_Get);
    void RemoveEquipment(int32 Index, bool Drop, bool& return);
    void AddEquipment(Fstruct_save Data, bool& return);
    void screenshot();
    void getShot(TArray<uint8>& ByteArray);
    void getObjectFromKey(const FName ItemToFind, class AActor*& Output);
    void addHallFood();
    void Undo();
    void addUndo(TArray<class AActor*>& undoObjects);
    void gameVer(FString& Version);
    void trySpawnInsomniac(bool& canSpawn, FVector& Loc);
    void removeRadar(const class AActor*& Item);
    void addRadar(const class AActor*& NewItem);
    void openPropInv(class Aprop_container_C* prop);
    void makeBeacons();
    void getDishesNames(int32 Num, TArray<FString>& codes, TArray<FString>& dishs);
    void enterClipboard(class Aprop_notebook_C* clipboard, bool uneditable);
    void AddPoints(int32 Add);
    void addAchievementPopup(Fstruct_achievement Data, int32 Type);
    void addEmail(const Fstruct_email& Item);
    void runSubtitles(FName RowName, class UAudioComponent* AudioComponent, bool customTime, float Speed, float Time);
    void setPrec();
    void putObjectInventory(class AActor* Actor, bool& return);
    void saveObjects(bool quicksave);
    void regenWeights(TArray<float>& W);
    void upgraded();
    void getWeightedObject(FName& Output);
    void breakServer();
    void calcServerEff();
    void setPower(bool active_calc, bool active_downl, bool active_coords, bool active_play, bool active_light);
    void saveSignal(const Fstruct_signalDataDynamic& signal, bool New, bool checkOnly, float downloadedAtQuality, bool selfQuality, bool& succ);
    void deleteSignal(int32 IndexToRemove);
    void deleteActiveSignal();
    void getSignalSData(Fstruct_signal_spawn& Data);
    void getSignalData(Fstruct_signal_data& Data);
    void getCurrentSObject(Fstruct_spaceObject& Data);
    void UserConstructionScript();
    void threatAmb__FinishedFunc();
    void threatAmb__UpdateFunc();
    void rulesSLideOut__FinishedFunc();
    void rulesSLideOut__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
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
    void ReceiveBeginPlay();
    void checkFordDishes();
    void ReceiveTick(float DeltaSeconds);
    void createDream(TSubclassOf<class AActor> customDream);
    void leaveDream();
    void saveAnim(bool Index);
    void save(bool quicksave, bool bypassEvent, bool overwriteSubsave);
    void wakeup();
    void sleep(class Abed_C* bed, bool dropItem, bool ignoreRagdoll);
    void autosave();
    void seVis(class UUserWidget* Target);
    void photo(FVector NewLocation, FRotator NewRotation, bool flash, class UPrimitiveComponent* attach);
    void AAA(bool bSuccess);
    void exportPhoto(int32 Dimension 1);
    void importAssets();
    void import_tv();
    void import_radio();
    void fuckYOuItem();
    void chk1();
    void checkATV();
    void CustomEvent_8();
    void threatMusic();
    void killedNisse();
    void transition(FName LevelName);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void playWtr(FString NewParam);
    void mainMenuSaveRulesSlideOut(bool Play);
    void mainMenuSaveListSlideOut(bool Play);
    void craftingMenuRecipeSlideOut(bool Play);
    void eraseEmptyObjectsTimer();
    void bullshitWidgetClick(class UWidget* InputPin);
    void debugtp();
    void debugTpGayBaby();
    void setEffectFix(int32 InputPin);
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void getAudioDevices(const TArray<FRuntimeAudioInputDeviceInfo>& AvailableDevices);
    void windParticles_check();
    void CustomEvent_0();
    void gorelockertest();
    void flowerSpawner();
    void CustomEvent();
    void CustomEvent_2();
    void CustomEvent_1();
    void ticker_radiotowerPoof();
    void CustomEvent_3();
    void ticker_lockerhead();
    void ticker_lakeMonsert();
    void CustomEvent_6();
    void CustomEvent_5();
    void CustomEvent_4();
    void tickerBody();
    void CustomEvent_7();
    void tickerFunguy();
    void ufo_ball();
    void ufo_joel();
    void ufo_boo();
    void ufo_pill();
    void ufo_midas();
    void Completed(const TArray<uint8>& DownloadedContent, EDownloadToMemoryResult Result);
    void process(const int32 BytesReceived, const int32 ContentLength);
    void CustomEvent_10(const TArray<uint8>& DownloadedContent, EDownloadToMemoryResult Result);
    void CustomEvent_9(const int32 BytesReceived, const int32 ContentLength);
    void ExecuteUbergraph_mainGamemode(int32 EntryPoint);
    void gamemodeSettingsApplied__DelegateSignature(class AmainGamemode_C* GameMode, Fstruct_settings1 Settings);
    void theItemWasBuried__DelegateSignature(class Adirthole_C* dirtHole, class AActor* Actor);
    void seasonUpdated__DelegateSignature(TEnumAsByte<enum_seasons::Type> newSeason);
    void gameSaved__DelegateSignature();
    void photoTaken__DelegateSignature();
    void sleepTriggered__DelegateSignature();
    void fellAsleep__DelegateSignature();
    void wokenUp__DelegateSignature();
    void powerChanged__DelegateSignature(bool active_calc, bool active_downl, bool active_coords, bool active_play, bool active_light);
    void dishesStop__DelegateSignature();
}; // Size: 0x1275

#endif
