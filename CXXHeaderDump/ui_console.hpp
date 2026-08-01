#ifndef UE4SS_SDK_ui_console_HPP
#define UE4SS_SDK_ui_console_HPP

class Uui_console_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UEditableTextBox* EditableTextBox;                                          // 0x0268 (size: 0x8)
    class UImage* img_activated;                                                      // 0x0270 (size: 0x8)
    class UImage* img_border_baseColor_0;                                             // 0x0278 (size: 0x8)
    class UImage* img_border_baseColor_1;                                             // 0x0280 (size: 0x8)
    class UImage* img_border_baseColor_2;                                             // 0x0288 (size: 0x8)
    class UImage* img_border_baseColor_3;                                             // 0x0290 (size: 0x8)
    class UImage* img_vis;                                                            // 0x0298 (size: 0x8)
    class URichTextBlock* richtxt_consoleLog;                                         // 0x02A0 (size: 0x8)
    class UScrollBox* ScrollBox_112;                                                  // 0x02A8 (size: 0x8)
    class UTextBlock* tex_consoleName;                                                // 0x02B0 (size: 0x8)
    class UTextBlock* text_command;                                                   // 0x02B8 (size: 0x8)
    class UTextBlock* txt_title;                                                      // 0x02C0 (size: 0x8)
    class UVerticalBox* vertbox_log;                                                  // 0x02C8 (size: 0x8)
    class AspaceRenderer_C* Renderer;                                                 // 0x02D0 (size: 0x8)
    int32 log_num;                                                                    // 0x02D8 (size: 0x4)
    FString LogText;                                                                  // 0x02E0 (size: 0x10)
    float ping;                                                                       // 0x02F0 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat_ping;                                      // 0x02F8 (size: 0x8)
    bool isPing;                                                                      // 0x0300 (size: 0x1)
    Fstruct_signal_spawn signalData;                                                  // 0x0304 (size: 0x2C)
    FString Command;                                                                  // 0x0330 (size: 0x10)
    FString consoleLine;                                                              // 0x0340 (size: 0x10)
    FString Name;                                                                     // 0x0350 (size: 0x10)
    bool Active;                                                                      // 0x0360 (size: 0x1)
    bool processing;                                                                  // 0x0361 (size: 0x1)
    TArray<class AserverBox_C*> pingingServers;                                       // 0x0368 (size: 0x10)
    class AserverBox_C* activeServer;                                                 // 0x0378 (size: 0x8)
    class Adish_C* dish;                                                              // 0x0380 (size: 0x8)
    int32 I;                                                                          // 0x0388 (size: 0x4)
    float Timer;                                                                      // 0x038C (size: 0x4)
    class AanalogDScreenTest_C* panel;                                                // 0x0390 (size: 0x8)
    FString argus;                                                                    // 0x0398 (size: 0x10)
    FString floppa;                                                                   // 0x03A8 (size: 0x10)
    FString sogga;                                                                    // 0x03B8 (size: 0x10)
    FString bingus;                                                                   // 0x03C8 (size: 0x10)
    int32 calI;                                                                       // 0x03D8 (size: 0x4)
    bool calIng;                                                                      // 0x03DC (size: 0x1)
    class UObject* tutor;                                                             // 0x03E0 (size: 0x8)
    FString fren;                                                                     // 0x03E8 (size: 0x10)
    bool isIn;                                                                        // 0x03F8 (size: 0x1)
    bool PR;                                                                          // 0x03F9 (size: 0x1)
    bool E;                                                                           // 0x03FA (size: 0x1)
    class Adish_C* activeDish;                                                        // 0x0400 (size: 0x8)
    bool scrollmode;                                                                  // 0x0408 (size: 0x1)
    class Apanel_SATconsole_C* used;                                                  // 0x0410 (size: 0x8)
    int32 servProgress;                                                               // 0x0418 (size: 0x4)
    bool enablePcUi;                                                                  // 0x041C (size: 0x1)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    bool checkFloppy(TArray<FString>& Array);
    void setColors(Fstruct_settings1 Settings);
    void dingusLook(TSubclassOf<class Aprop_dingus_C> ActorClass, FString B, FString B1, FString B2);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnKeyDown_0(FKey key1);
    void Enter();
    void upd();
    void setTickOff(const bool Tick);
    void findDish(FString B, bool& return, class Adish_C*& dish);
    void findServer(FString B, bool& return, class AActor*& server);
    void writeToLog(FString B, uint8 bracketsType);
    void fixLog();
    void enterCommand(FString C);
    void typeSymbol(FString symbol);
    void Init(FString Name, bool hide, class Adish_C* dish);
    void convert(FText InputPin, FString& Value);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
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
    void OnFocusLost(FFocusEvent InFocusEvent);
    void powerChanged(bool active_calc, bool active_downl, bool active_coords, bool active_play, bool active_light);
    void pingServers();
    void pingSingleServer(FString B);
    void setSErverTarget(FString B);
    void calibratteDish(FString InputPin);
    void getCals();
    void calAll();
    void Construct();
    void BndEvt__EditableTextBox_15_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void AnyKey(FKey Key, bool Pressed);
    void adrwewr();
    void BndEvt__umg_console_EditableTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void exportInfo();
    void serverBroken(class AserverBox_C* server, bool damagedHealth);
    void coordDishBroken(class AcoordRadarDish_C* dish, bool damagedHealth);
    void radioTowerBroken(class Aradiotower_C* radiotower, bool damagedHealth);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_ui_console(int32 EntryPoint);
}; // Size: 0x41D

#endif
